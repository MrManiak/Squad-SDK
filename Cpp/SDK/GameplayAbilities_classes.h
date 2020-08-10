#pragma once

// Name: Sq, Version: b21


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemBlueprintLibrary");
		return ptr;
	}


	static bool STATIC_TargetDataHasOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static bool STATIC_TargetDataHasHitResult(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index);
	static bool STATIC_TargetDataHasEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static bool STATIC_TargetDataHasActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static struct FGameplayEffectSpecHandle STATIC_SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle);
	static struct FGameplayEffectSpecHandle STATIC_SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int StackCount);
	static struct FGameplayEffectSpecHandle STATIC_SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration);
	static void STATIC_SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
	static bool STATIC_NotEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);
	static struct FGameplayEffectSpecHandle STATIC_MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel);
	static struct FGameplayCueParameters STATIC_MakeGameplayCueParameters(float NormalizedMagnitude, int AbilityLevel, int GameplayEffectLevel, class UPhysicalMaterial* PhysicalMaterial, class UObject* SourceObject, class AActor* EffectCauser, class AActor* Instigator, class USceneComponent* TargetAttachComponent, const struct FVector& Normal, const struct FGameplayTagContainer& AggregatedTargetTags, const struct FGameplayTagContainer& AggregatedSourceTags, const struct FGameplayTag& OriginalTag, const struct FGameplayTag& MatchedTagName, const struct FGameplayEffectContextHandle& EffectContext, float RawMagnitude, const struct FVector& Location);
	static struct FGameplayTargetDataFilterHandle STATIC_MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class AActor* FilterActor);
	static bool STATIC_IsValid(const struct FGameplayAttribute& Attribute);
	static bool STATIC_IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters);
	static bool STATIC_IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters);
	static bool STATIC_HasHitResult(const struct FGameplayCueParameters& Parameters);
	static struct FTransform STATIC_GetTargetDataOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static struct FTransform STATIC_GetTargetDataEndPointTransform(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static struct FVector STATIC_GetTargetDataEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static struct FVector STATIC_GetOrigin(const struct FGameplayCueParameters& Parameters);
	static float STATIC_GetModifiedAttributeMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayAttribute& Attribute);
	static struct FTransform STATIC_GetInstigatorTransform(const struct FGameplayCueParameters& Parameters);
	static class AActor* STATIC_GetInstigatorActor(const struct FGameplayCueParameters& Parameters);
	static struct FHitResult STATIC_GetHitResultFromTargetData(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index);
	static struct FHitResult STATIC_GetHitResult(const struct FGameplayCueParameters& Parameters);
	static bool STATIC_GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal);
	static bool STATIC_GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction);
	static float STATIC_GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	static float STATIC_GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	static float STATIC_GetFloatAttributeBase(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	static float STATIC_GetFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	static struct FGameplayEffectContextHandle STATIC_GetEffectContext(const struct FGameplayEffectSpecHandle& SpecHandle);
	static int STATIC_GetDataCountFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData);
	static TArray<struct FGameplayEffectSpecHandle> STATIC_GetAllLinkedGameplayEffectSpecHandles(const struct FGameplayEffectSpecHandle& SpecHandle);
	static TArray<class AActor*> STATIC_GetAllActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData);
	static TArray<class AActor*> STATIC_GetActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static int STATIC_GetActorCount(const struct FGameplayCueParameters& Parameters);
	static class AActor* STATIC_GetActorByIndex(const struct FGameplayCueParameters& Parameters, int Index);
	static float STATIC_GetActiveGameplayEffectTotalDuration(const struct FActiveGameplayEffectHandle& ActiveHandle);
	static float STATIC_GetActiveGameplayEffectStartTime(const struct FActiveGameplayEffectHandle& ActiveHandle);
	static int STATIC_GetActiveGameplayEffectStackLimitCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
	static int STATIC_GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
	static float STATIC_GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& ActiveHandle);
	static float STATIC_GetActiveGameplayEffectExpectedEndTime(const struct FActiveGameplayEffectHandle& ActiveHandle);
	static struct FString STATIC_GetActiveGameplayEffectDebugString(const struct FActiveGameplayEffectHandle& ActiveHandle);
	static class UAbilitySystemComponent* STATIC_GetAbilitySystemComponent(class AActor* Actor);
	static void STATIC_ForwardGameplayCueToTarget(const TScriptInterface<class UGameplayCueInterface>& TargetCueInterface, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	static struct FGameplayAbilityTargetDataHandle STATIC_FilterTargetData(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass);
	static float STATIC_EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, float BaseValue, bool* bSuccess);
	static float STATIC_EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, bool* bSuccess);
	static bool STATIC_EqualEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);
	static void STATIC_EffectContextSetOrigin(const struct FGameplayEffectContextHandle& EffectContext, const struct FVector& Origin);
	static bool STATIC_EffectContextIsValid(const struct FGameplayEffectContextHandle& EffectContext);
	static bool STATIC_EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext);
	static bool STATIC_EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	static class UObject* STATIC_EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext);
	static class AActor* STATIC_EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	static struct FVector STATIC_EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext);
	static class AActor* STATIC_EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	static struct FHitResult STATIC_EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	static class AActor* STATIC_EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext);
	static void STATIC_EffectContextAddHitResult(const struct FGameplayEffectContextHandle& EffectContext, const struct FHitResult& HitResult, bool bReset);
	static bool STATIC_DoesTargetDataContainActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index, class AActor* Actor);
	static bool STATIC_DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, const struct FGameplayTagRequirements& SourceTagReqs, const struct FGameplayTagRequirements& TargetTagReqs);
	static struct FGameplayEffectSpecHandle STATIC_CloneSpecHandle(class AActor* InNewInstigator, class AActor* InEffectCauser, const struct FGameplayEffectSpecHandle& GameplayEffectSpecHandle_Clone);
	static void STATIC_BreakGameplayCueParameters(const struct FGameplayCueParameters& Parameters, int* GameplayEffectLevel, class UPhysicalMaterial** PhysicalMaterial, class UObject** SourceObject, class AActor** EffectCauser, class AActor** Instigator, struct FVector* Normal, int* AbilityLevel, struct FVector* Location, struct FGameplayTagContainer* AggregatedSourceTags, struct FGameplayTag* OriginalTag, struct FGameplayTag* MatchedTagName, struct FGameplayEffectContextHandle* EffectContext, float* RawMagnitude, float* NormalizedMagnitude, struct FGameplayTagContainer* AggregatedTargetTags, class USceneComponent** TargetAttachComponent);
	static struct FGameplayEffectSpecHandle STATIC_AssignTagSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& DataTag, float Magnitude);
	static struct FGameplayEffectSpecHandle STATIC_AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FName& DataName, float Magnitude);
	static struct FGameplayAbilityTargetDataHandle STATIC_AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, const struct FGameplayAbilityTargetDataHandle& HandleToAdd);
	static struct FGameplayEffectSpecHandle STATIC_AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec);
	static struct FGameplayEffectSpecHandle STATIC_AddLinkedGameplayEffect(const struct FGameplayEffectSpecHandle& SpecHandle, class UClass* LinkedGameplayEffect);
	static struct FGameplayEffectSpecHandle STATIC_AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	static struct FGameplayEffectSpecHandle STATIC_AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	static struct FGameplayEffectSpecHandle STATIC_AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	static struct FGameplayEffectSpecHandle STATIC_AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	static struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromLocations(const struct FGameplayAbilityTargetingLocationInfo& SourceLocation, const struct FGameplayAbilityTargetingLocationInfo& TargetLocation);
	static struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromHitResult(const struct FHitResult& HitResult);
	static struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromActorArray(TArray<class AActor*> ActorArray, bool OneTargetPerHandle);
	static struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromActor(class AActor* Actor);
};

