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

// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
public class UAbilitySystemBlueprintLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class GameplayAbilities.AbilitySystemComponent
// 0x11E8 (0x1330 - 0x0148)
public class UAbilitySystemComponent : UGameplayTasksComponent
{
	#region Offsets
	private ExternalOffset<TArray<FAttributeDefaults>>        _offDefaultStartingData                                        = new ExternalOffset<TArray<FAttributeDefaults>>(0x0158, false); // 0x0158(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UAttributeSet>>             _offSpawnedAttributes                                          = new ExternalOffset<TArray<UAttributeSet>>(0x0168, false);    // 0x0168(0x0010) (ExportObject, Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offOutgoingDuration                                           = new ExternalOffset<float>(0x0338);                           // 0x0338(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offIncomingDuration                                           = new ExternalOffset<float>(0x033C);                           // 0x033C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FString>>                   _offClientDebugStrings                                         = new ExternalOffset<TArray<FString>>(0x0360, false);          // 0x0360(0x0010) (Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FString>>                   _offServerDebugStrings                                         = new ExternalOffset<TArray<FString>>(0x0370, false);          // 0x0370(0x0010) (Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offUserAbilityActivationInhibited                             = new ExternalOffset<byte/*(bool)*/>(0x03E0);                  // 0x03E0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offReplicationProxyEnabled                                    = new ExternalOffset<byte/*(bool)*/>(0x03E1);                  // 0x03E1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbSuppressGrantAbility                                      = new ExternalOffset<byte/*(bool)*/>(0x03E2);                  // 0x03E2(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbSuppressGameplayCues                                      = new ExternalOffset<byte/*(bool)*/>(0x03E3);                  // 0x03E3(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<AGameplayAbilityTargetActor>> _offSpawnedTargetActors                                        = new ExternalOffset<TArray<AGameplayAbilityTargetActor>>(0x03E8, false); // 0x03E8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<AActor>                            _offOwnerActor                                                 = new ExternalOffset<AActor>(0x0420, true);                    // 0x0420(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AActor>                            _offAvatarActor                                                = new ExternalOffset<AActor>(0x0428, true);                    // 0x0428(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayAbilitySpecContainer>     _offActivatableAbilities                                       = new ExternalOffset<FGameplayAbilitySpecContainer>(0x0440, false); // 0x0440(0x0120) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UGameplayAbility>>          _offAllReplicatedInstancedAbilities                            = new ExternalOffset<TArray<UGameplayAbility>>(0x0590, false); // 0x0590(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FGameplayAbilityRepAnimMontage>    _offRepAnimMontageInfo                                         = new ExternalOffset<FGameplayAbilityRepAnimMontage>(0x0770, false); // 0x0770(0x0030) (Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbCachedIsNetSimulated                                      = new ExternalOffset<byte/*(bool)*/>(0x07A0);                  // 0x07A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbPendingMontageRep                                         = new ExternalOffset<byte/*(bool)*/>(0x07A1);                  // 0x07A1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FGameplayAbilityLocalAnimMontage>  _offLocalAnimMontageInfo                                       = new ExternalOffset<FGameplayAbilityLocalAnimMontage>(0x07A8, false); // 0x07A8(0x0030) (NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FActiveGameplayEffectsContainer>   _offActiveGameplayEffects                                      = new ExternalOffset<FActiveGameplayEffectsContainer>(0x0878, false); // 0x0878(0x0480) (Net, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FActiveGameplayCueContainer>       _offActiveGameplayCues                                         = new ExternalOffset<FActiveGameplayCueContainer>(0x0CF8, false); // 0x0CF8(0x0128) (Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FActiveGameplayCueContainer>       _offMinimalReplicationGameplayCues                             = new ExternalOffset<FActiveGameplayCueContainer>(0x0E20, false); // 0x0E20(0x0128) (Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<char>>                      _offBlockedAbilityBindings                                     = new ExternalOffset<TArray<char>>(0x1070, false);             // 0x1070(0x0010) (Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FMinimalReplicationTagCountMap>    _offMinimalReplicationTags                                     = new ExternalOffset<FMinimalReplicationTagCountMap>(0x11A8, false); // 0x11A8(0x0060) (Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FReplicatedPredictionKeyMap>       _offReplicatedPredictionKeyMap                                 = new ExternalOffset<FReplicatedPredictionKeyMap>(0x1218, false); // 0x1218(0x0118) (Net, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FAttributeDefaults>                         DefaultStartingData                                            => _offDefaultStartingData.GetValue();
	public TArray<UAttributeSet>                              SpawnedAttributes                                              => _offSpawnedAttributes.GetValue();
	public float                                              OutgoingDuration                                               => _offOutgoingDuration.GetValue();
	public float                                              IncomingDuration                                               => _offIncomingDuration.GetValue();
	public TArray<FString>                                    ClientDebugStrings                                             => _offClientDebugStrings.GetValue();
	public TArray<FString>                                    ServerDebugStrings                                             => _offServerDebugStrings.GetValue();
	public byte/*(bool)*/                                     UserAbilityActivationInhibited                                 => _offUserAbilityActivationInhibited.GetValue();
	public byte/*(bool)*/                                     ReplicationProxyEnabled                                        => _offReplicationProxyEnabled.GetValue();
	public byte/*(bool)*/                                     bSuppressGrantAbility                                          => _offbSuppressGrantAbility.GetValue();
	public byte/*(bool)*/                                     bSuppressGameplayCues                                          => _offbSuppressGameplayCues.GetValue();
	public TArray<AGameplayAbilityTargetActor>                SpawnedTargetActors                                            => _offSpawnedTargetActors.GetValue();
	public AActor                                             OwnerActor                                                     => _offOwnerActor.GetValue();
	public AActor                                             AvatarActor                                                    => _offAvatarActor.GetValue();
	public FGameplayAbilitySpecContainer                      ActivatableAbilities                                           => _offActivatableAbilities.GetValue();
	public TArray<UGameplayAbility>                           AllReplicatedInstancedAbilities                                => _offAllReplicatedInstancedAbilities.GetValue();
	public FGameplayAbilityRepAnimMontage                     RepAnimMontageInfo                                             => _offRepAnimMontageInfo.GetValue();
	public byte/*(bool)*/                                     bCachedIsNetSimulated                                          => _offbCachedIsNetSimulated.GetValue();
	public byte/*(bool)*/                                     bPendingMontageRep                                             => _offbPendingMontageRep.GetValue();
	public FGameplayAbilityLocalAnimMontage                   LocalAnimMontageInfo                                           => _offLocalAnimMontageInfo.GetValue();
	public FActiveGameplayEffectsContainer                    ActiveGameplayEffects                                          => _offActiveGameplayEffects.GetValue();
	public FActiveGameplayCueContainer                        ActiveGameplayCues                                             => _offActiveGameplayCues.GetValue();
	public FActiveGameplayCueContainer                        MinimalReplicationGameplayCues                                 => _offMinimalReplicationGameplayCues.GetValue();
	public TArray<char>                                       BlockedAbilityBindings                                         => _offBlockedAbilityBindings.GetValue();
	public FMinimalReplicationTagCountMap                     MinimalReplicationTags                                         => _offMinimalReplicationTags.GetValue();
	public FReplicatedPredictionKeyMap                        ReplicatedPredictionKeyMap                                     => _offReplicatedPredictionKeyMap.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilitySystemDebugHUD
// 0x0070 (0x0338 - 0x02C8)
public class AAbilitySystemDebugHUD : AHUD
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class GameplayAbilities.AbilitySystemGlobals
// 0x01E0 (0x0208 - 0x0028)
public class UAbilitySystemGlobals : UObject
{
	#region Offsets
	private ExternalOffset<FSoftClassPath>                    _offAbilitySystemGlobalsClassName                              = new ExternalOffset<FSoftClassPath>(0x0028, false);           // 0x0028(0x0018) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTag>                      _offActivateFailIsDeadTag                                      = new ExternalOffset<FGameplayTag>(0x0068, false);             // 0x0068(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                             _offActivateFailIsDeadName                                     = new ExternalOffset<FName>(0x0070, false);                    // 0x0070(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTag>                      _offActivateFailCooldownTag                                    = new ExternalOffset<FGameplayTag>(0x0078, false);             // 0x0078(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                             _offActivateFailCooldownName                                   = new ExternalOffset<FName>(0x0080, false);                    // 0x0080(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTag>                      _offActivateFailCostTag                                        = new ExternalOffset<FGameplayTag>(0x0088, false);             // 0x0088(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                             _offActivateFailCostName                                       = new ExternalOffset<FName>(0x0090, false);                    // 0x0090(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTag>                      _offActivateFailTagsBlockedTag                                 = new ExternalOffset<FGameplayTag>(0x0098, false);             // 0x0098(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                             _offActivateFailTagsBlockedName                                = new ExternalOffset<FName>(0x00A0, false);                    // 0x00A0(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTag>                      _offActivateFailTagsMissingTag                                 = new ExternalOffset<FGameplayTag>(0x00A8, false);             // 0x00A8(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                             _offActivateFailTagsMissingName                                = new ExternalOffset<FName>(0x00B0, false);                    // 0x00B0(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTag>                      _offActivateFailNetworkingTag                                  = new ExternalOffset<FGameplayTag>(0x00B8, false);             // 0x00B8(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                             _offActivateFailNetworkingName                                 = new ExternalOffset<FName>(0x00C0, false);                    // 0x00C0(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offMinimalReplicationTagCountBits                             = new ExternalOffset<int>(0x00C8);                             // 0x00C8(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAllowGameplayModEvaluationChannels                        = new ExternalOffset<byte/*(bool)*/>(0x00CC);                  // 0x00CC(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<EGameplayModEvaluationChannel>     _offDefaultGameplayModEvaluationChannel                        = new ExternalOffset<EGameplayModEvaluationChannel>(0x00CD, false); // 0x00CD(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<FName>                             _offGameplayModEvaluationChannelAliases[0xA]                   = new ExternalOffset<FName>(0x00D0, false);                    // 0x00D0(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FSoftObjectPath>                   _offGlobalCurveTableName                                       = new ExternalOffset<FSoftObjectPath>(0x0120, false);          // 0x0120(0x0018) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UCurveTable>                       _offGlobalCurveTable                                           = new ExternalOffset<UCurveTable>(0x0138, true);               // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FSoftObjectPath>                   _offGlobalAttributeMetaDataTableName                           = new ExternalOffset<FSoftObjectPath>(0x0140, false);          // 0x0140(0x0018) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UDataTable>                        _offGlobalAttributeMetaDataTable                               = new ExternalOffset<UDataTable>(0x0158, true);                // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FSoftObjectPath>                   _offGlobalAttributeSetDefaultsTableName                        = new ExternalOffset<FSoftObjectPath>(0x0160, false);          // 0x0160(0x0018) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<FSoftObjectPath>>           _offGlobalAttributeSetDefaultsTableNames                       = new ExternalOffset<TArray<FSoftObjectPath>>(0x0178, false);  // 0x0178(0x0010) (ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UCurveTable>>               _offGlobalAttributeDefaultsTables                              = new ExternalOffset<TArray<UCurveTable>>(0x0188, false);      // 0x0188(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FSoftObjectPath>                   _offGlobalGameplayCueManagerClass                              = new ExternalOffset<FSoftObjectPath>(0x0198, false);          // 0x0198(0x0018) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FSoftObjectPath>                   _offGlobalGameplayCueManagerName                               = new ExternalOffset<FSoftObjectPath>(0x01B0, false);          // 0x01B0(0x0018) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<FString>>                   _offGameplayCueNotifyPaths                                     = new ExternalOffset<TArray<FString>>(0x01C8, false);          // 0x01C8(0x0010) (ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FSoftObjectPath>                   _offGameplayTagResponseTableName                               = new ExternalOffset<FSoftObjectPath>(0x01D8, false);          // 0x01D8(0x0018) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UGameplayTagReponseTable>          _offGameplayTagResponseTable                                   = new ExternalOffset<UGameplayTagReponseTable>(0x01F0, true);  // 0x01F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offPredictTargetGameplayEffects                               = new ExternalOffset<byte/*(bool)*/>(0x01F8);                  // 0x01F8(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UGameplayCueManager>               _offGlobalGameplayCueManager                                   = new ExternalOffset<UGameplayCueManager>(0x0200, true);       // 0x0200(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FSoftClassPath                                     AbilitySystemGlobalsClassName                                  => _offAbilitySystemGlobalsClassName.GetValue();
	public FGameplayTag                                       ActivateFailIsDeadTag                                          => _offActivateFailIsDeadTag.GetValue();
	public FName                                              ActivateFailIsDeadName                                         => _offActivateFailIsDeadName.GetValue();
	public FGameplayTag                                       ActivateFailCooldownTag                                        => _offActivateFailCooldownTag.GetValue();
	public FName                                              ActivateFailCooldownName                                       => _offActivateFailCooldownName.GetValue();
	public FGameplayTag                                       ActivateFailCostTag                                            => _offActivateFailCostTag.GetValue();
	public FName                                              ActivateFailCostName                                           => _offActivateFailCostName.GetValue();
	public FGameplayTag                                       ActivateFailTagsBlockedTag                                     => _offActivateFailTagsBlockedTag.GetValue();
	public FName                                              ActivateFailTagsBlockedName                                    => _offActivateFailTagsBlockedName.GetValue();
	public FGameplayTag                                       ActivateFailTagsMissingTag                                     => _offActivateFailTagsMissingTag.GetValue();
	public FName                                              ActivateFailTagsMissingName                                    => _offActivateFailTagsMissingName.GetValue();
	public FGameplayTag                                       ActivateFailNetworkingTag                                      => _offActivateFailNetworkingTag.GetValue();
	public FName                                              ActivateFailNetworkingName                                     => _offActivateFailNetworkingName.GetValue();
	public int                                                MinimalReplicationTagCountBits                                 => _offMinimalReplicationTagCountBits.GetValue();
	public byte/*(bool)*/                                     bAllowGameplayModEvaluationChannels                            => _offbAllowGameplayModEvaluationChannels.GetValue();
	public EGameplayModEvaluationChannel                      DefaultGameplayModEvaluationChannel                            => _offDefaultGameplayModEvaluationChannel.GetValue();
	public FSoftObjectPath                                    GlobalCurveTableName                                           => _offGlobalCurveTableName.GetValue();
	public UCurveTable                                        GlobalCurveTable                                               => _offGlobalCurveTable.GetValue();
	public FSoftObjectPath                                    GlobalAttributeMetaDataTableName                               => _offGlobalAttributeMetaDataTableName.GetValue();
	public UDataTable                                         GlobalAttributeMetaDataTable                                   => _offGlobalAttributeMetaDataTable.GetValue();
	public FSoftObjectPath                                    GlobalAttributeSetDefaultsTableName                            => _offGlobalAttributeSetDefaultsTableName.GetValue();
	public TArray<FSoftObjectPath>                            GlobalAttributeSetDefaultsTableNames                           => _offGlobalAttributeSetDefaultsTableNames.GetValue();
	public TArray<UCurveTable>                                GlobalAttributeDefaultsTables                                  => _offGlobalAttributeDefaultsTables.GetValue();
	public FSoftObjectPath                                    GlobalGameplayCueManagerClass                                  => _offGlobalGameplayCueManagerClass.GetValue();
	public FSoftObjectPath                                    GlobalGameplayCueManagerName                                   => _offGlobalGameplayCueManagerName.GetValue();
	public TArray<FString>                                    GameplayCueNotifyPaths                                         => _offGameplayCueNotifyPaths.GetValue();
	public FSoftObjectPath                                    GameplayTagResponseTableName                                   => _offGameplayTagResponseTableName.GetValue();
	public UGameplayTagReponseTable                           GameplayTagResponseTable                                       => _offGameplayTagResponseTable.GetValue();
	public byte/*(bool)*/                                     PredictTargetGameplayEffects                                   => _offPredictTargetGameplayEffects.GetValue();
	public UGameplayCueManager                                GlobalGameplayCueManager                                       => _offGlobalGameplayCueManager.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilitySystemInterface
// 0x0000 (0x0028 - 0x0028)
public class UAbilitySystemInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class GameplayAbilities.AbilitySystemReplicationProxyInterface
// 0x0000 (0x0028 - 0x0028)
public class UAbilitySystemReplicationProxyInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class GameplayAbilities.AttributeSet
// 0x0000 (0x0028 - 0x0028)
public class UAttributeSet : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class GameplayAbilities.AbilitySystemTestAttributeSet
// 0x0048 (0x0070 - 0x0028)
public class UAbilitySystemTestAttributeSet : UAttributeSet
{
	#region Offsets
	private ExternalOffset<float>                             _offMaxHealth                                                  = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offHealth                                                     = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMana                                                       = new ExternalOffset<float>(0x0038);                           // 0x0038(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxMana                                                    = new ExternalOffset<float>(0x003C);                           // 0x003C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offdamage                                                     = new ExternalOffset<float>(0x0040);                           // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSpellDamage                                                = new ExternalOffset<float>(0x0044);                           // 0x0044(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPhysicalDamage                                             = new ExternalOffset<float>(0x0048);                           // 0x0048(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCritChance                                                 = new ExternalOffset<float>(0x004C);                           // 0x004C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCritMultiplier                                             = new ExternalOffset<float>(0x0050);                           // 0x0050(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offArmorDamageReduction                                       = new ExternalOffset<float>(0x0054);                           // 0x0054(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDodgeChance                                                = new ExternalOffset<float>(0x0058);                           // 0x0058(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offLifeSteal                                                  = new ExternalOffset<float>(0x005C);                           // 0x005C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offStrength                                                   = new ExternalOffset<float>(0x0060);                           // 0x0060(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offStackingAttribute1                                         = new ExternalOffset<float>(0x0064);                           // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offStackingAttribute2                                         = new ExternalOffset<float>(0x0068);                           // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offNoStackAttribute                                           = new ExternalOffset<float>(0x006C);                           // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              MaxHealth                                                      => _offMaxHealth.GetValue();
	public float                                              Health                                                         => _offHealth.GetValue();
	public float                                              Mana                                                           => _offMana.GetValue();
	public float                                              MaxMana                                                        => _offMaxMana.GetValue();
	public float                                              damage                                                         => _offdamage.GetValue();
	public float                                              SpellDamage                                                    => _offSpellDamage.GetValue();
	public float                                              PhysicalDamage                                                 => _offPhysicalDamage.GetValue();
	public float                                              CritChance                                                     => _offCritChance.GetValue();
	public float                                              CritMultiplier                                                 => _offCritMultiplier.GetValue();
	public float                                              ArmorDamageReduction                                           => _offArmorDamageReduction.GetValue();
	public float                                              DodgeChance                                                    => _offDodgeChance.GetValue();
	public float                                              LifeSteal                                                      => _offLifeSteal.GetValue();
	public float                                              Strength                                                       => _offStrength.GetValue();
	public float                                              StackingAttribute1                                             => _offStackingAttribute1.GetValue();
	public float                                              StackingAttribute2                                             => _offStackingAttribute2.GetValue();
	public float                                              NoStackAttribute                                               => _offNoStackAttribute.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilitySystemTestPawn
// 0x0027 (0x02F0 - 0x02C9)
public class AAbilitySystemTestPawn : ADefaultPawn
{
	#region Offsets
	private ExternalOffset<UAbilitySystemComponent>           _offAbilitySystemComponent                                     = new ExternalOffset<UAbilitySystemComponent>(0x02E8, true);   // 0x02E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UAbilitySystemComponent                            AbilitySystemComponent                                         => _offAbilitySystemComponent.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask
// 0x0010 (0x0078 - 0x0068)
public class UAbilityTask : UGameplayTask
{
	#region Offsets
	private ExternalOffset<UGameplayAbility>                  _offAbility                                                    = new ExternalOffset<UGameplayAbility>(0x0068, true);          // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAbilitySystemComponent>           _offAbilitySystemComponent                                     = new ExternalOffset<UAbilitySystemComponent>(0x0070, true);   // 0x0070(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UGameplayAbility                                   Ability                                                        => _offAbility.GetValue();
	public UAbilitySystemComponent                            AbilitySystemComponent                                         => _offAbilitySystemComponent.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// 0x0030 (0x00A8 - 0x0078)
public class UAbilityTask_ApplyRootMotion_Base : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FName>                             _offForceName                                                  = new ExternalOffset<FName>(0x0080, false);                    // 0x0080(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<ERootMotionFinishVelocityMode>     _offFinishVelocityMode                                         = new ExternalOffset<ERootMotionFinishVelocityMode>(0x0088, false); // 0x0088(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FVector>                           _offFinishSetVelocity                                          = new ExternalOffset<FVector>(0x008C, false);                  // 0x008C(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offFinishClampVelocity                                        = new ExternalOffset<float>(0x0098);                           // 0x0098(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UCharacterMovementComponent>       _offMovementComponent                                          = new ExternalOffset<UCharacterMovementComponent>(0x00A0, true); // 0x00A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FName                                              ForceName                                                      => _offForceName.GetValue();
	public ERootMotionFinishVelocityMode                      FinishVelocityMode                                             => _offFinishVelocityMode.GetValue();
	public FVector                                            FinishSetVelocity                                              => _offFinishSetVelocity.GetValue();
	public float                                              FinishClampVelocity                                            => _offFinishClampVelocity.GetValue();
	public UCharacterMovementComponent                        MovementComponent                                              => _offMovementComponent.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// 0x0040 (0x00E8 - 0x00A8)
public class UAbilityTask_ApplyRootMotionConstantForce : UAbilityTask_ApplyRootMotion_Base
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFinish                                                   = new ExternalOffset<FScriptMulticastDelegate>(0x00B8, false); // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offWorldDirection                                             = new ExternalOffset<FVector>(0x00C8, false);                  // 0x00C8(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offStrength                                                   = new ExternalOffset<float>(0x00D4);                           // 0x00D4(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offDuration                                                   = new ExternalOffset<float>(0x00D8);                           // 0x00D8(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsAdditive                                                = new ExternalOffset<byte/*(bool)*/>(0x00DC);                  // 0x00DC(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UCurveFloat>                       _offStrengthOverTime                                           = new ExternalOffset<UCurveFloat>(0x00E0, true);               // 0x00E0(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnFinish                                                       => _offOnFinish.GetValue();
	public FVector                                            WorldDirection                                                 => _offWorldDirection.GetValue();
	public float                                              Strength                                                       => _offStrength.GetValue();
	public float                                              Duration                                                       => _offDuration.GetValue();
	public byte/*(bool)*/                                     bIsAdditive                                                    => _offbIsAdditive.GetValue();
	public UCurveFloat                                        StrengthOverTime                                               => _offStrengthOverTime.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// 0x0060 (0x0108 - 0x00A8)
public class UAbilityTask_ApplyRootMotionJumpForce : UAbilityTask_ApplyRootMotion_Base
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFinish                                                   = new ExternalOffset<FScriptMulticastDelegate>(0x00B8, false); // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnLanded                                                   = new ExternalOffset<FScriptMulticastDelegate>(0x00C8, false); // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotator>                          _offRotation                                                   = new ExternalOffset<FRotator>(0x00D8, false);                 // 0x00D8(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offdistance                                                   = new ExternalOffset<float>(0x00E4);                           // 0x00E4(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offHeight                                                     = new ExternalOffset<float>(0x00E8);                           // 0x00E8(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offDuration                                                   = new ExternalOffset<float>(0x00EC);                           // 0x00EC(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offMinimumLandedTriggerTime                                   = new ExternalOffset<float>(0x00F0);                           // 0x00F0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbFinishOnLanded                                            = new ExternalOffset<byte/*(bool)*/>(0x00F4);                  // 0x00F4(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UCurveVector>                      _offPathOffsetCurve                                            = new ExternalOffset<UCurveVector>(0x00F8, true);              // 0x00F8(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UCurveFloat>                       _offTimeMappingCurve                                           = new ExternalOffset<UCurveFloat>(0x0100, true);               // 0x0100(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnFinish                                                       => _offOnFinish.GetValue();
	public FScriptMulticastDelegate                           OnLanded                                                       => _offOnLanded.GetValue();
	public FRotator                                           Rotation                                                       => _offRotation.GetValue();
	public float                                              distance                                                       => _offdistance.GetValue();
	public float                                              Height                                                         => _offHeight.GetValue();
	public float                                              Duration                                                       => _offDuration.GetValue();
	public float                                              MinimumLandedTriggerTime                                       => _offMinimumLandedTriggerTime.GetValue();
	public byte/*(bool)*/                                     bFinishOnLanded                                                => _offbFinishOnLanded.GetValue();
	public UCurveVector                                       PathOffsetCurve                                                => _offPathOffsetCurve.GetValue();
	public UCurveFloat                                        TimeMappingCurve                                               => _offTimeMappingCurve.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// 0x0080 (0x0128 - 0x00A8)
public class UAbilityTask_ApplyRootMotionMoveToActorForce : UAbilityTask_ApplyRootMotion_Base
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFinished                                                 = new ExternalOffset<FScriptMulticastDelegate>(0x00B8, false); // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offStartLocation                                              = new ExternalOffset<FVector>(0x00D0, false);                  // 0x00D0(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FVector>                           _offTargetLocation                                             = new ExternalOffset<FVector>(0x00DC, false);                  // 0x00DC(0x000C) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<AActor>                            _offTargetActor                                                = new ExternalOffset<AActor>(0x00E8, true);                    // 0x00E8(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FVector>                           _offTargetLocationOffset                                       = new ExternalOffset<FVector>(0x00F0, false);                  // 0x00F0(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<ERootMotionMoveToActorTargetOffsetType> _offOffsetAlignment                                            = new ExternalOffset<ERootMotionMoveToActorTargetOffsetType>(0x00FC, false); // 0x00FC(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offDuration                                                   = new ExternalOffset<float>(0x0100);                           // 0x0100(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbDisableDestinationReachedInterrupt                        = new ExternalOffset<byte/*(bool)*/>(0x0104);                  // 0x0104(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbSetNewMovementMode                                        = new ExternalOffset<byte/*(bool)*/>(0x0105);                  // 0x0105(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TEnumAsByte<EMovementMode>>        _offNewMovementMode                                            = new ExternalOffset<TEnumAsByte<EMovementMode>>(0x0106, false); // 0x0106(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbRestrictSpeedToExpected                                   = new ExternalOffset<byte/*(bool)*/>(0x0107);                  // 0x0107(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UCurveVector>                      _offPathOffsetCurve                                            = new ExternalOffset<UCurveVector>(0x0108, true);              // 0x0108(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UCurveFloat>                       _offTimeMappingCurve                                           = new ExternalOffset<UCurveFloat>(0x0110, true);               // 0x0110(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UCurveFloat>                       _offTargetLerpSpeedHorizontalCurve                             = new ExternalOffset<UCurveFloat>(0x0118, true);               // 0x0118(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UCurveFloat>                       _offTargetLerpSpeedVerticalCurve                               = new ExternalOffset<UCurveFloat>(0x0120, true);               // 0x0120(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnFinished                                                     => _offOnFinished.GetValue();
	public FVector                                            StartLocation                                                  => _offStartLocation.GetValue();
	public FVector                                            TargetLocation                                                 => _offTargetLocation.GetValue();
	public AActor                                             TargetActor                                                    => _offTargetActor.GetValue();
	public FVector                                            TargetLocationOffset                                           => _offTargetLocationOffset.GetValue();
	public ERootMotionMoveToActorTargetOffsetType             OffsetAlignment                                                => _offOffsetAlignment.GetValue();
	public float                                              Duration                                                       => _offDuration.GetValue();
	public byte/*(bool)*/                                     bDisableDestinationReachedInterrupt                            => _offbDisableDestinationReachedInterrupt.GetValue();
	public byte/*(bool)*/                                     bSetNewMovementMode                                            => _offbSetNewMovementMode.GetValue();
	public TEnumAsByte<EMovementMode>                         NewMovementMode                                                => _offNewMovementMode.GetValue();
	public byte/*(bool)*/                                     bRestrictSpeedToExpected                                       => _offbRestrictSpeedToExpected.GetValue();
	public UCurveVector                                       PathOffsetCurve                                                => _offPathOffsetCurve.GetValue();
	public UCurveFloat                                        TimeMappingCurve                                               => _offTimeMappingCurve.GetValue();
	public UCurveFloat                                        TargetLerpSpeedHorizontalCurve                                 => _offTargetLerpSpeedHorizontalCurve.GetValue();
	public UCurveFloat                                        TargetLerpSpeedVerticalCurve                                   => _offTargetLerpSpeedVerticalCurve.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// 0x0058 (0x0100 - 0x00A8)
public class UAbilityTask_ApplyRootMotionMoveToForce : UAbilityTask_ApplyRootMotion_Base
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnTimedOut                                                 = new ExternalOffset<FScriptMulticastDelegate>(0x00B8, false); // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnTimedOutAndDestinationReached                            = new ExternalOffset<FScriptMulticastDelegate>(0x00C8, false); // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offStartLocation                                              = new ExternalOffset<FVector>(0x00D8, false);                  // 0x00D8(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FVector>                           _offTargetLocation                                             = new ExternalOffset<FVector>(0x00E4, false);                  // 0x00E4(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offDuration                                                   = new ExternalOffset<float>(0x00F0);                           // 0x00F0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbSetNewMovementMode                                        = new ExternalOffset<byte/*(bool)*/>(0x00F4);                  // 0x00F4(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TEnumAsByte<EMovementMode>>        _offNewMovementMode                                            = new ExternalOffset<TEnumAsByte<EMovementMode>>(0x00F5, false); // 0x00F5(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbRestrictSpeedToExpected                                   = new ExternalOffset<byte/*(bool)*/>(0x00F6);                  // 0x00F6(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UCurveVector>                      _offPathOffsetCurve                                            = new ExternalOffset<UCurveVector>(0x00F8, true);              // 0x00F8(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnTimedOut                                                     => _offOnTimedOut.GetValue();
	public FScriptMulticastDelegate                           OnTimedOutAndDestinationReached                                => _offOnTimedOutAndDestinationReached.GetValue();
	public FVector                                            StartLocation                                                  => _offStartLocation.GetValue();
	public FVector                                            TargetLocation                                                 => _offTargetLocation.GetValue();
	public float                                              Duration                                                       => _offDuration.GetValue();
	public byte/*(bool)*/                                     bSetNewMovementMode                                            => _offbSetNewMovementMode.GetValue();
	public TEnumAsByte<EMovementMode>                         NewMovementMode                                                => _offNewMovementMode.GetValue();
	public byte/*(bool)*/                                     bRestrictSpeedToExpected                                       => _offbRestrictSpeedToExpected.GetValue();
	public UCurveVector                                       PathOffsetCurve                                                => _offPathOffsetCurve.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// 0x0068 (0x0110 - 0x00A8)
public class UAbilityTask_ApplyRootMotionRadialForce : UAbilityTask_ApplyRootMotion_Base
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFinish                                                   = new ExternalOffset<FScriptMulticastDelegate>(0x00B8, false); // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offLocation                                                   = new ExternalOffset<FVector>(0x00C8, false);                  // 0x00C8(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<AActor>                            _offLocationActor                                              = new ExternalOffset<AActor>(0x00D8, true);                    // 0x00D8(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offStrength                                                   = new ExternalOffset<float>(0x00E0);                           // 0x00E0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offDuration                                                   = new ExternalOffset<float>(0x00E4);                           // 0x00E4(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offRadius                                                     = new ExternalOffset<float>(0x00E8);                           // 0x00E8(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsPush                                                    = new ExternalOffset<byte/*(bool)*/>(0x00EC);                  // 0x00EC(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsAdditive                                                = new ExternalOffset<byte/*(bool)*/>(0x00ED);                  // 0x00ED(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbNoZForce                                                  = new ExternalOffset<byte/*(bool)*/>(0x00EE);                  // 0x00EE(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UCurveFloat>                       _offStrengthDistanceFalloff                                    = new ExternalOffset<UCurveFloat>(0x00F0, true);               // 0x00F0(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UCurveFloat>                       _offStrengthOverTime                                           = new ExternalOffset<UCurveFloat>(0x00F8, true);               // 0x00F8(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbUseFixedWorldDirection                                    = new ExternalOffset<byte/*(bool)*/>(0x0100);                  // 0x0100(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FRotator>                          _offFixedWorldDirection                                        = new ExternalOffset<FRotator>(0x0104, false);                 // 0x0104(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnFinish                                                       => _offOnFinish.GetValue();
	public FVector                                            Location                                                       => _offLocation.GetValue();
	public AActor                                             LocationActor                                                  => _offLocationActor.GetValue();
	public float                                              Strength                                                       => _offStrength.GetValue();
	public float                                              Duration                                                       => _offDuration.GetValue();
	public float                                              Radius                                                         => _offRadius.GetValue();
	public byte/*(bool)*/                                     bIsPush                                                        => _offbIsPush.GetValue();
	public byte/*(bool)*/                                     bIsAdditive                                                    => _offbIsAdditive.GetValue();
	public byte/*(bool)*/                                     bNoZForce                                                      => _offbNoZForce.GetValue();
	public UCurveFloat                                        StrengthDistanceFalloff                                        => _offStrengthDistanceFalloff.GetValue();
	public UCurveFloat                                        StrengthOverTime                                               => _offStrengthOverTime.GetValue();
	public byte/*(bool)*/                                     bUseFixedWorldDirection                                        => _offbUseFixedWorldDirection.GetValue();
	public FRotator                                           FixedWorldDirection                                            => _offFixedWorldDirection.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_MoveToLocation
// 0x0050 (0x00C8 - 0x0078)
public class UAbilityTask_MoveToLocation : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnTargetLocationReached                                    = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offStartLocation                                              = new ExternalOffset<FVector>(0x0094, false);                  // 0x0094(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FVector>                           _offTargetLocation                                             = new ExternalOffset<FVector>(0x00A0, false);                  // 0x00A0(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offDurationOfMovement                                         = new ExternalOffset<float>(0x00AC);                           // 0x00AC(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UCurveFloat>                       _offLerpCurve                                                  = new ExternalOffset<UCurveFloat>(0x00B8, true);               // 0x00B8(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UCurveVector>                      _offLerpCurveVector                                            = new ExternalOffset<UCurveVector>(0x00C0, true);              // 0x00C0(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnTargetLocationReached                                        => _offOnTargetLocationReached.GetValue();
	public FVector                                            StartLocation                                                  => _offStartLocation.GetValue();
	public FVector                                            TargetLocation                                                 => _offTargetLocation.GetValue();
	public float                                              DurationOfMovement                                             => _offDurationOfMovement.GetValue();
	public UCurveFloat                                        LerpCurve                                                      => _offLerpCurve.GetValue();
	public UCurveVector                                       LerpCurveVector                                                => _offLerpCurveVector.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// 0x0018 (0x0090 - 0x0078)
public class UAbilityTask_NetworkSyncPoint : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSync                                                     = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSync                                                         => _offOnSync.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// 0x0089 (0x0101 - 0x0078)
public class UAbilityTask_PlayMontageAndWait : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnCompleted                                                = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnBlendOut                                                 = new ExternalOffset<FScriptMulticastDelegate>(0x0090, false); // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnInterrupted                                              = new ExternalOffset<FScriptMulticastDelegate>(0x00A0, false); // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnCancelled                                                = new ExternalOffset<FScriptMulticastDelegate>(0x00B0, false); // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                      _offMontageToPlay                                              = new ExternalOffset<UAnimMontage>(0x00E8, true);              // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offRate                                                       = new ExternalOffset<float>(0x00F0);                           // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FName>                             _offStartSection                                               = new ExternalOffset<FName>(0x00F4, false);                    // 0x00F4(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offAnimRootMotionTranslationScale                             = new ExternalOffset<float>(0x00FC);                           // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offbStopWhenAbilityEnds                                       = new ExternalOffset<byte/*(bool)*/>(0x0100);                  // 0x0100(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnCompleted                                                    => _offOnCompleted.GetValue();
	public FScriptMulticastDelegate                           OnBlendOut                                                     => _offOnBlendOut.GetValue();
	public FScriptMulticastDelegate                           OnInterrupted                                                  => _offOnInterrupted.GetValue();
	public FScriptMulticastDelegate                           OnCancelled                                                    => _offOnCancelled.GetValue();
	public UAnimMontage                                       MontageToPlay                                                  => _offMontageToPlay.GetValue();
	public float                                              Rate                                                           => _offRate.GetValue();
	public FName                                              StartSection                                                   => _offStartSection.GetValue();
	public float                                              AnimRootMotionTranslationScale                                 => _offAnimRootMotionTranslationScale.GetValue();
	public byte/*(bool)*/                                     bStopWhenAbilityEnds                                           => _offbStopWhenAbilityEnds.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_Repeat
// 0x0028 (0x00A0 - 0x0078)
public class UAbilityTask_Repeat : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnPerformAction                                            = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFinished                                                 = new ExternalOffset<FScriptMulticastDelegate>(0x0090, false); // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnPerformAction                                                => _offOnPerformAction.GetValue();
	public FScriptMulticastDelegate                           OnFinished                                                     => _offOnFinished.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_SpawnActor
// 0x0028 (0x00A0 - 0x0078)
public class UAbilityTask_SpawnActor : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offSuccess                                                    = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offDidNotSpawn                                                = new ExternalOffset<FScriptMulticastDelegate>(0x0090, false); // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           Success                                                        => _offSuccess.GetValue();
	public FScriptMulticastDelegate                           DidNotSpawn                                                    => _offDidNotSpawn.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_StartAbilityState
// 0x0028 (0x00A0 - 0x0078)
public class UAbilityTask_StartAbilityState : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnStateEnded                                               = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnStateInterrupted                                         = new ExternalOffset<FScriptMulticastDelegate>(0x0090, false); // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnStateEnded                                                   => _offOnStateEnded.GetValue();
	public FScriptMulticastDelegate                           OnStateInterrupted                                             => _offOnStateInterrupted.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// 0x0018 (0x0090 - 0x0078)
public class UAbilityTask_VisualizeTargeting : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offTimeElapsed                                                = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           TimeElapsed                                                    => _offTimeElapsed.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// 0x0018 (0x0090 - 0x0078)
public class UAbilityTask_WaitAbilityActivate : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnActivate                                                 = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnActivate                                                     => _offOnActivate.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// 0x0018 (0x0090 - 0x0078)
public class UAbilityTask_WaitAbilityCommit : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnCommit                                                   = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnCommit                                                       => _offOnCommit.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// 0x0068 (0x00E0 - 0x0078)
public class UAbilityTask_WaitAttributeChange : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnChange                                                   = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UAbilitySystemComponent>           _offExternalOwner                                              = new ExternalOffset<UAbilitySystemComponent>(0x00D8, true);   // 0x00D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnChange                                                       => _offOnChange.GetValue();
	public UAbilitySystemComponent                            ExternalOwner                                                  => _offExternalOwner.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// 0x0098 (0x0110 - 0x0078)
public class UAbilityTask_WaitAttributeChangeRatioThreshold : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnChange                                                   = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UAbilitySystemComponent>           _offExternalOwner                                              = new ExternalOffset<UAbilitySystemComponent>(0x0108, true);   // 0x0108(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnChange                                                       => _offOnChange.GetValue();
	public UAbilitySystemComponent                            ExternalOwner                                                  => _offExternalOwner.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// 0x0060 (0x00D8 - 0x0078)
public class UAbilityTask_WaitAttributeChangeThreshold : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnChange                                                   = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UAbilitySystemComponent>           _offExternalOwner                                              = new ExternalOffset<UAbilitySystemComponent>(0x00D0, true);   // 0x00D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnChange                                                       => _offOnChange.GetValue();
	public UAbilitySystemComponent                            ExternalOwner                                                  => _offExternalOwner.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitCancel
// 0x0018 (0x0090 - 0x0078)
public class UAbilityTask_WaitCancel : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnCancel                                                   = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnCancel                                                       => _offOnCancel.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitConfirm
// 0x0018 (0x0090 - 0x0078)
public class UAbilityTask_WaitConfirm : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnConfirm                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnConfirm                                                      => _offOnConfirm.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// 0x0028 (0x00A0 - 0x0078)
public class UAbilityTask_WaitConfirmCancel : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnConfirm                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnCancel                                                   = new ExternalOffset<FScriptMulticastDelegate>(0x0090, false); // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnConfirm                                                      => _offOnConfirm.GetValue();
	public FScriptMulticastDelegate                           OnCancel                                                       => _offOnCancel.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitDelay
// 0x0018 (0x0090 - 0x0078)
public class UAbilityTask_WaitDelay : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFinish                                                   = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnFinish                                                       => _offOnFinish.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// 0x0138 (0x01B0 - 0x0078)
public class UAbilityTask_WaitGameplayEffectApplied : UAbilityTask
{
	#region Offsets
	private ExternalOffset<UAbilitySystemComponent>           _offExternalOwner                                              = new ExternalOffset<UAbilitySystemComponent>(0x01A8, true);   // 0x01A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UAbilitySystemComponent                            ExternalOwner                                                  => _offExternalOwner.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// 0x0018 (0x01C8 - 0x01B0)
public class UAbilityTask_WaitGameplayEffectApplied_Self : UAbilityTask_WaitGameplayEffectApplied
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnApplied                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x01B8, false); // 0x01B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnApplied                                                      => _offOnApplied.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// 0x0018 (0x01C8 - 0x01B0)
public class UAbilityTask_WaitGameplayEffectApplied_Target : UAbilityTask_WaitGameplayEffectApplied
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnApplied                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x01B8, false); // 0x01B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnApplied                                                      => _offOnApplied.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// 0x00A8 (0x0120 - 0x0078)
public class UAbilityTask_WaitGameplayEffectBlockedImmunity : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offbLocked                                                    = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UAbilitySystemComponent>           _offExternalOwner                                              = new ExternalOffset<UAbilitySystemComponent>(0x0118, true);   // 0x0118(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           bLocked                                                        => _offbLocked.GetValue();
	public UAbilitySystemComponent                            ExternalOwner                                                  => _offExternalOwner.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// 0x0028 (0x00A0 - 0x0078)
public class UAbilityTask_WaitGameplayEffectRemoved : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnRemoved                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offInvalidHandle                                              = new ExternalOffset<FScriptMulticastDelegate>(0x0090, false); // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnRemoved                                                      => _offOnRemoved.GetValue();
	public FScriptMulticastDelegate                           InvalidHandle                                                  => _offInvalidHandle.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// 0x0028 (0x00A0 - 0x0078)
public class UAbilityTask_WaitGameplayEffectStackChange : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnChange                                                   = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offInvalidHandle                                              = new ExternalOffset<FScriptMulticastDelegate>(0x0090, false); // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnChange                                                       => _offOnChange.GetValue();
	public FScriptMulticastDelegate                           InvalidHandle                                                  => _offInvalidHandle.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// 0x0028 (0x00A0 - 0x0078)
public class UAbilityTask_WaitGameplayEvent : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offEventReceived                                              = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UAbilitySystemComponent>           _offOptionalExternalTarget                                     = new ExternalOffset<UAbilitySystemComponent>(0x0098, true);   // 0x0098(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           EventReceived                                                  => _offEventReceived.GetValue();
	public UAbilitySystemComponent                            OptionalExternalTarget                                         => _offOptionalExternalTarget.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// 0x0020 (0x0098 - 0x0078)
public class UAbilityTask_WaitGameplayTag : UAbilityTask
{
	#region Offsets
	private ExternalOffset<UAbilitySystemComponent>           _offOptionalExternalTarget                                     = new ExternalOffset<UAbilitySystemComponent>(0x0090, true);   // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UAbilitySystemComponent                            OptionalExternalTarget                                         => _offOptionalExternalTarget.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// 0x0020 (0x00B8 - 0x0098)
public class UAbilityTask_WaitGameplayTagAdded : UAbilityTask_WaitGameplayTag
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offAdded                                                      = new ExternalOffset<FScriptMulticastDelegate>(0x00A8, false); // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           Added                                                          => _offAdded.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// 0x0020 (0x00B8 - 0x0098)
public class UAbilityTask_WaitGameplayTagRemoved : UAbilityTask_WaitGameplayTag
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offRemoved                                                    = new ExternalOffset<FScriptMulticastDelegate>(0x00A8, false); // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           Removed                                                        => _offRemoved.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitInputPress
// 0x0018 (0x0090 - 0x0078)
public class UAbilityTask_WaitInputPress : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnPress                                                    = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnPress                                                        => _offOnPress.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitInputRelease
// 0x0018 (0x0090 - 0x0078)
public class UAbilityTask_WaitInputRelease : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnRelease                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnRelease                                                      => _offOnRelease.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// 0x0018 (0x0090 - 0x0078)
public class UAbilityTask_WaitMovementModeChange : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnChange                                                   = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnChange                                                       => _offOnChange.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitOverlap
// 0x0018 (0x0090 - 0x0078)
public class UAbilityTask_WaitOverlap : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnOverlap                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnOverlap                                                      => _offOnOverlap.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitTargetData
// 0x0038 (0x00B0 - 0x0078)
public class UAbilityTask_WaitTargetData : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offValidData                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offCancelled                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0090, false); // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offTargetClass                                                = new ExternalOffset<UClass>(0x00A0, true);                    // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<AGameplayAbilityTargetActor>       _offTargetActor                                                = new ExternalOffset<AGameplayAbilityTargetActor>(0x00A8, true); // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           ValidData                                                      => _offValidData.GetValue();
	public FScriptMulticastDelegate                           Cancelled                                                      => _offCancelled.GetValue();
	public UClass                                             TargetClass                                                    => _offTargetClass.GetValue();
	public AGameplayAbilityTargetActor                        TargetActor                                                    => _offTargetActor.GetValue();
	#endregion


}

// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// 0x0020 (0x0098 - 0x0078)
public class UAbilityTask_WaitVelocityChange : UAbilityTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnVelocityChage                                            = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UMovementComponent>                _offCachedMovementComponent                                    = new ExternalOffset<UMovementComponent>(0x0090, true);        // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnVelocityChage                                                => _offOnVelocityChage.GetValue();
	public UMovementComponent                                 CachedMovementComponent                                        => _offCachedMovementComponent.GetValue();
	#endregion


}

// Class GameplayAbilities.GameplayAbility
// 0x03D1 (0x03F9 - 0x0028)
public class UGameplayAbility : UObject
{
	#region Offsets
	private ExternalOffset<FGameplayTagContainer>             _offAbilityTags                                                = new ExternalOffset<FGameplayTagContainer>(0x00A8, false);    // 0x00A8(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbReplicateInputDirectly                                    = new ExternalOffset<byte/*(bool)*/>(0x00C8);                  // 0x00C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offRemoteInstanceEnded                                        = new ExternalOffset<byte/*(bool)*/>(0x00C9);                  // 0x00C9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EGameplayAbilityReplicationPolicy>> _offReplicationPolicy                                          = new ExternalOffset<TEnumAsByte<EGameplayAbilityReplicationPolicy>>(0x00CE, false); // 0x00CE(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TEnumAsByte<EGameplayAbilityInstancingPolicy>> _offInstancingPolicy                                           = new ExternalOffset<TEnumAsByte<EGameplayAbilityInstancingPolicy>>(0x00CF, false); // 0x00CF(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbServerRespectsRemoteAbilityCancellation                   = new ExternalOffset<byte/*(bool)*/>(0x00D0);                  // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbRetriggerInstancedAbility                                 = new ExternalOffset<byte/*(bool)*/>(0x00D1);                  // 0x00D1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FGameplayAbilityActivationInfo>    _offCurrentActivationInfo                                      = new ExternalOffset<FGameplayAbilityActivationInfo>(0x00D8, false); // 0x00D8(0x0020) (BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FGameplayEventData>                _offCurrentEventData                                           = new ExternalOffset<FGameplayEventData>(0x00F8, false);       // 0x00F8(0x00B0) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TEnumAsByte<EGameplayAbilityNetExecutionPolicy>> _offNetExecutionPolicy                                         = new ExternalOffset<TEnumAsByte<EGameplayAbilityNetExecutionPolicy>>(0x01A8, false); // 0x01A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UClass>                            _offCostGameplayEffectClass                                    = new ExternalOffset<UClass>(0x01B0, true);                    // 0x01B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<FAbilityTriggerData>>       _offAbilityTriggers                                            = new ExternalOffset<TArray<FAbilityTriggerData>>(0x01B8, false); // 0x01B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<UClass>                            _offCooldownGameplayEffectClass                                = new ExternalOffset<UClass>(0x01C8, true);                    // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FGameplayTagQuery>                 _offCancelAbilitiesMatchingTagQuery                            = new ExternalOffset<FGameplayTagQuery>(0x01D0, false);        // 0x01D0(0x0048) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FGameplayTagContainer>             _offCancelAbilitiesWithTag                                     = new ExternalOffset<FGameplayTagContainer>(0x0218, false);    // 0x0218(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FGameplayTagContainer>             _offBlockAbilitiesWithTag                                      = new ExternalOffset<FGameplayTagContainer>(0x0238, false);    // 0x0238(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FGameplayTagContainer>             _offActivationOwnedTags                                        = new ExternalOffset<FGameplayTagContainer>(0x0258, false);    // 0x0258(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FGameplayTagContainer>             _offActivationRequiredTags                                     = new ExternalOffset<FGameplayTagContainer>(0x0278, false);    // 0x0278(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FGameplayTagContainer>             _offActivationBlockedTags                                      = new ExternalOffset<FGameplayTagContainer>(0x0298, false);    // 0x0298(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FGameplayTagContainer>             _offSourceRequiredTags                                         = new ExternalOffset<FGameplayTagContainer>(0x02B8, false);    // 0x02B8(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FGameplayTagContainer>             _offSourceBlockedTags                                          = new ExternalOffset<FGameplayTagContainer>(0x02D8, false);    // 0x02D8(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FGameplayTagContainer>             _offTargetRequiredTags                                         = new ExternalOffset<FGameplayTagContainer>(0x02F8, false);    // 0x02F8(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FGameplayTagContainer>             _offTargetBlockedTags                                          = new ExternalOffset<FGameplayTagContainer>(0x0318, false);    // 0x0318(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UGameplayTask>>             _offActiveTasks                                                = new ExternalOffset<TArray<UGameplayTask>>(0x0358, false);    // 0x0358(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<UAnimMontage>                      _offCurrentMontage                                             = new ExternalOffset<UAnimMontage>(0x0378, true);              // 0x0378(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsActive                                                  = new ExternalOffset<byte/*(bool)*/>(0x03E0);                  // 0x03E0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsCancelable                                              = new ExternalOffset<byte/*(bool)*/>(0x03E1);                  // 0x03E1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsBlockingOtherAbilities                                  = new ExternalOffset<byte/*(bool)*/>(0x03E2);                  // 0x03E2(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbMarkPendingKillOnAbilityEnd                               = new ExternalOffset<byte/*(bool)*/>(0x03F8);                  // 0x03F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FGameplayTagContainer                              AbilityTags                                                    => _offAbilityTags.GetValue();
	public byte/*(bool)*/                                     bReplicateInputDirectly                                        => _offbReplicateInputDirectly.GetValue();
	public byte/*(bool)*/                                     RemoteInstanceEnded                                            => _offRemoteInstanceEnded.GetValue();
	public TEnumAsByte<EGameplayAbilityReplicationPolicy>     ReplicationPolicy                                              => _offReplicationPolicy.GetValue();
	public TEnumAsByte<EGameplayAbilityInstancingPolicy>      InstancingPolicy                                               => _offInstancingPolicy.GetValue();
	public byte/*(bool)*/                                     bServerRespectsRemoteAbilityCancellation                       => _offbServerRespectsRemoteAbilityCancellation.GetValue();
	public byte/*(bool)*/                                     bRetriggerInstancedAbility                                     => _offbRetriggerInstancedAbility.GetValue();
	public FGameplayAbilityActivationInfo                     CurrentActivationInfo                                          => _offCurrentActivationInfo.GetValue();
	public FGameplayEventData                                 CurrentEventData                                               => _offCurrentEventData.GetValue();
	public TEnumAsByte<EGameplayAbilityNetExecutionPolicy>    NetExecutionPolicy                                             => _offNetExecutionPolicy.GetValue();
	public UClass                                             CostGameplayEffectClass                                        => _offCostGameplayEffectClass.GetValue();
	public TArray<FAbilityTriggerData>                        AbilityTriggers                                                => _offAbilityTriggers.GetValue();
	public UClass                                             CooldownGameplayEffectClass                                    => _offCooldownGameplayEffectClass.GetValue();
	public FGameplayTagQuery                                  CancelAbilitiesMatchingTagQuery                                => _offCancelAbilitiesMatchingTagQuery.GetValue();
	public FGameplayTagContainer                              CancelAbilitiesWithTag                                         => _offCancelAbilitiesWithTag.GetValue();
	public FGameplayTagContainer                              BlockAbilitiesWithTag                                          => _offBlockAbilitiesWithTag.GetValue();
	public FGameplayTagContainer                              ActivationOwnedTags                                            => _offActivationOwnedTags.GetValue();
	public FGameplayTagContainer                              ActivationRequiredTags                                         => _offActivationRequiredTags.GetValue();
	public FGameplayTagContainer                              ActivationBlockedTags                                          => _offActivationBlockedTags.GetValue();
	public FGameplayTagContainer                              SourceRequiredTags                                             => _offSourceRequiredTags.GetValue();
	public FGameplayTagContainer                              SourceBlockedTags                                              => _offSourceBlockedTags.GetValue();
	public FGameplayTagContainer                              TargetRequiredTags                                             => _offTargetRequiredTags.GetValue();
	public FGameplayTagContainer                              TargetBlockedTags                                              => _offTargetBlockedTags.GetValue();
	public TArray<UGameplayTask>                              ActiveTasks                                                    => _offActiveTasks.GetValue();
	public UAnimMontage                                       CurrentMontage                                                 => _offCurrentMontage.GetValue();
	public byte/*(bool)*/                                     bIsActive                                                      => _offbIsActive.GetValue();
	public byte/*(bool)*/                                     bIsCancelable                                                  => _offbIsCancelable.GetValue();
	public byte/*(bool)*/                                     bIsBlockingOtherAbilities                                      => _offbIsBlockingOtherAbilities.GetValue();
	public byte/*(bool)*/                                     bMarkPendingKillOnAbilityEnd                                   => _offbMarkPendingKillOnAbilityEnd.GetValue();
	#endregion


}

// Class GameplayAbilities.GameplayAbility_CharacterJump
// 0x0007 (0x0400 - 0x03F9)
public class UGameplayAbility_CharacterJump : UGameplayAbility
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class GameplayAbilities.GameplayAbility_Montage
// 0x003F (0x0438 - 0x03F9)
public class UGameplayAbility_Montage : UGameplayAbility
{
	#region Offsets
	private ExternalOffset<UAnimMontage>                      _offMontageToPlay                                              = new ExternalOffset<UAnimMontage>(0x0400, true);              // 0x0400(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPlayRate                                                   = new ExternalOffset<float>(0x0408);                           // 0x0408(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                             _offSectionName                                                = new ExternalOffset<FName>(0x040C, false);                    // 0x040C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UClass>>                    _offGameplayEffectClassesWhileAnimating                        = new ExternalOffset<TArray<UClass>>(0x0418, false);           // 0x0418(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UGameplayEffect>>           _offGameplayEffectsWhileAnimating                              = new ExternalOffset<TArray<UGameplayEffect>>(0x0428, false);  // 0x0428(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UAnimMontage                                       MontageToPlay                                                  => _offMontageToPlay.GetValue();
	public float                                              PlayRate                                                       => _offPlayRate.GetValue();
	public FName                                              SectionName                                                    => _offSectionName.GetValue();
	public TArray<UClass>                                     GameplayEffectClassesWhileAnimating                            => _offGameplayEffectClassesWhileAnimating.GetValue();
	public TArray<UGameplayEffect>                            GameplayEffectsWhileAnimating                                  => _offGameplayEffectsWhileAnimating.GetValue();
	#endregion


}

// Class GameplayAbilities.GameplayAbilityBlueprint
// 0x0007 (0x00D8 - 0x00D1)
public class UGameplayAbilityBlueprint : UBlueprint
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class GameplayAbilities.GameplayAbilitySet
// 0x0010 (0x0040 - 0x0030)
public class UGameplayAbilitySet : UDataAsset
{
	#region Offsets
	private ExternalOffset<TArray<FGameplayAbilityBindInfo>>  _offAbilities                                                  = new ExternalOffset<TArray<FGameplayAbilityBindInfo>>(0x0030, false); // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FGameplayAbilityBindInfo>                   Abilities                                                      => _offAbilities.GetValue();
	#endregion


}

// Class GameplayAbilities.GameplayAbilityTargetActor
// 0x0120 (0x0358 - 0x0238)
public class AGameplayAbilityTargetActor : AActor
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offShouldProduceTargetDataOnServer                            = new ExternalOffset<byte/*(bool)*/>(0x0248);                  // 0x0248(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayAbilityTargetingLocationInfo> _offStartLocation                                              = new ExternalOffset<FGameplayAbilityTargetingLocationInfo>(0x0250, false); // 0x0250(0x0070) (BlueprintVisible, BlueprintReadOnly, Net, ContainsInstancedReference, ExposeOnSpawn, NativeAccessSpecifierPublic)
	private ExternalOffset<APlayerController>                 _offMasterPC                                                   = new ExternalOffset<APlayerController>(0x02F0, true);         // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UGameplayAbility>                  _offOwningAbility                                              = new ExternalOffset<UGameplayAbility>(0x02F8, true);          // 0x02F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbDestroyOnConfirmation                                     = new ExternalOffset<byte/*(bool)*/>(0x0300);                  // 0x0300(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AActor>                            _offSourceActor                                                = new ExternalOffset<AActor>(0x0308, true);                    // 0x0308(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FWorldReticleParameters>           _offReticleParams                                              = new ExternalOffset<FWorldReticleParameters>(0x0310, false);  // 0x0310(0x000C) (BlueprintVisible, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offReticleClass                                               = new ExternalOffset<UClass>(0x0320, true);                    // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTargetDataFilterHandle>   _offFilter                                                     = new ExternalOffset<FGameplayTargetDataFilterHandle>(0x0328, false); // 0x0328(0x0010) (BlueprintVisible, Net, ExposeOnSpawn, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbDebug                                                     = new ExternalOffset<byte/*(bool)*/>(0x0338);                  // 0x0338(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAbilitySystemComponent>           _offGenericDelegateBoundASC                                    = new ExternalOffset<UAbilitySystemComponent>(0x0350, true);   // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     ShouldProduceTargetDataOnServer                                => _offShouldProduceTargetDataOnServer.GetValue();
	public FGameplayAbilityTargetingLocationInfo              StartLocation                                                  => _offStartLocation.GetValue();
	public APlayerController                                  MasterPC                                                       => _offMasterPC.GetValue();
	public UGameplayAbility                                   OwningAbility                                                  => _offOwningAbility.GetValue();
	public byte/*(bool)*/                                     bDestroyOnConfirmation                                         => _offbDestroyOnConfirmation.GetValue();
	public AActor                                             SourceActor                                                    => _offSourceActor.GetValue();
	public FWorldReticleParameters                            ReticleParams                                                  => _offReticleParams.GetValue();
	public UClass                                             ReticleClass                                                   => _offReticleClass.GetValue();
	public FGameplayTargetDataFilterHandle                    Filter                                                         => _offFilter.GetValue();
	public byte/*(bool)*/                                     bDebug                                                         => _offbDebug.GetValue();
	public UAbilitySystemComponent                            GenericDelegateBoundASC                                        => _offGenericDelegateBoundASC.GetValue();
	#endregion


}

// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// 0x000D (0x0365 - 0x0358)
public class AGameplayAbilityTargetActor_Trace : AGameplayAbilityTargetActor
{
	#region Offsets
	private ExternalOffset<FCollisionProfileName>             _offTraceProfile                                               = new ExternalOffset<FCollisionProfileName>(0x035C, false);    // 0x035C(0x0008) (Edit, BlueprintVisible, Config, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbTraceAffectsAimPitch                                      = new ExternalOffset<byte/*(bool)*/>(0x0364);                  // 0x0364(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FCollisionProfileName                              TraceProfile                                                   => _offTraceProfile.GetValue();
	public byte/*(bool)*/                                     bTraceAffectsAimPitch                                          => _offbTraceAffectsAimPitch.GetValue();
	#endregion


}

// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// 0x0013 (0x0378 - 0x0365)
public class AGameplayAbilityTargetActor_GroundTrace : AGameplayAbilityTargetActor_Trace
{
	#region Offsets
	private ExternalOffset<float>                             _offCollisionRadius                                            = new ExternalOffset<float>(0x0370);                           // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCollisionHeight                                            = new ExternalOffset<float>(0x0374);                           // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              CollisionRadius                                                => _offCollisionRadius.GetValue();
	public float                                              CollisionHeight                                                => _offCollisionHeight.GetValue();
	#endregion


}

// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// 0x0028 (0x03A0 - 0x0378)
public class AGameplayAbilityTargetActor_ActorPlacement : AGameplayAbilityTargetActor_GroundTrace
{
	#region Offsets
	private ExternalOffset<UClass>                            _offPlacedActorClass                                           = new ExternalOffset<UClass>(0x0390, true);                    // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMaterialInterface>                _offPlacedActorMaterial                                        = new ExternalOffset<UMaterialInterface>(0x0398, true);        // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                             PlacedActorClass                                               => _offPlacedActorClass.GetValue();
	public UMaterialInterface                                 PlacedActorMaterial                                            => _offPlacedActorMaterial.GetValue();
	#endregion


}

// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// 0x0008 (0x0360 - 0x0358)
public class AGameplayAbilityTargetActor_Radius : AGameplayAbilityTargetActor
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// 0x000B (0x0370 - 0x0365)
public class AGameplayAbilityTargetActor_SingleLineTrace : AGameplayAbilityTargetActor_Trace
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class GameplayAbilities.GameplayAbilityWorldReticle
// 0x0030 (0x0268 - 0x0238)
public class AGameplayAbilityWorldReticle : AActor
{
	#region Offsets
	private ExternalOffset<FWorldReticleParameters>           _offParameters                                                 = new ExternalOffset<FWorldReticleParameters>(0x0248, false);  // 0x0248(0x000C) (Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbFaceOwnerFlat                                             = new ExternalOffset<byte/*(bool)*/>(0x0254);                  // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbSnapToTargetedActor                                       = new ExternalOffset<byte/*(bool)*/>(0x0255);                  // 0x0255(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsTargetValid                                             = new ExternalOffset<byte/*(bool)*/>(0x0256);                  // 0x0256(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsTargetAnActor                                           = new ExternalOffset<byte/*(bool)*/>(0x0257);                  // 0x0257(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<APlayerController>                 _offMasterPC                                                   = new ExternalOffset<APlayerController>(0x0258, true);         // 0x0258(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<AActor>                            _offTargetingActor                                             = new ExternalOffset<AActor>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FWorldReticleParameters                            Parameters                                                     => _offParameters.GetValue();
	public byte/*(bool)*/                                     bFaceOwnerFlat                                                 => _offbFaceOwnerFlat.GetValue();
	public byte/*(bool)*/                                     bSnapToTargetedActor                                           => _offbSnapToTargetedActor.GetValue();
	public byte/*(bool)*/                                     bIsTargetValid                                                 => _offbIsTargetValid.GetValue();
	public byte/*(bool)*/                                     bIsTargetAnActor                                               => _offbIsTargetAnActor.GetValue();
	public APlayerController                                  MasterPC                                                       => _offMasterPC.GetValue();
	public AActor                                             TargetingActor                                                 => _offTargetingActor.GetValue();
	#endregion


}

// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// 0x0018 (0x0280 - 0x0268)
public class AGameplayAbilityWorldReticle_ActorVisualization : AGameplayAbilityWorldReticle
{
	#region Offsets
	private ExternalOffset<UCapsuleComponent>                 _offCollisionComponent                                         = new ExternalOffset<UCapsuleComponent>(0x0268, true);         // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<UActorComponent>>           _offVisualizationComponents                                    = new ExternalOffset<TArray<UActorComponent>>(0x0270, false);  // 0x0270(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UCapsuleComponent                                  CollisionComponent                                             => _offCollisionComponent.GetValue();
	public TArray<UActorComponent>                            VisualizationComponents                                        => _offVisualizationComponents.GetValue();
	#endregion


}

// Class GameplayAbilities.GameplayCueInterface
// 0x0000 (0x0028 - 0x0028)
public class UGameplayCueInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class GameplayAbilities.GameplayCueManager
// 0x02C8 (0x02F8 - 0x0030)
public class UGameplayCueManager : UDataAsset
{
	#region Offsets
	private ExternalOffset<FGameplayCueObjectLibrary>         _offRuntimeGameplayCueObjectLibrary                            = new ExternalOffset<FGameplayCueObjectLibrary>(0x0048, false); // 0x0048(0x0050) (Transient, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FGameplayCueObjectLibrary>         _offEditorGameplayCueObjectLibrary                             = new ExternalOffset<FGameplayCueObjectLibrary>(0x0098, false); // 0x0098(0x0050) (Transient, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UClass>>                    _offLoadedGameplayCueNotifyClasses                             = new ExternalOffset<TArray<UClass>>(0x02B0, false);           // 0x02B0(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UClass>>                    _offGameplayCueClassesForPreallocation                         = new ExternalOffset<TArray<UClass>>(0x02C0, false);           // 0x02C0(0x0010) (ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<FGameplayCuePendingExecute>> _offPendingExecuteCues                                         = new ExternalOffset<TArray<FGameplayCuePendingExecute>>(0x02D0, false); // 0x02D0(0x0010) (ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offGameplayCueSendContextCount                                = new ExternalOffset<int>(0x02E0);                             // 0x02E0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<FPreallocationInfo>>        _offPreallocationInfoList_Internal                             = new ExternalOffset<TArray<FPreallocationInfo>>(0x02E8, false); // 0x02E8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FGameplayCueObjectLibrary                          RuntimeGameplayCueObjectLibrary                                => _offRuntimeGameplayCueObjectLibrary.GetValue();
	public FGameplayCueObjectLibrary                          EditorGameplayCueObjectLibrary                                 => _offEditorGameplayCueObjectLibrary.GetValue();
	public TArray<UClass>                                     LoadedGameplayCueNotifyClasses                                 => _offLoadedGameplayCueNotifyClasses.GetValue();
	public TArray<UClass>                                     GameplayCueClassesForPreallocation                             => _offGameplayCueClassesForPreallocation.GetValue();
	public TArray<FGameplayCuePendingExecute>                 PendingExecuteCues                                             => _offPendingExecuteCues.GetValue();
	public int                                                GameplayCueSendContextCount                                    => _offGameplayCueSendContextCount.GetValue();
	public TArray<FPreallocationInfo>                         PreallocationInfoList_Internal                                 => _offPreallocationInfoList_Internal.GetValue();
	#endregion


}

// Class GameplayAbilities.GameplayCueNotify_Actor
// 0x004C (0x0284 - 0x0238)
public class AGameplayCueNotify_Actor : AActor
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbAutoDestroyOnRemove                                       = new ExternalOffset<byte/*(bool)*/>(0x0248);                  // 0x0248(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offAutoDestroyDelay                                           = new ExternalOffset<float>(0x024C);                           // 0x024C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offWarnIfTimelineIsStillRunning                               = new ExternalOffset<byte/*(bool)*/>(0x0250);                  // 0x0250(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offWarnIfLatentActionIsStillRunning                           = new ExternalOffset<byte/*(bool)*/>(0x0251);                  // 0x0251(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTag>                      _offGameplayCueTag                                             = new ExternalOffset<FGameplayTag>(0x0254, false);             // 0x0254(0x0008) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagReferenceHelper>       _offReferenceHelper                                            = new ExternalOffset<FGameplayTagReferenceHelper>(0x0260, false); // 0x0260(0x0010) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                             _offGameplayCueName                                            = new ExternalOffset<FName>(0x0270, false);                    // 0x0270(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAutoAttachToOwner                                         = new ExternalOffset<byte/*(bool)*/>(0x0278);                  // 0x0278(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offIsOverride                                                 = new ExternalOffset<byte/*(bool)*/>(0x0279);                  // 0x0279(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbUniqueInstancePerInstigator                               = new ExternalOffset<byte/*(bool)*/>(0x027A);                  // 0x027A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbUniqueInstancePerSourceObject                             = new ExternalOffset<byte/*(bool)*/>(0x027B);                  // 0x027B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAllowMultipleOnActiveEvents                               = new ExternalOffset<byte/*(bool)*/>(0x027C);                  // 0x027C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAllowMultipleWhileActiveEvents                            = new ExternalOffset<byte/*(bool)*/>(0x027D);                  // 0x027D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offNumPreallocatedInstances                                   = new ExternalOffset<int>(0x0280);                             // 0x0280(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bAutoDestroyOnRemove                                           => _offbAutoDestroyOnRemove.GetValue();
	public float                                              AutoDestroyDelay                                               => _offAutoDestroyDelay.GetValue();
	public byte/*(bool)*/                                     WarnIfTimelineIsStillRunning                                   => _offWarnIfTimelineIsStillRunning.GetValue();
	public byte/*(bool)*/                                     WarnIfLatentActionIsStillRunning                               => _offWarnIfLatentActionIsStillRunning.GetValue();
	public FGameplayTag                                       GameplayCueTag                                                 => _offGameplayCueTag.GetValue();
	public FGameplayTagReferenceHelper                        ReferenceHelper                                                => _offReferenceHelper.GetValue();
	public FName                                              GameplayCueName                                                => _offGameplayCueName.GetValue();
	public byte/*(bool)*/                                     bAutoAttachToOwner                                             => _offbAutoAttachToOwner.GetValue();
	public byte/*(bool)*/                                     IsOverride                                                     => _offIsOverride.GetValue();
	public byte/*(bool)*/                                     bUniqueInstancePerInstigator                                   => _offbUniqueInstancePerInstigator.GetValue();
	public byte/*(bool)*/                                     bUniqueInstancePerSourceObject                                 => _offbUniqueInstancePerSourceObject.GetValue();
	public byte/*(bool)*/                                     bAllowMultipleOnActiveEvents                                   => _offbAllowMultipleOnActiveEvents.GetValue();
	public byte/*(bool)*/                                     bAllowMultipleWhileActiveEvents                                => _offbAllowMultipleWhileActiveEvents.GetValue();
	public int                                                NumPreallocatedInstances                                       => _offNumPreallocatedInstances.GetValue();
	#endregion


}