// Class GameplayAbilities.AbilitySystemComponent
// 0x11E8 (FullSize[0x1330] - InheritedSize[0x0148])
// LastOffsetWithSize(0x0148)
#define PADDING_015A - 0x0000 // Minimum to subtract -> (0010)
class UAbilitySystemComponent : public UGameplayTasksComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_015A, TArray<struct FAttributeDefaults>,                                     DefaultStartingData);                                      // 0x0158(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_015A, TArray<class UAttributeSet*>,                                          SpawnedAttributes);                                        // 0x0168(0x0010)  (ExportObject, Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01F0 PADDING_015A, float,                                                                 OutgoingDuration);                                         // 0x0338(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01F4 PADDING_015A, float,                                                                 IncomingDuration);                                         // 0x033C(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0218 PADDING_015A, TArray<struct FString>,                                                ClientDebugStrings);                                       // 0x0360(0x0010)  (Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0228 PADDING_015A, TArray<struct FString>,                                                ServerDebugStrings);                                       // 0x0370(0x0010)  (Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0298 PADDING_015A, bool,                                                                  UserAbilityActivationInhibited);                           // 0x03E0(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0299 PADDING_015A, bool,                                                                  ReplicationProxyEnabled);                                  // 0x03E1(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x029A PADDING_015A, bool,                                                                  bSuppressGrantAbility);                                    // 0x03E2(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x029B PADDING_015A, bool,                                                                  bSuppressGameplayCues);                                    // 0x03E3(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02A0 PADDING_015A, TArray<class AGameplayAbilityTargetActor*>,                            SpawnedTargetActors);                                      // 0x03E8(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02D8 PADDING_015A, class AActor*,                                                         OwnerActor);                                               // 0x0420(0x0008)  (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02E0 PADDING_015A, class AActor*,                                                         AvatarActor);                                              // 0x0428(0x0008)  (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02F8 PADDING_015A, struct FGameplayAbilitySpecContainer,                                  ActivatableAbilities);                                     // 0x0440(0x0120)  (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0448 PADDING_015A, TArray<class UGameplayAbility*>,                                       AllReplicatedInstancedAbilities);                          // 0x0590(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0628 PADDING_015A, struct FGameplayAbilityRepAnimMontage,                                 RepAnimMontageInfo);                                       // 0x0770(0x0030)  (Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0658 PADDING_015A, bool,                                                                  bCachedIsNetSimulated);                                    // 0x07A0(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0659 PADDING_015A, bool,                                                                  bPendingMontageRep);                                       // 0x07A1(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0660 PADDING_015A, struct FGameplayAbilityLocalAnimMontage,                               LocalAnimMontageInfo);                                     // 0x07A8(0x0030)  (NoDestructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0730 PADDING_015A, struct FActiveGameplayEffectsContainer,                                ActiveGameplayEffects);                                    // 0x0878(0x0480)  (Net, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0BB0 PADDING_015A, struct FActiveGameplayCueContainer,                                    ActiveGameplayCues);                                       // 0x0CF8(0x0128)  (Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0CD8 PADDING_015A, struct FActiveGameplayCueContainer,                                    MinimalReplicationGameplayCues);                           // 0x0E20(0x0128)  (Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0F28 PADDING_015A, TArray<unsigned char>,                                                 BlockedAbilityBindings);                                   // 0x1070(0x0010)  (Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x1060 PADDING_015A, struct FMinimalReplicationTagCountMap,                                 MinimalReplicationTags);                                   // 0x11A8(0x0060)  (Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x10D0 PADDING_015A, struct FReplicatedPredictionKeyMap,                                    ReplicatedPredictionKeyMap);                               // 0x1218(0x0118)  (Net, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemComponent");
		return ptr;
	}


	bool TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation);
	bool TryActivateAbilitiesByTag(const struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);
	void TargetConfirm();
	void TargetCancel();
	void SetUserAbilityActivationInhibited(bool NewInhibit);
	void SetActiveGameplayEffectLevelUsingQuery(const struct FGameplayEffectQuery& Query, int NewLevel);
	void SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int NewLevel);
	void ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
	void ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey);
	void ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey, const struct FVector_NetQuantize100& VectorPayload);
	void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerPrintDebug_RequestWithStrings(TArray<struct FString> Strings);
	void ServerPrintDebug_Request();
	void ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey);
	void ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate);
	void ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, const struct FName& SectionName, const struct FName& NextSectionName);
	void ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, const struct FName& SectionName);
	void ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ServerAbilityRPCBatch(const struct FGameplayAbilities_FServerAbilityRPCBatch& BatchInfo);
	void RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int StacksToRemove);
	bool RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int StacksToRemove);
	int RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags);
	int RemoveActiveEffectsWithSourceTags(const struct FGameplayTagContainer& Tags);
	int RemoveActiveEffectsWithGrantedTags(const struct FGameplayTagContainer& Tags);
	int RemoveActiveEffectsWithAppliedTags(const struct FGameplayTagContainer& Tags);
	void OnRep_ServerDebugString();
	void OnRep_ReplicatedAnimMontage();
	void OnRep_OwningActor();
	void OnRep_ClientDebugString();
	void OnRep_ActivateAbilities();
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCuesExecuted(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueAdded_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& Parameters);
	void NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FGameplayEffectContextHandle MakeEffectContext();
	void K2_InitStats(class UClass* Attributes, class UDataTable* DataTable);
	bool IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag);
	bool GetUserAbilityActivationInhibited();
	float GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute);
	int GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);
	TArray<struct FActiveGameplayEffectHandle> GetActiveEffects(const struct FGameplayEffectQuery& Query);
	void ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate);
	void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey);
	void ClientPrintDebug_Response(TArray<struct FString> Strings, int GameFlags);
	void ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
	void ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey);
	void ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16_t PredictionKey);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& SpecHandle, class UAbilitySystemComponent* Target);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(const struct FGameplayEffectSpecHandle& SpecHandle);
	void AbilityConfirmOrCancel__DelegateSignature();
	void AbilityAbilityKey__DelegateSignature(int InputID);
};

// Class GameplayAbilities.AbilitySystemDebugHUD
// 0x0070 (FullSize[0x0338] - InheritedSize[0x02C8])
// LastOffsetWithSize(0x02C8)
class AAbilitySystemDebugHUD : public AHUD
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemDebugHUD");
		return ptr;
	}


};

// Class GameplayAbilities.AbilitySystemGlobals
// 0x01E0 (FullSize[0x0208] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0161 - 0x0000 // Minimum to subtract -> (0000)
class UAbilitySystemGlobals : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0161, struct FSoftClassPath,                                                 AbilitySystemGlobalsClassName);                            // 0x0028(0x0018)  (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0161, struct FGameplayTag,                                                   ActivateFailIsDeadTag);                                    // 0x0068(0x0008)  (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0161, struct FName,                                                          ActivateFailIsDeadName);                                   // 0x0070(0x0008)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0161, struct FGameplayTag,                                                   ActivateFailCooldownTag);                                  // 0x0078(0x0008)  (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0161, struct FName,                                                          ActivateFailCooldownName);                                 // 0x0080(0x0008)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0161, struct FGameplayTag,                                                   ActivateFailCostTag);                                      // 0x0088(0x0008)  (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0161, struct FName,                                                          ActivateFailCostName);                                     // 0x0090(0x0008)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0161, struct FGameplayTag,                                                   ActivateFailTagsBlockedTag);                               // 0x0098(0x0008)  (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0161, struct FName,                                                          ActivateFailTagsBlockedName);                              // 0x00A0(0x0008)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0161, struct FGameplayTag,                                                   ActivateFailTagsMissingTag);                               // 0x00A8(0x0008)  (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0161, struct FName,                                                          ActivateFailTagsMissingName);                              // 0x00B0(0x0008)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0161, struct FGameplayTag,                                                   ActivateFailNetworkingTag);                                // 0x00B8(0x0008)  (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0161, struct FName,                                                          ActivateFailNetworkingName);                               // 0x00C0(0x0008)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0161, int,                                                                   MinimalReplicationTagCountBits);                           // 0x00C8(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A4 PADDING_0161, bool,                                                                  bAllowGameplayModEvaluationChannels);                      // 0x00CC(0x0001)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00A5 PADDING_0161, EGameplayModEvaluationChannel,                                         DefaultGameplayModEvaluationChannel);                      // 0x00CD(0x0001)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0161, struct FName,                                                          GameplayModEvaluationChannelAliases[0xA]);                 // 0x00D0(0x0008)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_0161, struct FSoftObjectPath,                                                GlobalCurveTableName);                                     // 0x0120(0x0018)  (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0110 PADDING_0161, class UCurveTable*,                                                    GlobalCurveTable);                                         // 0x0138(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0118 PADDING_0161, struct FSoftObjectPath,                                                GlobalAttributeMetaDataTableName);                         // 0x0140(0x0018)  (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0130 PADDING_0161, class UDataTable*,                                                     GlobalAttributeMetaDataTable);                             // 0x0158(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0138 PADDING_0161, struct FSoftObjectPath,                                                GlobalAttributeSetDefaultsTableName);                      // 0x0160(0x0018)  (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0150 PADDING_0161, TArray<struct FSoftObjectPath>,                                        GlobalAttributeSetDefaultsTableNames);                     // 0x0178(0x0010)  (ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0160 PADDING_0161, TArray<class UCurveTable*>,                                            GlobalAttributeDefaultsTables);                            // 0x0188(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0170 PADDING_0161, struct FSoftObjectPath,                                                GlobalGameplayCueManagerClass);                            // 0x0198(0x0018)  (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0188 PADDING_0161, struct FSoftObjectPath,                                                GlobalGameplayCueManagerName);                             // 0x01B0(0x0018)  (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x01A0 PADDING_0161, TArray<struct FString>,                                                GameplayCueNotifyPaths);                                   // 0x01C8(0x0010)  (ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x01B0 PADDING_0161, struct FSoftObjectPath,                                                GameplayTagResponseTableName);                             // 0x01D8(0x0018)  (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x01C8 PADDING_0161, class UGameplayTagReponseTable*,                                       GameplayTagResponseTable);                                 // 0x01F0(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x01D0 PADDING_0161, bool,                                                                  PredictTargetGameplayEffects);                             // 0x01F8(0x0001)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x01D8 PADDING_0161, class UGameplayCueManager*,                                            GlobalGameplayCueManager);                                 // 0x0200(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemGlobals");
		return ptr;
	}


	void ToggleIgnoreAbilitySystemCosts();
	void ToggleIgnoreAbilitySystemCooldowns();
};

// Class GameplayAbilities.AbilitySystemInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UAbilitySystemInterface : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemInterface");
		return ptr;
	}


};

// Class GameplayAbilities.AbilitySystemReplicationProxyInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UAbilitySystemReplicationProxyInterface : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemReplicationProxyInterface");
		return ptr;
	}


};

// Class GameplayAbilities.AttributeSet
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UAttributeSet : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AttributeSet");
		return ptr;
	}


};

// Class GameplayAbilities.AbilitySystemTestAttributeSet
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_016C - 0x0000 // Minimum to subtract -> (0008)
class UAbilitySystemTestAttributeSet : public UAttributeSet
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_016C, float,                                                                 MaxHealth);                                                // 0x0030(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_016C, float,                                                                 Health);                                                   // 0x0034(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_016C, float,                                                                 Mana);                                                     // 0x0038(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_016C, float,                                                                 MaxMana);                                                  // 0x003C(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_016C, float,                                                                 damage);                                                   // 0x0040(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_016C, float,                                                                 SpellDamage);                                              // 0x0044(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_016C, float,                                                                 PhysicalDamage);                                           // 0x0048(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_016C, float,                                                                 CritChance);                                               // 0x004C(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_016C, float,                                                                 CritMultiplier);                                           // 0x0050(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002C PADDING_016C, float,                                                                 ArmorDamageReduction);                                     // 0x0054(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_016C, float,                                                                 DodgeChance);                                              // 0x0058(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0034 PADDING_016C, float,                                                                 LifeSteal);                                                // 0x005C(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_016C, float,                                                                 Strength);                                                 // 0x0060(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003C PADDING_016C, float,                                                                 StackingAttribute1);                                       // 0x0064(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_016C, float,                                                                 StackingAttribute2);                                       // 0x0068(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0044 PADDING_016C, float,                                                                 NoStackAttribute);                                         // 0x006C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemTestAttributeSet");
		return ptr;
	}


};

// Class GameplayAbilities.AbilitySystemTestPawn
// 0x0027 (FullSize[0x02F0] - InheritedSize[0x02C9])
// LastOffsetWithSize(0x02C9)
#define PADDING_016F - 0x0000 // Minimum to subtract -> (001F)
class AAbilitySystemTestPawn : public ADefaultPawn
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x001F PADDING_016F, class UAbilitySystemComponent*,                                        AbilitySystemComponent);                                   // 0x02E8(0x0008)  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemTestPawn");
		return ptr;
	}


};

// Class GameplayAbilities.AbilityTask
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0068)
#define PADDING_0171 - 0x0000 // Minimum to subtract -> (0000)
class UAbilityTask : public UGameplayTask
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0171, class UGameplayAbility*,                                               Ability);                                                  // 0x0068(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0171, class UAbilitySystemComponent*,                                        AbilitySystemComponent);                                   // 0x0070(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask");
		return ptr;
	}


};

// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// 0x0030 (FullSize[0x00A8] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_0174 - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0174, struct FName,                                                          ForceName);                                                // 0x0080(0x0008)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0174, ERootMotionFinishVelocityMode,                                         FinishVelocityMode);                                       // 0x0088(0x0001)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0174, struct FVector,                                                        FinishSetVelocity);                                        // 0x008C(0x000C)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0174, float,                                                                 FinishClampVelocity);                                      // 0x0098(0x0004)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0174, class UCharacterMovementComponent*,                                    MovementComponent);                                        // 0x00A0(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base");
		return ptr;
	}


};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// 0x0040 (FullSize[0x00E8] - InheritedSize[0x00A8])
// LastOffsetWithSize(0x00A8)
#define PADDING_0176 - 0x0000 // Minimum to subtract -> (0010)
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0176, struct FScriptMulticastDelegate,                                       OnFinish);                                                 // 0x00B8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0176, struct FVector,                                                        WorldDirection);                                           // 0x00C8(0x000C)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x002C PADDING_0176, float,                                                                 Strength);                                                 // 0x00D4(0x0004)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0176, float,                                                                 Duration);                                                 // 0x00D8(0x0004)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0034 PADDING_0176, bool,                                                                  bIsAdditive);                                              // 0x00DC(0x0001)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0176, class UCurveFloat*,                                                    StrengthOverTime);                                         // 0x00E0(0x0008)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce");
		return ptr;
	}


	static class UAbilityTask_ApplyRootMotionConstantForce* STATIC_ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& WorldDirection, float Strength, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// 0x0060 (FullSize[0x0108] - InheritedSize[0x00A8])
// LastOffsetWithSize(0x00A8)
#define PADDING_0178 - 0x0000 // Minimum to subtract -> (0010)
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0178, struct FScriptMulticastDelegate,                                       OnFinish);                                                 // 0x00B8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0178, struct FScriptMulticastDelegate,                                       OnLanded);                                                 // 0x00C8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0178, struct FRotator,                                                       Rotation);                                                 // 0x00D8(0x000C)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x003C PADDING_0178, float,                                                                 distance);                                                 // 0x00E4(0x0004)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0178, float,                                                                 Height);                                                   // 0x00E8(0x0004)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0044 PADDING_0178, float,                                                                 Duration);                                                 // 0x00EC(0x0004)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0178, float,                                                                 MinimumLandedTriggerTime);                                 // 0x00F0(0x0004)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x004C PADDING_0178, bool,                                                                  bFinishOnLanded);                                          // 0x00F4(0x0001)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0178, class UCurveVector*,                                                   PathOffsetCurve);                                          // 0x00F8(0x0008)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0178, class UCurveFloat*,                                                    TimeMappingCurve);                                         // 0x0100(0x0008)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce");
		return ptr;
	}


	void OnLandedCallback(const struct FHitResult& Hit);
	void Finish();
	static class UAbilityTask_ApplyRootMotionJumpForce* STATIC_ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FRotator& Rotation, float distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve);
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// 0x0080 (FullSize[0x0128] - InheritedSize[0x00A8])
// LastOffsetWithSize(0x00A8)
#define PADDING_0179 - 0x0000 // Minimum to subtract -> (0010)
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0179, struct FScriptMulticastDelegate,                                       OnFinished);                                               // 0x00B8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0179, struct FVector,                                                        StartLocation);                                            // 0x00D0(0x000C)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0034 PADDING_0179, struct FVector,                                                        TargetLocation);                                           // 0x00DC(0x000C)  (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0179, class AActor*,                                                         TargetActor);                                              // 0x00E8(0x0008)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0179, struct FVector,                                                        TargetLocationOffset);                                     // 0x00F0(0x000C)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0054 PADDING_0179, ERootMotionMoveToActorTargetOffsetType,                                OffsetAlignment);                                          // 0x00FC(0x0001)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0179, float,                                                                 Duration);                                                 // 0x0100(0x0004)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x005C PADDING_0179, bool,                                                                  bDisableDestinationReachedInterrupt);                      // 0x0104(0x0001)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x005D PADDING_0179, bool,                                                                  bSetNewMovementMode);                                      // 0x0105(0x0001)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x005E PADDING_0179, TEnumAsByte<EMovementMode>,                                            NewMovementMode);                                          // 0x0106(0x0001)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x005F PADDING_0179, bool,                                                                  bRestrictSpeedToExpected);                                 // 0x0107(0x0001)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0179, class UCurveVector*,                                                   PathOffsetCurve);                                          // 0x0108(0x0008)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0179, class UCurveFloat*,                                                    TimeMappingCurve);                                         // 0x0110(0x0008)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0179, class UCurveFloat*,                                                    TargetLerpSpeedHorizontalCurve);                           // 0x0118(0x0008)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0179, class UCurveFloat*,                                                    TargetLerpSpeedVerticalCurve);                             // 0x0120(0x0008)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce");
		return ptr;
	}


	void OnTargetActorSwapped(class AActor* OriginalTarget, class AActor* NewTarget);
	void OnRep_TargetLocation();
	static class UAbilityTask_ApplyRootMotionMoveToActorForce* STATIC_ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, float ClampVelocityOnFinish, const struct FVector& SetVelocityOnFinish, ERootMotionFinishVelocityMode VelocityOnFinishMode, class UCurveFloat* TimeMappingCurve, class UCurveVector* PathOffsetCurve, bool bRestrictSpeedToExpected, TEnumAsByte<EMovementMode> MovementMode, bool bSetNewMovementMode, class UCurveFloat* TargetLerpSpeedVertical, class UCurveFloat* TargetLerpSpeedHorizontal, float Duration, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, const struct FVector& TargetLocationOffset, int TargetActorIndex, int TargetDataIndex, const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FName& TaskInstanceName, bool bDisableDestinationReachedInterrupt);
	static class UAbilityTask_ApplyRootMotionMoveToActorForce* STATIC_ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, float ClampVelocityOnFinish, const struct FVector& SetVelocityOnFinish, ERootMotionFinishVelocityMode VelocityOnFinishMode, class UCurveFloat* TimeMappingCurve, class UCurveVector* PathOffsetCurve, bool bRestrictSpeedToExpected, TEnumAsByte<EMovementMode> MovementMode, bool bSetNewMovementMode, class UCurveFloat* TargetLerpSpeedVertical, class UCurveFloat* TargetLerpSpeedHorizontal, float Duration, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, const struct FVector& TargetLocationOffset, class AActor* TargetActor, const struct FName& TaskInstanceName, bool bDisableDestinationReachedInterrupt);
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// 0x0058 (FullSize[0x0100] - InheritedSize[0x00A8])
// LastOffsetWithSize(0x00A8)
#define PADDING_017B - 0x0000 // Minimum to subtract -> (0010)
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_017B, struct FScriptMulticastDelegate,                                       OnTimedOut);                                               // 0x00B8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_017B, struct FScriptMulticastDelegate,                                       OnTimedOutAndDestinationReached);                          // 0x00C8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_017B, struct FVector,                                                        StartLocation);                                            // 0x00D8(0x000C)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x003C PADDING_017B, struct FVector,                                                        TargetLocation);                                           // 0x00E4(0x000C)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0048 PADDING_017B, float,                                                                 Duration);                                                 // 0x00F0(0x0004)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x004C PADDING_017B, bool,                                                                  bSetNewMovementMode);                                      // 0x00F4(0x0001)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x004D PADDING_017B, TEnumAsByte<EMovementMode>,                                            NewMovementMode);                                          // 0x00F5(0x0001)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x004E PADDING_017B, bool,                                                                  bRestrictSpeedToExpected);                                 // 0x00F6(0x0001)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0050 PADDING_017B, class UCurveVector*,                                                   PathOffsetCurve);                                          // 0x00F8(0x0008)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce");
		return ptr;
	}


	static class UAbilityTask_ApplyRootMotionMoveToForce* STATIC_ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// 0x0068 (FullSize[0x0110] - InheritedSize[0x00A8])