// Class GameplayAbilities.GameplayCueNotify_Static
// 0x0021 (0x0049 - 0x0028)
public class UGameplayCueNotify_Static : UObject
{
	#region Offsets
	private ExternalOffset<FGameplayTag>                      _offGameplayCueTag                                             = new ExternalOffset<FGameplayTag>(0x0028, false);             // 0x0028(0x0008) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagReferenceHelper>       _offReferenceHelper                                            = new ExternalOffset<FGameplayTagReferenceHelper>(0x0030, false); // 0x0030(0x0010) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                             _offGameplayCueName                                            = new ExternalOffset<FName>(0x0040, false);                    // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offIsOverride                                                 = new ExternalOffset<byte/*(bool)*/>(0x0048);                  // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayTag                                       GameplayCueTag                                                 => _offGameplayCueTag.GetValue();
	public FGameplayTagReferenceHelper                        ReferenceHelper                                                => _offReferenceHelper.GetValue();
	public FName                                              GameplayCueName                                                => _offGameplayCueName.GetValue();
	public byte/*(bool)*/                                     IsOverride                                                     => _offIsOverride.GetValue();
	#endregion


}

// Class GameplayAbilities.GameplayCueNotify_HitImpact
// 0x0017 (0x0060 - 0x0049)
public class UGameplayCueNotify_HitImpact : UGameplayCueNotify_Static
{
	#region Offsets
	private ExternalOffset<USoundBase>                        _offSound                                                      = new ExternalOffset<USoundBase>(0x0050, true);                // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UParticleSystem>                   _offParticleSystem                                             = new ExternalOffset<UParticleSystem>(0x0058, true);           // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public USoundBase                                         Sound                                                          => _offSound.GetValue();
	public UParticleSystem                                    ParticleSystem                                                 => _offParticleSystem.GetValue();
	#endregion


}