// LastOffsetWithSize(0x00A8)
#define PADDING_017F - 0x0000 // Minimum to subtract -> (0010)
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_017F, struct FScriptMulticastDelegate,                                       OnFinish);                                                 // 0x00B8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_017F, struct FVector,                                                        Location);                                                 // 0x00C8(0x000C)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0030 PADDING_017F, class AActor*,                                                         LocationActor);                                            // 0x00D8(0x0008)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0038 PADDING_017F, float,                                                                 Strength);                                                 // 0x00E0(0x0004)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x003C PADDING_017F, float,                                                                 Duration);                                                 // 0x00E4(0x0004)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0040 PADDING_017F, float,                                                                 Radius);                                                   // 0x00E8(0x0004)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0044 PADDING_017F, bool,                                                                  bIsPush);                                                  // 0x00EC(0x0001)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0045 PADDING_017F, bool,                                                                  bIsAdditive);                                              // 0x00ED(0x0001)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0046 PADDING_017F, bool,                                                                  bNoZForce);                                                // 0x00EE(0x0001)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0048 PADDING_017F, class UCurveFloat*,                                                    StrengthDistanceFalloff);                                  // 0x00F0(0x0008)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0050 PADDING_017F, class UCurveFloat*,                                                    StrengthOverTime);                                         // 0x00F8(0x0008)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0058 PADDING_017F, bool,                                                                  bUseFixedWorldDirection);                                  // 0x0100(0x0001)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x005C PADDING_017F, struct FRotator,                                                       FixedWorldDirection);                                      // 0x0104(0x000C)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce");
		return ptr;
	}


	static class UAbilityTask_ApplyRootMotionRadialForce* STATIC_ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, const struct FVector& SetVelocityOnFinish, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FRotator& FixedWorldDirection, bool bUseFixedWorldDirection, class UCurveFloat* StrengthOverTime, class UCurveFloat* StrengthDistanceFalloff, bool bNoZForce, bool bIsAdditive, bool bIsPush, float Radius, float Duration, float Strength, class AActor* LocationActor, const struct FVector& Location, const struct FName& TaskInstanceName, float ClampVelocityOnFinish);
};

// Class GameplayAbilities.AbilityTask_MoveToLocation
// 0x0050 (FullSize[0x00C8] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_0180 - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_MoveToLocation : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0180, struct FScriptMulticastDelegate,                                       OnTargetLocationReached);                                  // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0180, struct FVector,                                                        StartLocation);                                            // 0x0094(0x000C)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0180, struct FVector,                                                        TargetLocation);                                           // 0x00A0(0x000C)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0034 PADDING_0180, float,                                                                 DurationOfMovement);                                       // 0x00AC(0x0004)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0180, class UCurveFloat*,                                                    LerpCurve);                                                // 0x00B8(0x0008)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0180, class UCurveVector*,                                                   LerpCurveVector);                                          // 0x00C0(0x0008)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_MoveToLocation");
		return ptr;
	}


	static class UAbilityTask_MoveToLocation* STATIC_MoveToLocation(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve);
};

// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_0182 - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0182, struct FScriptMulticastDelegate,                                       OnSync);                                                   // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_NetworkSyncPoint");
		return ptr;
	}


	static class UAbilityTask_NetworkSyncPoint* STATIC_WaitNetSync(class UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType);
	void OnSignalCallback();
};

// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// 0x0089 (FullSize[0x0101] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_0185 - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0185, struct FScriptMulticastDelegate,                                       OnCompleted);                                              // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0185, struct FScriptMulticastDelegate,                                       OnBlendOut);                                               // 0x0090(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0185, struct FScriptMulticastDelegate,                                       OnInterrupted);                                            // 0x00A0(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0185, struct FScriptMulticastDelegate,                                       OnCancelled);                                              // 0x00B0(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0185, class UAnimMontage*,                                                   MontageToPlay);                                            // 0x00E8(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0185, float,                                                                 Rate);                                                     // 0x00F0(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x007C PADDING_0185, struct FName,                                                          StartSection);                                             // 0x00F4(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0084 PADDING_0185, float,                                                                 AnimRootMotionTranslationScale);                           // 0x00FC(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0185, bool,                                                                  bStopWhenAbilityEnds);                                     // 0x0100(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_PlayMontageAndWait");
		return ptr;
	}


	void OnMontageInterrupted();
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	static class UAbilityTask_PlayMontageAndWait* STATIC_CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const struct FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale);
};

// Class GameplayAbilities.AbilityTask_Repeat
// 0x0028 (FullSize[0x00A0] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_0186 - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_Repeat : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0186, struct FScriptMulticastDelegate,                                       OnPerformAction);                                          // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0186, struct FScriptMulticastDelegate,                                       OnFinished);                                               // 0x0090(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_Repeat");
		return ptr;
	}


	static class UAbilityTask_Repeat* STATIC_RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int TotalActionCount);
};

// Class GameplayAbilities.AbilityTask_SpawnActor
// 0x0028 (FullSize[0x00A0] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_0188 - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_SpawnActor : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0188, struct FScriptMulticastDelegate,                                       Success);                                                  // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0188, struct FScriptMulticastDelegate,                                       DidNotSpawn);                                              // 0x0090(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_SpawnActor");
		return ptr;
	}


	static class UAbilityTask_SpawnActor* STATIC_SpawnActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class, class AActor** SpawnedActor);
};

// Class GameplayAbilities.AbilityTask_StartAbilityState
// 0x0028 (FullSize[0x00A0] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_018B - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_StartAbilityState : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_018B, struct FScriptMulticastDelegate,                                       OnStateEnded);                                             // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_018B, struct FScriptMulticastDelegate,                                       OnStateInterrupted);                                       // 0x0090(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_StartAbilityState");
		return ptr;
	}


	static class UAbilityTask_StartAbilityState* STATIC_StartAbilityState(class UGameplayAbility* OwningAbility, const struct FName& StateName, bool bEndCurrentState);
};

// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_018D - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_018D, struct FScriptMulticastDelegate,                                       TimeElapsed);                                              // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_VisualizeTargeting");
		return ptr;
	}


	static class UAbilityTask_VisualizeTargeting* STATIC_VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, const struct FName& TaskInstanceName, float Duration);
	static class UAbilityTask_VisualizeTargeting* STATIC_VisualizeTargeting(class UGameplayAbility* OwningAbility, class UClass* Class, const struct FName& TaskInstanceName, float Duration);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
};

// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_018F - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_018F, struct FScriptMulticastDelegate,                                       OnActivate);                                               // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAbilityActivate");
		return ptr;
	}


	static class UAbilityTask_WaitAbilityActivate* STATIC_WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce);
	static class UAbilityTask_WaitAbilityActivate* STATIC_WaitForAbilityActivate_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool IncludeTriggeredAbilities, bool TriggerOnce);
	static class UAbilityTask_WaitAbilityActivate* STATIC_WaitForAbilityActivate(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
	void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);
};

// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_0191 - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0191, struct FScriptMulticastDelegate,                                       OnCommit);                                                 // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAbilityCommit");
		return ptr;
	}


	static class UAbilityTask_WaitAbilityCommit* STATIC_WaitForAbilityCommit_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool TriggerOnce);
	static class UAbilityTask_WaitAbilityCommit* STATIC_WaitForAbilityCommit(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce);
	void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// 0x0068 (FullSize[0x00E0] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_0194 - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0194, struct FScriptMulticastDelegate,                                       OnChange);                                                 // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0194, class UAbilitySystemComponent*,                                        ExternalOwner);                                            // 0x00D8(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChange");
		return ptr;
	}


	static class UAbilityTask_WaitAttributeChange* STATIC_WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce, class AActor* OptionalExternalOwner);
	static class UAbilityTask_WaitAttributeChange* STATIC_WaitForAttributeChange(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce, class AActor* OptionalExternalOwner);
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// 0x0098 (FullSize[0x0110] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_0196 - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0196, struct FScriptMulticastDelegate,                                       OnChange);                                                 // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0196, class UAbilitySystemComponent*,                                        ExternalOwner);                                            // 0x0108(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold");
		return ptr;
	}


	static class UAbilityTask_WaitAttributeChangeRatioThreshold* STATIC_WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& AttributeNumerator, const struct FGameplayAttribute& AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner);
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// 0x0060 (FullSize[0x00D8] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_0197 - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0197, struct FScriptMulticastDelegate,                                       OnChange);                                                 // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0197, class UAbilitySystemComponent*,                                        ExternalOwner);                                            // 0x00D0(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold");
		return ptr;
	}


	static class UAbilityTask_WaitAttributeChangeThreshold* STATIC_WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner);
};

// Class GameplayAbilities.AbilityTask_WaitCancel
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_0198 - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_WaitCancel : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0198, struct FScriptMulticastDelegate,                                       OnCancel);                                                 // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitCancel");
		return ptr;
	}


	static class UAbilityTask_WaitCancel* STATIC_WaitCancel(class UGameplayAbility* OwningAbility);
	void OnLocalCancelCallback();
	void OnCancelCallback();
};

// Class GameplayAbilities.AbilityTask_WaitConfirm
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_0199 - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_WaitConfirm : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0199, struct FScriptMulticastDelegate,                                       OnConfirm);                                                // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitConfirm");
		return ptr;
	}


	static class UAbilityTask_WaitConfirm* STATIC_WaitConfirm(class UGameplayAbility* OwningAbility);
	void OnConfirmCallback(class UGameplayAbility* InAbility);
};

// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// 0x0028 (FullSize[0x00A0] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_019E - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_019E, struct FScriptMulticastDelegate,                                       OnConfirm);                                                // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_019E, struct FScriptMulticastDelegate,                                       OnCancel);                                                 // 0x0090(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitConfirmCancel");
		return ptr;
	}


	static class UAbilityTask_WaitConfirmCancel* STATIC_WaitConfirmCancel(class UGameplayAbility* OwningAbility);
	void OnLocalConfirmCallback();
	void OnLocalCancelCallback();
	void OnConfirmCallback();
	void OnCancelCallback();
};

// Class GameplayAbilities.AbilityTask_WaitDelay
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_01A0 - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_WaitDelay : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_01A0, struct FScriptMulticastDelegate,                                       OnFinish);                                                 // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitDelay");
		return ptr;
	}


	static class UAbilityTask_WaitDelay* STATIC_WaitDelay(class UGameplayAbility* OwningAbility, float Time);
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// 0x0138 (FullSize[0x01B0] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_01A1 - 0x0000 // Minimum to subtract -> (0130)
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0130 PADDING_01A1, class UAbilitySystemComponent*,                                        ExternalOwner);                                            // 0x01A8(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied");
		return ptr;
	}


	void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle);
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// 0x0018 (FullSize[0x01C8] - InheritedSize[0x01B0])
// LastOffsetWithSize(0x01B0)
#define PADDING_01A3 - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_01A3, struct FScriptMulticastDelegate,                                       OnApplied);                                                // 0x01B8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self");
		return ptr;
	}


	static class UAbilityTask_WaitGameplayEffectApplied_Self* STATIC_WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
	static class UAbilityTask_WaitGameplayEffectApplied_Self* STATIC_WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// 0x0018 (FullSize[0x01C8] - InheritedSize[0x01B0])
// LastOffsetWithSize(0x01B0)
#define PADDING_01A4 - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_01A4, struct FScriptMulticastDelegate,                                       OnApplied);                                                // 0x01B8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target");
		return ptr;
	}


	static class UAbilityTask_WaitGameplayEffectApplied_Target* STATIC_WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
	static class UAbilityTask_WaitGameplayEffectApplied_Target* STATIC_WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects);
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// 0x00A8 (FullSize[0x0120] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_01A6 - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_01A6, struct FScriptMulticastDelegate,                                       bLocked);                                                  // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_01A6, class UAbilitySystemComponent*,                                        ExternalOwner);                                            // 0x0118(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity");
		return ptr;
	}


	static class UAbilityTask_WaitGameplayEffectBlockedImmunity* STATIC_WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// 0x0028 (FullSize[0x00A0] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_01A9 - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_01A9, struct FScriptMulticastDelegate,                                       OnRemoved);                                                // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_01A9, struct FScriptMulticastDelegate,                                       InvalidHandle);                                            // 0x0090(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved");
		return ptr;
	}


	static class UAbilityTask_WaitGameplayEffectRemoved* STATIC_WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle);
	void OnGameplayEffectRemoved(const struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// 0x0028 (FullSize[0x00A0] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_01AB - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_01AB, struct FScriptMulticastDelegate,                                       OnChange);                                                 // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_01AB, struct FScriptMulticastDelegate,                                       InvalidHandle);                                            // 0x0090(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange");
		return ptr;
	}


	static class UAbilityTask_WaitGameplayEffectStackChange* STATIC_WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle);
	void OnGameplayEffectStackChange(const struct FActiveGameplayEffectHandle& Handle, int NewCount, int OldCount);
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// 0x0028 (FullSize[0x00A0] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_01AC - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_01AC, struct FScriptMulticastDelegate,                                       EventReceived);                                            // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_01AC, class UAbilitySystemComponent*,                                        OptionalExternalTarget);                                   // 0x0098(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEvent");
		return ptr;
	}


	static class UAbilityTask_WaitGameplayEvent* STATIC_WaitGameplayEvent(class UGameplayAbility* OwningAbility, const struct FGameplayTag& EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact);
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// 0x0020 (FullSize[0x0098] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_01AD - 0x0000 // Minimum to subtract -> (0018)
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0018 PADDING_01AD, class UAbilitySystemComponent*,                                        OptionalExternalTarget);                                   // 0x0090(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTag");
		return ptr;
	}


	void GameplayTagCallback(const struct FGameplayTag& Tag, int NewCount);
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// 0x0020 (FullSize[0x00B8] - InheritedSize[0x0098])
// LastOffsetWithSize(0x0098)
#define PADDING_01AF - 0x0000 // Minimum to subtract -> (0010)
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_01AF, struct FScriptMulticastDelegate,                                       Added);                                                    // 0x00A8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded");
		return ptr;
	}


	static class UAbilityTask_WaitGameplayTagAdded* STATIC_WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// 0x0020 (FullSize[0x00B8] - InheritedSize[0x0098])
// LastOffsetWithSize(0x0098)
#define PADDING_01B2 - 0x0000 // Minimum to subtract -> (0010)
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_01B2, struct FScriptMulticastDelegate,                                       Removed);                                                  // 0x00A8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved");
		return ptr;
	}


	static class UAbilityTask_WaitGameplayTagRemoved* STATIC_WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};

// Class GameplayAbilities.AbilityTask_WaitInputPress
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_01B5 - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_WaitInputPress : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_01B5, struct FScriptMulticastDelegate,                                       OnPress);                                                  // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitInputPress");
		return ptr;
	}


	static class UAbilityTask_WaitInputPress* STATIC_WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);
	void OnPressCallback();
};

// Class GameplayAbilities.AbilityTask_WaitInputRelease
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_01B6 - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_WaitInputRelease : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_01B6, struct FScriptMulticastDelegate,                                       OnRelease);                                                // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitInputRelease");
		return ptr;
	}


	static class UAbilityTask_WaitInputRelease* STATIC_WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased);
	void OnReleaseCallback();
};

// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_01B7 - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_01B7, struct FScriptMulticastDelegate,                                       OnChange);                                                 // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitMovementModeChange");
		return ptr;
	}


	void OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	static class UAbilityTask_WaitMovementModeChange* STATIC_CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode);
};