// Class GameplayAbilities.GameplayCueSet
// 0x0010 (0x0040 - 0x0030)
public class UGameplayCueSet : UDataAsset
{
	#region Offsets
	private ExternalOffset<TArray<FGameplayCueNotifyData>>    _offGameplayCueData                                            = new ExternalOffset<TArray<FGameplayCueNotifyData>>(0x0030, false); // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FGameplayCueNotifyData>                     GameplayCueData                                                => _offGameplayCueData.GetValue();
	#endregion


}

// Class GameplayAbilities.GameplayCueTranslator
// 0x0000 (0x0028 - 0x0028)
public class UGameplayCueTranslator : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class GameplayAbilities.GameplayCueTranslator_Test
// 0x0000 (0x0028 - 0x0028)
public class UGameplayCueTranslator_Test : UGameplayCueTranslator
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class GameplayAbilities.GameplayEffect
// 0x05C8 (0x05F0 - 0x0028)
public class UGameplayEffect : UObject
{
	#region Offsets
	private ExternalOffset<EGameplayEffectDurationType>       _offDurationPolicy                                             = new ExternalOffset<EGameplayEffectDurationType>(0x0030, false); // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayEffectModifierMagnitude>  _offDurationMagnitude                                          = new ExternalOffset<FGameplayEffectModifierMagnitude>(0x0038, false); // 0x0038(0x0190) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<FScalableFloat>                    _offPeriod                                                     = new ExternalOffset<FScalableFloat>(0x01C8, false);           // 0x01C8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbExecutePeriodicEffectOnApplication                        = new ExternalOffset<byte/*(bool)*/>(0x01E8);                  // 0x01E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EGameplayEffectPeriodInhibitionRemovedPolicy> _offPeriodicInhibitionPolicy                                   = new ExternalOffset<EGameplayEffectPeriodInhibitionRemovedPolicy>(0x01E9, false); // 0x01E9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FGameplayModifierInfo>>     _offModifiers                                                  = new ExternalOffset<TArray<FGameplayModifierInfo>>(0x01F0, false); // 0x01F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FGameplayEffectExecutionDefinition>> _offExecutions                                                 = new ExternalOffset<TArray<FGameplayEffectExecutionDefinition>>(0x0200, false); // 0x0200(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<FScalableFloat>                    _offChanceToApplyToTarget                                      = new ExternalOffset<FScalableFloat>(0x0210, false);           // 0x0210(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UClass>>                    _offApplicationRequirements                                    = new ExternalOffset<TArray<UClass>>(0x0230, false);           // 0x0230(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UClass>>                    _offTargetEffectClasses                                        = new ExternalOffset<TArray<UClass>>(0x0240, false);           // 0x0240(0x0010) (ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FConditionalGameplayEffect>> _offConditionalGameplayEffects                                 = new ExternalOffset<TArray<FConditionalGameplayEffect>>(0x0250, false); // 0x0250(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UClass>>                    _offOverflowEffects                                            = new ExternalOffset<TArray<UClass>>(0x0260, false);           // 0x0260(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbDenyOverflowApplication                                   = new ExternalOffset<byte/*(bool)*/>(0x0270);                  // 0x0270(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbClearStackOnOverflow                                      = new ExternalOffset<byte/*(bool)*/>(0x0271);                  // 0x0271(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UClass>>                    _offPrematureExpirationEffectClasses                           = new ExternalOffset<TArray<UClass>>(0x0278, false);           // 0x0278(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UClass>>                    _offRoutineExpirationEffectClasses                             = new ExternalOffset<TArray<UClass>>(0x0288, false);           // 0x0288(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbRequireModifierSuccessToTriggerCues                       = new ExternalOffset<byte/*(bool)*/>(0x0298);                  // 0x0298(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbSuppressStackingCues                                      = new ExternalOffset<byte/*(bool)*/>(0x0299);                  // 0x0299(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FGameplayEffectCue>>        _offGameplayCues                                               = new ExternalOffset<TArray<FGameplayEffectCue>>(0x02A0, false); // 0x02A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<UGameplayEffectUIData>             _offUIData                                                     = new ExternalOffset<UGameplayEffectUIData>(0x02B0, true);     // 0x02B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FInheritedTagContainer>            _offInheritableGameplayEffectTags                              = new ExternalOffset<FInheritedTagContainer>(0x02B8, false);   // 0x02B8(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<FInheritedTagContainer>            _offInheritableOwnedTagsContainer                              = new ExternalOffset<FInheritedTagContainer>(0x0318, false);   // 0x0318(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagRequirements>          _offOngoingTagRequirements                                     = new ExternalOffset<FGameplayTagRequirements>(0x0378, false); // 0x0378(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagRequirements>          _offApplicationTagRequirements                                 = new ExternalOffset<FGameplayTagRequirements>(0x03B8, false); // 0x03B8(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<FInheritedTagContainer>            _offRemoveGameplayEffectsWithTags                              = new ExternalOffset<FInheritedTagContainer>(0x03F8, false);   // 0x03F8(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagRequirements>          _offGrantedApplicationImmunityTags                             = new ExternalOffset<FGameplayTagRequirements>(0x0458, false); // 0x0458(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayEffectQuery>              _offGrantedApplicationImmunityQuery                            = new ExternalOffset<FGameplayEffectQuery>(0x0498, false);     // 0x0498(0x0138) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<EGameplayEffectStackingType>       _offStackingType                                               = new ExternalOffset<EGameplayEffectStackingType>(0x05D1, false); // 0x05D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offStackLimitCount                                            = new ExternalOffset<int>(0x05D4);                             // 0x05D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EGameplayEffectStackingDurationPolicy> _offStackDurationRefreshPolicy                                 = new ExternalOffset<EGameplayEffectStackingDurationPolicy>(0x05D8, false); // 0x05D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EGameplayEffectStackingPeriodPolicy> _offStackPeriodResetPolicy                                     = new ExternalOffset<EGameplayEffectStackingPeriodPolicy>(0x05D9, false); // 0x05D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EGameplayEffectStackingExpirationPolicy> _offStackExpirationPolicy                                      = new ExternalOffset<EGameplayEffectStackingExpirationPolicy>(0x05DA, false); // 0x05DA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FGameplayAbilitySpecDef>>   _offGrantedAbilities                                           = new ExternalOffset<TArray<FGameplayAbilitySpecDef>>(0x05E0, false); // 0x05E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EGameplayEffectDurationType                        DurationPolicy                                                 => _offDurationPolicy.GetValue();
	public FGameplayEffectModifierMagnitude                   DurationMagnitude                                              => _offDurationMagnitude.GetValue();
	public FScalableFloat                                     Period                                                         => _offPeriod.GetValue();
	public byte/*(bool)*/                                     bExecutePeriodicEffectOnApplication                            => _offbExecutePeriodicEffectOnApplication.GetValue();
	public EGameplayEffectPeriodInhibitionRemovedPolicy       PeriodicInhibitionPolicy                                       => _offPeriodicInhibitionPolicy.GetValue();
	public TArray<FGameplayModifierInfo>                      Modifiers                                                      => _offModifiers.GetValue();
	public TArray<FGameplayEffectExecutionDefinition>         Executions                                                     => _offExecutions.GetValue();
	public FScalableFloat                                     ChanceToApplyToTarget                                          => _offChanceToApplyToTarget.GetValue();
	public TArray<UClass>                                     ApplicationRequirements                                        => _offApplicationRequirements.GetValue();
	public TArray<UClass>                                     TargetEffectClasses                                            => _offTargetEffectClasses.GetValue();
	public TArray<FConditionalGameplayEffect>                 ConditionalGameplayEffects                                     => _offConditionalGameplayEffects.GetValue();
	public TArray<UClass>                                     OverflowEffects                                                => _offOverflowEffects.GetValue();
	public byte/*(bool)*/                                     bDenyOverflowApplication                                       => _offbDenyOverflowApplication.GetValue();
	public byte/*(bool)*/                                     bClearStackOnOverflow                                          => _offbClearStackOnOverflow.GetValue();
	public TArray<UClass>                                     PrematureExpirationEffectClasses                               => _offPrematureExpirationEffectClasses.GetValue();
	public TArray<UClass>                                     RoutineExpirationEffectClasses                                 => _offRoutineExpirationEffectClasses.GetValue();
	public byte/*(bool)*/                                     bRequireModifierSuccessToTriggerCues                           => _offbRequireModifierSuccessToTriggerCues.GetValue();
	public byte/*(bool)*/                                     bSuppressStackingCues                                          => _offbSuppressStackingCues.GetValue();
	public TArray<FGameplayEffectCue>                         GameplayCues                                                   => _offGameplayCues.GetValue();
	public UGameplayEffectUIData                              UIData                                                         => _offUIData.GetValue();
	public FInheritedTagContainer                             InheritableGameplayEffectTags                                  => _offInheritableGameplayEffectTags.GetValue();
	public FInheritedTagContainer                             InheritableOwnedTagsContainer                                  => _offInheritableOwnedTagsContainer.GetValue();
	public FGameplayTagRequirements                           OngoingTagRequirements                                         => _offOngoingTagRequirements.GetValue();
	public FGameplayTagRequirements                           ApplicationTagRequirements                                     => _offApplicationTagRequirements.GetValue();
	public FInheritedTagContainer                             RemoveGameplayEffectsWithTags                                  => _offRemoveGameplayEffectsWithTags.GetValue();
	public FGameplayTagRequirements                           GrantedApplicationImmunityTags                                 => _offGrantedApplicationImmunityTags.GetValue();
	public FGameplayEffectQuery                               GrantedApplicationImmunityQuery                                => _offGrantedApplicationImmunityQuery.GetValue();
	public EGameplayEffectStackingType                        StackingType                                                   => _offStackingType.GetValue();
	public int                                                StackLimitCount                                                => _offStackLimitCount.GetValue();
	public EGameplayEffectStackingDurationPolicy              StackDurationRefreshPolicy                                     => _offStackDurationRefreshPolicy.GetValue();
	public EGameplayEffectStackingPeriodPolicy                StackPeriodResetPolicy                                         => _offStackPeriodResetPolicy.GetValue();
	public EGameplayEffectStackingExpirationPolicy            StackExpirationPolicy                                          => _offStackExpirationPolicy.GetValue();
	public TArray<FGameplayAbilitySpecDef>                    GrantedAbilities                                               => _offGrantedAbilities.GetValue();
	#endregion


}