// Class GameplayAbilities.AbilityTask_WaitOverlap
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_01BB - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_WaitOverlap : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_01BB, struct FScriptMulticastDelegate,                                       OnOverlap);                                                // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitOverlap");
		return ptr;
	}


	static class UAbilityTask_WaitOverlap* STATIC_WaitForOverlap(class UGameplayAbility* OwningAbility);
	void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};

// Class GameplayAbilities.AbilityTask_WaitTargetData
// 0x0038 (FullSize[0x00B0] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_01BD - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_WaitTargetData : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_01BD, struct FScriptMulticastDelegate,                                       ValidData);                                                // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_01BD, struct FScriptMulticastDelegate,                                       Cancelled);                                                // 0x0090(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_01BD, class UClass*,                                                         TargetClass);                                              // 0x00A0(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0030 PADDING_01BD, class AGameplayAbilityTargetActor*,                                    TargetActor);                                              // 0x00A8(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitTargetData");
		return ptr;
	}


	static class UAbilityTask_WaitTargetData* STATIC_WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor);
	static class UAbilityTask_WaitTargetData* STATIC_WaitTargetData(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class UClass* Class);
	void OnTargetDataReplicatedCancelledCallback();
	void OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag);
	void OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data);
	void OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
};

// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// 0x0020 (FullSize[0x0098] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_01BE - 0x0000 // Minimum to subtract -> (0008)
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_01BE, struct FScriptMulticastDelegate,                                       OnVelocityChage);                                          // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_01BE, class UMovementComponent*,                                             CachedMovementComponent);                                  // 0x0090(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitVelocityChange");
		return ptr;
	}


	static class UAbilityTask_WaitVelocityChange* STATIC_CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, const struct FVector& Direction, float MinimumMagnitude);
};

// Class GameplayAbilities.GameplayAbility
// 0x03D1 (FullSize[0x03F9] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_01C0 - 0x0000 // Minimum to subtract -> (0080)
class UGameplayAbility : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0080 PADDING_01C0, struct FGameplayTagContainer,                                          AbilityTags);                                              // 0x00A8(0x0020)  (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_01C0, bool,                                                                  bReplicateInputDirectly);                                  // 0x00C8(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A1 PADDING_01C0, bool,                                                                  RemoteInstanceEnded);                                      // 0x00C9(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A6 PADDING_01C0, TEnumAsByte<EGameplayAbilityReplicationPolicy>,                        ReplicationPolicy);                                        // 0x00CE(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00A7 PADDING_01C0, TEnumAsByte<EGameplayAbilityInstancingPolicy>,                         InstancingPolicy);                                         // 0x00CF(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_01C0, bool,                                                                  bServerRespectsRemoteAbilityCancellation);                 // 0x00D0(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00A9 PADDING_01C0, bool,                                                                  bRetriggerInstancedAbility);                               // 0x00D1(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_01C0, struct FGameplayAbilityActivationInfo,                                 CurrentActivationInfo);                                    // 0x00D8(0x0020)  (BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_01C0, struct FGameplayEventData,                                             CurrentEventData);                                         // 0x00F8(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0180 PADDING_01C0, TEnumAsByte<EGameplayAbilityNetExecutionPolicy>,                       NetExecutionPolicy);                                       // 0x01A8(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0188 PADDING_01C0, class UClass*,                                                         CostGameplayEffectClass);                                  // 0x01B0(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0190 PADDING_01C0, TArray<struct FAbilityTriggerData>,                                    AbilityTriggers);                                          // 0x01B8(0x0010)  (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x01A0 PADDING_01C0, class UClass*,                                                         CooldownGameplayEffectClass);                              // 0x01C8(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x01A8 PADDING_01C0, struct FGameplayTagQuery,                                              CancelAbilitiesMatchingTagQuery);                          // 0x01D0(0x0048)  (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x01F0 PADDING_01C0, struct FGameplayTagContainer,                                          CancelAbilitiesWithTag);                                   // 0x0218(0x0020)  (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0210 PADDING_01C0, struct FGameplayTagContainer,                                          BlockAbilitiesWithTag);                                    // 0x0238(0x0020)  (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0230 PADDING_01C0, struct FGameplayTagContainer,                                          ActivationOwnedTags);                                      // 0x0258(0x0020)  (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0250 PADDING_01C0, struct FGameplayTagContainer,                                          ActivationRequiredTags);                                   // 0x0278(0x0020)  (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0270 PADDING_01C0, struct FGameplayTagContainer,                                          ActivationBlockedTags);                                    // 0x0298(0x0020)  (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0290 PADDING_01C0, struct FGameplayTagContainer,                                          SourceRequiredTags);                                       // 0x02B8(0x0020)  (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x02B0 PADDING_01C0, struct FGameplayTagContainer,                                          SourceBlockedTags);                                        // 0x02D8(0x0020)  (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x02D0 PADDING_01C0, struct FGameplayTagContainer,                                          TargetRequiredTags);                                       // 0x02F8(0x0020)  (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x02F0 PADDING_01C0, struct FGameplayTagContainer,                                          TargetBlockedTags);                                        // 0x0318(0x0020)  (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0330 PADDING_01C0, TArray<class UGameplayTask*>,                                          ActiveTasks);                                              // 0x0358(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0350 PADDING_01C0, class UAnimMontage*,                                                   CurrentMontage);                                           // 0x0378(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x03B8 PADDING_01C0, bool,                                                                  bIsActive);                                                // 0x03E0(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x03B9 PADDING_01C0, bool,                                                                  bIsCancelable);                                            // 0x03E1(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x03BA PADDING_01C0, bool,                                                                  bIsBlockingOtherAbilities);                                // 0x03E2(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x03D0 PADDING_01C0, bool,                                                                  bMarkPendingKillOnAbilityEnd);                             // 0x03F8(0x0001)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility");
		return ptr;
	}


	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);
	void SetCanBeCanceled(bool bCanBeCanceled);
	void SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
	void RemoveGrantedByEffect();
	void MontageStop(float OverrideBlendOutTime);
	void MontageSetNextSectionName(const struct FName& FromSectionName, const struct FName& ToSectionName);
	void MontageJumpToSection(const struct FName& SectionName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(const struct FName& SocketName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
	void K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
	void K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context);
	void K2_EndAbility();
	void K2_CommitExecute();
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent);
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);
	bool K2_CommitAbility();
	bool K2_CheckAbilityCost();
	bool K2_CheckAbilityCooldown();
	void K2_CancelAbility();
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
	TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle);
	void K2_AddGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd);
	void K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_ActivateAbility();
	void InvalidateClientPredictionKey();
	class USkeletalMeshComponent* GetOwningComponentFromActorInfo();
	class AActor* GetOwningActorFromActorInfo();
	struct FGameplayEffectContextHandle GetGrantedByEffectContext();
	class UObject* GetCurrentSourceObject();
	class UAnimMontage* GetCurrentMontage();
	float GetCooldownTimeRemaining();
	struct FGameplayEffectContextHandle GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData);
	class AActor* GetAvatarActorFromActorInfo();
	struct FGameplayAbilityActorInfo GetActorInfo();
	class UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo();
	int GetAbilityLevel();
	void EndTaskByInstanceName(const struct FName& InstanceName);
	void EndAbilityState(const struct FName& OptionalStateNameToEnd);
	void ConfirmTaskByInstanceName(const struct FName& InstanceName, bool bEndTask);
	void CancelTaskByInstanceName(const struct FName& InstanceName);
	void BP_RemoveGameplayEffectFromOwnerWithHandle(const struct FActiveGameplayEffectHandle& Handle, int StacksToRemove);
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int StacksToRemove);
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int StacksToRemove);
	TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* GameplayEffectClass, int GameplayEffectLevel, int Stacks);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int GameplayEffectLevel, int Stacks);
};

// Class GameplayAbilities.GameplayAbility_CharacterJump
// 0x0007 (FullSize[0x0400] - InheritedSize[0x03F9])
// LastOffsetWithSize(0x03F9)
class UGameplayAbility_CharacterJump : public UGameplayAbility
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility_CharacterJump");
		return ptr;
	}


};

// Class GameplayAbilities.GameplayAbility_Montage
// 0x003F (FullSize[0x0438] - InheritedSize[0x03F9])
// LastOffsetWithSize(0x03F9)
#define PADDING_01C5 - 0x0000 // Minimum to subtract -> (0007)
class UGameplayAbility_Montage : public UGameplayAbility
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_01C5, class UAnimMontage*,                                                   MontageToPlay);                                            // 0x0400(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000F PADDING_01C5, float,                                                                 PlayRate);                                                 // 0x0408(0x0004)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0013 PADDING_01C5, struct FName,                                                          SectionName);                                              // 0x040C(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001F PADDING_01C5, TArray<class UClass*>,                                                 GameplayEffectClassesWhileAnimating);                      // 0x0418(0x0010)  (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002F PADDING_01C5, TArray<class UGameplayEffect*>,                                        GameplayEffectsWhileAnimating);                            // 0x0428(0x0010)  (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility_Montage");
		return ptr;
	}


};

// Class GameplayAbilities.GameplayAbilityBlueprint
// 0x0007 (FullSize[0x00D8] - InheritedSize[0x00D1])
// LastOffsetWithSize(0x00D1)
class UGameplayAbilityBlueprint : public UBlueprint
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityBlueprint");
		return ptr;
	}


};

// Class GameplayAbilities.GameplayAbilitySet
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
#define PADDING_01C8 - 0x0000 // Minimum to subtract -> (0000)
class UGameplayAbilitySet : public UDataAsset
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_01C8, TArray<struct FGameplayAbilityBindInfo>,                               Abilities);                                                // 0x0030(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilitySet");
		return ptr;
	}


};

// Class GameplayAbilities.GameplayAbilityTargetActor
// 0x0120 (FullSize[0x0358] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_01CA - 0x0000 // Minimum to subtract -> (0010)
class AGameplayAbilityTargetActor : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_01CA, bool,                                                                  ShouldProduceTargetDataOnServer);                          // 0x0248(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_01CA, struct FGameplayAbilityTargetingLocationInfo,                          StartLocation);                                            // 0x0250(0x0070)  (BlueprintVisible, BlueprintReadOnly, Net, ContainsInstancedReference, ExposeOnSpawn, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_01CA, class APlayerController*,                                              MasterPC);                                                 // 0x02F0(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_01CA, class UGameplayAbility*,                                               OwningAbility);                                            // 0x02F8(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_01CA, bool,                                                                  bDestroyOnConfirmation);                                   // 0x0300(0x0001)  (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_01CA, class AActor*,                                                         SourceActor);                                              // 0x0308(0x0008)  (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_01CA, struct FWorldReticleParameters,                                        ReticleParams);                                            // 0x0310(0x000C)  (BlueprintVisible, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_01CA, class UClass*,                                                         ReticleClass);                                             // 0x0320(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_01CA, struct FGameplayTargetDataFilterHandle,                                Filter);                                                   // 0x0328(0x0010)  (BlueprintVisible, Net, ExposeOnSpawn, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0100 PADDING_01CA, bool,                                                                  bDebug);                                                   // 0x0338(0x0001)  (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0118 PADDING_01CA, class UAbilitySystemComponent*,                                        GenericDelegateBoundASC);                                  // 0x0350(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor");
		return ptr;
	}


	void ConfirmTargeting();
	void CancelTargeting();
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// 0x000D (FullSize[0x0365] - InheritedSize[0x0358])
// LastOffsetWithSize(0x0358)
#define PADDING_01CB - 0x0000 // Minimum to subtract -> (0004)
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_01CB, struct FCollisionProfileName,                                          TraceProfile);                                             // 0x035C(0x0008)  (Edit, BlueprintVisible, Config, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_01CB, bool,                                                                  bTraceAffectsAimPitch);                                    // 0x0364(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_Trace");
		return ptr;
	}


};

// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// 0x0013 (FullSize[0x0378] - InheritedSize[0x0365])
// LastOffsetWithSize(0x0365)
#define PADDING_01CC - 0x0000 // Minimum to subtract -> (000B)
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x000B PADDING_01CC, float,                                                                 CollisionRadius);                                          // 0x0370(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000F PADDING_01CC, float,                                                                 CollisionHeight);                                          // 0x0374(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace");
		return ptr;
	}


};

// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// 0x0028 (FullSize[0x03A0] - InheritedSize[0x0378])
// LastOffsetWithSize(0x0378)
#define PADDING_01CD - 0x0000 // Minimum to subtract -> (0018)
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0018 PADDING_01CD, class UClass*,                                                         PlacedActorClass);                                         // 0x0390(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_01CD, class UMaterialInterface*,                                             PlacedActorMaterial);                                      // 0x0398(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement");
		return ptr;
	}


};

// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// 0x0008 (FullSize[0x0360] - InheritedSize[0x0358])
// LastOffsetWithSize(0x0358)
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_Radius");
		return ptr;
	}


};

// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// 0x000B (FullSize[0x0370] - InheritedSize[0x0365])
// LastOffsetWithSize(0x0365)
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace");
		return ptr;
	}


};

// Class GameplayAbilities.GameplayAbilityWorldReticle
// 0x0030 (FullSize[0x0268] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_01D3 - 0x0000 // Minimum to subtract -> (0010)
class AGameplayAbilityWorldReticle : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_01D3, struct FWorldReticleParameters,                                        Parameters);                                               // 0x0248(0x000C)  (Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_01D3, bool,                                                                  bFaceOwnerFlat);                                           // 0x0254(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001D PADDING_01D3, bool,                                                                  bSnapToTargetedActor);                                     // 0x0255(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001E PADDING_01D3, bool,                                                                  bIsTargetValid);                                           // 0x0256(0x0001)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x001F PADDING_01D3, bool,                                                                  bIsTargetAnActor);                                         // 0x0257(0x0001)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0020 PADDING_01D3, class APlayerController*,                                              MasterPC);                                                 // 0x0258(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0028 PADDING_01D3, class AActor*,                                                         TargetingActor);                                           // 0x0260(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityWorldReticle");
		return ptr;
	}


	void SetReticleMaterialParamVector(const struct FName& ParamName, const struct FVector& Value);
	void SetReticleMaterialParamFloat(const struct FName& ParamName, float Value);
	void OnValidTargetChanged(bool bNewValue);
	void OnTargetingAnActor(bool bNewValue);
	void OnParametersInitialized();
	void FaceTowardSource(bool bFaceIn2D);
};

// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// 0x0018 (FullSize[0x0280] - InheritedSize[0x0268])
// LastOffsetWithSize(0x0268)
#define PADDING_01D4 - 0x0000 // Minimum to subtract -> (0000)
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_01D4, class UCapsuleComponent*,                                              CollisionComponent);                                       // 0x0268(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0008 PADDING_01D4, TArray<class UActorComponent*>,                                        VisualizationComponents);                                  // 0x0270(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization");
		return ptr;
	}


};

// Class GameplayAbilities.GameplayCueInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UGameplayCueInterface : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueInterface");
		return ptr;
	}


	void ForwardGameplayCueToParent();
	void BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
};

// Class GameplayAbilities.GameplayCueManager
// 0x02C8 (FullSize[0x02F8] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
#define PADDING_01D8 - 0x0000 // Minimum to subtract -> (0018)
class UGameplayCueManager : public UDataAsset
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0018 PADDING_01D8, struct FGameplayCueObjectLibrary,                                      RuntimeGameplayCueObjectLibrary);                          // 0x0048(0x0050)  (Transient, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0068 PADDING_01D8, struct FGameplayCueObjectLibrary,                                      EditorGameplayCueObjectLibrary);                           // 0x0098(0x0050)  (Transient, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0280 PADDING_01D8, TArray<class UClass*>,                                                 LoadedGameplayCueNotifyClasses);                           // 0x02B0(0x0010)  (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0290 PADDING_01D8, TArray<class UClass*>,                                                 GameplayCueClassesForPreallocation);                       // 0x02C0(0x0010)  (ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x02A0 PADDING_01D8, TArray<struct FGameplayCuePendingExecute>,                             PendingExecuteCues);                                       // 0x02D0(0x0010)  (ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x02B0 PADDING_01D8, int,                                                                   GameplayCueSendContextCount);                              // 0x02E0(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x02B8 PADDING_01D8, TArray<struct FPreallocationInfo>,                                     PreallocationInfoList_Internal);                           // 0x02E8(0x0010)  (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueManager");
		return ptr;
	}


};

// Class GameplayAbilities.GameplayCueNotify_Actor
// 0x004C (FullSize[0x0284] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_01D9 - 0x0000 // Minimum to subtract -> (0010)
class AGameplayCueNotify_Actor : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_01D9, bool,                                                                  bAutoDestroyOnRemove);                                     // 0x0248(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_01D9, float,                                                                 AutoDestroyDelay);                                         // 0x024C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_01D9, bool,                                                                  WarnIfTimelineIsStillRunning);                             // 0x0250(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0019 PADDING_01D9, bool,                                                                  WarnIfLatentActionIsStillRunning);                         // 0x0251(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_01D9, struct FGameplayTag,                                                   GameplayCueTag);                                           // 0x0254(0x0008)  (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_01D9, struct FGameplayTagReferenceHelper,                                    ReferenceHelper);                                          // 0x0260(0x0010)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_01D9, struct FName,                                                          GameplayCueName);                                          // 0x0270(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_01D9, bool,                                                                  bAutoAttachToOwner);                                       // 0x0278(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0041 PADDING_01D9, bool,                                                                  IsOverride);                                               // 0x0279(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0042 PADDING_01D9, bool,                                                                  bUniqueInstancePerInstigator);                             // 0x027A(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0043 PADDING_01D9, bool,                                                                  bUniqueInstancePerSourceObject);                           // 0x027B(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0044 PADDING_01D9, bool,                                                                  bAllowMultipleOnActiveEvents);                             // 0x027C(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0045 PADDING_01D9, bool,                                                                  bAllowMultipleWhileActiveEvents);                          // 0x027D(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_01D9, int,                                                                   NumPreallocatedInstances);                                 // 0x0280(0x0004)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_Actor");
		return ptr;
	}


	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnOwnerDestroyed(class AActor* DestroyedActor);
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void K2_EndGameplayCue();
};