// Class GameplayAbilities.GameplayEffectCalculation
// 0x0010 (0x0038 - 0x0028)
public class UGameplayEffectCalculation : UObject
{
	#region Offsets
	private ExternalOffset<TArray<FGameplayEffectAttributeCaptureDefinition>> _offRelevantAttributesToCapture                                = new ExternalOffset<TArray<FGameplayEffectAttributeCaptureDefinition>>(0x0028, false); // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<FGameplayEffectAttributeCaptureDefinition>  RelevantAttributesToCapture                                    => _offRelevantAttributesToCapture.GetValue();
	#endregion


}

// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
// 0x0000 (0x0028 - 0x0028)
public class UGameplayEffectCustomApplicationRequirement : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class GameplayAbilities.GameplayEffectExecutionCalculation
// 0x0001 (0x0039 - 0x0038)
public class UGameplayEffectExecutionCalculation : UGameplayEffectCalculation
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbRequiresPassedInTags                                      = new ExternalOffset<byte/*(bool)*/>(0x0038);                  // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bRequiresPassedInTags                                          => _offbRequiresPassedInTags.GetValue();
	#endregion


}

// Class GameplayAbilities.GameplayEffectUIData
// 0x0000 (0x0028 - 0x0028)
public class UGameplayEffectUIData : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class GameplayAbilities.GameplayEffectUIData_TextOnly
// 0x0018 (0x0040 - 0x0028)
public class UGameplayEffectUIData_TextOnly : UGameplayEffectUIData
{
	#region Offsets
	private ExternalOffset<FText>                             _offDescription                                                = new ExternalOffset<FText>(0x0028, false);                    // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FText                                              Description                                                    => _offDescription.GetValue();
	#endregion


}

// Class GameplayAbilities.GameplayModMagnitudeCalculation
// 0x0001 (0x0039 - 0x0038)
public class UGameplayModMagnitudeCalculation : UGameplayEffectCalculation
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbAllowNonNetAuthorityDependencyRegistration                = new ExternalOffset<byte/*(bool)*/>(0x0038);                  // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bAllowNonNetAuthorityDependencyRegistration                    => _offbAllowNonNetAuthorityDependencyRegistration.GetValue();
	#endregion


}

// Class GameplayAbilities.GameplayTagReponseTable
// 0x0010 (0x0040 - 0x0030)
public class UGameplayTagReponseTable : UDataAsset
{
	#region Offsets
	private ExternalOffset<TArray<FGameplayTagResponseTableEntry>> _offEntries                                                    = new ExternalOffset<TArray<FGameplayTagResponseTableEntry>>(0x0030, false); // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FGameplayTagResponseTableEntry>             Entries                                                        => _offEntries.GetValue();
	#endregion


}

// Class GameplayAbilities.TickableAttributeSetInterface
// 0x0000 (0x0028 - 0x0028)
public class UTickableAttributeSetInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}


}