// Class GameplayAbilities.GameplayCueNotify_Static
// 0x0021 (FullSize[0x0049] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_01DB - 0x0000 // Minimum to subtract -> (0000)
class UGameplayCueNotify_Static : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_01DB, struct FGameplayTag,                                                   GameplayCueTag);                                           // 0x0028(0x0008)  (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_01DB, struct FGameplayTagReferenceHelper,                                    ReferenceHelper);                                          // 0x0030(0x0010)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_01DB, struct FName,                                                          GameplayCueName);                                          // 0x0040(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_01DB, bool,                                                                  IsOverride);                                               // 0x0048(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_Static");
		return ptr;
	}


	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
};

// Class GameplayAbilities.GameplayCueNotify_HitImpact
// 0x0017 (FullSize[0x0060] - InheritedSize[0x0049])
// LastOffsetWithSize(0x0049)
#define PADDING_01DE - 0x0000 // Minimum to subtract -> (0007)
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_01DE, class USoundBase*,                                                     Sound);                                                    // 0x0050(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000F PADDING_01DE, class UParticleSystem*,                                                ParticleSystem);                                           // 0x0058(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_HitImpact");
		return ptr;
	}


};

// Class GameplayAbilities.GameplayCueSet
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
#define PADDING_01E1 - 0x0000 // Minimum to subtract -> (0000)
class UGameplayCueSet : public UDataAsset
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_01E1, TArray<struct FGameplayCueNotifyData>,                                 GameplayCueData);                                          // 0x0030(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueSet");
		return ptr;
	}


};

// Class GameplayAbilities.GameplayCueTranslator
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UGameplayCueTranslator : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueTranslator");
		return ptr;
	}


};

// Class GameplayAbilities.GameplayCueTranslator_Test
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueTranslator_Test");
		return ptr;
	}


};

// Class GameplayAbilities.GameplayEffect
// 0x05C8 (FullSize[0x05F0] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_01EB - 0x0000 // Minimum to subtract -> (0008)
class UGameplayEffect : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_01EB, EGameplayEffectDurationType,                                           DurationPolicy);                                           // 0x0030(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_01EB, struct FGameplayEffectModifierMagnitude,                               DurationMagnitude);                                        // 0x0038(0x0190)  (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01A0 PADDING_01EB, struct FScalableFloat,                                                 Period);                                                   // 0x01C8(0x0020)  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01C0 PADDING_01EB, bool,                                                                  bExecutePeriodicEffectOnApplication);                      // 0x01E8(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01C1 PADDING_01EB, EGameplayEffectPeriodInhibitionRemovedPolicy,                          PeriodicInhibitionPolicy);                                 // 0x01E9(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01C8 PADDING_01EB, TArray<struct FGameplayModifierInfo>,                                  Modifiers);                                                // 0x01F0(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01D8 PADDING_01EB, TArray<struct FGameplayEffectExecutionDefinition>,                     Executions);                                               // 0x0200(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01E8 PADDING_01EB, struct FScalableFloat,                                                 ChanceToApplyToTarget);                                    // 0x0210(0x0020)  (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0208 PADDING_01EB, TArray<class UClass*>,                                                 ApplicationRequirements);                                  // 0x0230(0x0010)  (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0218 PADDING_01EB, TArray<class UClass*>,                                                 TargetEffectClasses);                                      // 0x0240(0x0010)  (ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0228 PADDING_01EB, TArray<struct FConditionalGameplayEffect>,                             ConditionalGameplayEffects);                               // 0x0250(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0238 PADDING_01EB, TArray<class UClass*>,                                                 OverflowEffects);                                          // 0x0260(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0248 PADDING_01EB, bool,                                                                  bDenyOverflowApplication);                                 // 0x0270(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0249 PADDING_01EB, bool,                                                                  bClearStackOnOverflow);                                    // 0x0271(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0250 PADDING_01EB, TArray<class UClass*>,                                                 PrematureExpirationEffectClasses);                         // 0x0278(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0260 PADDING_01EB, TArray<class UClass*>,                                                 RoutineExpirationEffectClasses);                           // 0x0288(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0270 PADDING_01EB, bool,                                                                  bRequireModifierSuccessToTriggerCues);                     // 0x0298(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0271 PADDING_01EB, bool,                                                                  bSuppressStackingCues);                                    // 0x0299(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0278 PADDING_01EB, TArray<struct FGameplayEffectCue>,                                     GameplayCues);                                             // 0x02A0(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0288 PADDING_01EB, class UGameplayEffectUIData*,                                          UIData);                                                   // 0x02B0(0x0008)  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0290 PADDING_01EB, struct FInheritedTagContainer,                                         InheritableGameplayEffectTags);                            // 0x02B8(0x0060)  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02F0 PADDING_01EB, struct FInheritedTagContainer,                                         InheritableOwnedTagsContainer);                            // 0x0318(0x0060)  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0350 PADDING_01EB, struct FGameplayTagRequirements,                                       OngoingTagRequirements);                                   // 0x0378(0x0040)  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0390 PADDING_01EB, struct FGameplayTagRequirements,                                       ApplicationTagRequirements);                               // 0x03B8(0x0040)  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03D0 PADDING_01EB, struct FInheritedTagContainer,                                         RemoveGameplayEffectsWithTags);                            // 0x03F8(0x0060)  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0430 PADDING_01EB, struct FGameplayTagRequirements,                                       GrantedApplicationImmunityTags);                           // 0x0458(0x0040)  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0470 PADDING_01EB, struct FGameplayEffectQuery,                                           GrantedApplicationImmunityQuery);                          // 0x0498(0x0138)  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05A9 PADDING_01EB, EGameplayEffectStackingType,                                           StackingType);                                             // 0x05D1(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05AC PADDING_01EB, int,                                                                   StackLimitCount);                                          // 0x05D4(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05B0 PADDING_01EB, EGameplayEffectStackingDurationPolicy,                                 StackDurationRefreshPolicy);                               // 0x05D8(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05B1 PADDING_01EB, EGameplayEffectStackingPeriodPolicy,                                   StackPeriodResetPolicy);                                   // 0x05D9(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05B2 PADDING_01EB, EGameplayEffectStackingExpirationPolicy,                               StackExpirationPolicy);                                    // 0x05DA(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05B8 PADDING_01EB, TArray<struct FGameplayAbilitySpecDef>,                                GrantedAbilities);                                         // 0x05E0(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffect");
		return ptr;
	}


};

// Class GameplayAbilities.GameplayEffectCalculation
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_01ED - 0x0000 // Minimum to subtract -> (0000)
class UGameplayEffectCalculation : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_01ED, TArray<struct FGameplayEffectAttributeCaptureDefinition>,              RelevantAttributesToCapture);                              // 0x0028(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectCalculation");
		return ptr;
	}


};

// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UGameplayEffectCustomApplicationRequirement : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectCustomApplicationRequirement");
		return ptr;
	}


	bool CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, const struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC);
};

// Class GameplayAbilities.GameplayEffectExecutionCalculation
// 0x0001 (FullSize[0x0039] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_01F4 - 0x0000 // Minimum to subtract -> (0000)
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_01F4, bool,                                                                  bRequiresPassedInTags);                                    // 0x0038(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExecutionCalculation");
		return ptr;
	}


	void Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput);
};

// Class GameplayAbilities.GameplayEffectUIData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UGameplayEffectUIData : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectUIData");
		return ptr;
	}


};

// Class GameplayAbilities.GameplayEffectUIData_TextOnly
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_01F8 - 0x0000 // Minimum to subtract -> (0000)
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_01F8, struct FText,                                                          Description);                                              // 0x0028(0x0018)  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectUIData_TextOnly");
		return ptr;
	}


};

// Class GameplayAbilities.GameplayModMagnitudeCalculation
// 0x0001 (FullSize[0x0039] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_01FA - 0x0000 // Minimum to subtract -> (0000)
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_01FA, bool,                                                                  bAllowNonNetAuthorityDependencyRegistration);              // 0x0038(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayModMagnitudeCalculation");
		return ptr;
	}


	float CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec);
};

// Class GameplayAbilities.GameplayTagReponseTable
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
#define PADDING_01FD - 0x0000 // Minimum to subtract -> (0000)
class UGameplayTagReponseTable : public UDataAsset
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_01FD, TArray<struct FGameplayTagResponseTableEntry>,                         Entries);                                                  // 0x0030(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayTagReponseTable");
		return ptr;
	}


	void TagResponseEvent(const struct FGameplayTag& Tag, int NewCount, class UAbilitySystemComponent* ASC, int Idx);
};

// Class GameplayAbilities.TickableAttributeSetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UTickableAttributeSetInterface : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.TickableAttributeSetInterface");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
