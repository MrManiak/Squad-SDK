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

// Class AIModule.AIController
// 0x008B (FullSize[0x0348] - InheritedSize[0x02BD])
// LastOffsetWithSize(0x02BD)
#define PADDING_09D7 - 0x0000 // Minimum to subtract -> (003B)
class AAIController : public AController
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x003B PADDING_09D7, unsigned char,                                                         bStopAILogicOnUnposses);                                   // 0x02F8(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x003B PADDING_09D7, unsigned char,                                                         bLOSflag);                                                 // 0x02F8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003B PADDING_09D7, unsigned char,                                                         bSkipExtraLOSChecks);                                      // 0x02F8(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003B PADDING_09D7, unsigned char,                                                         bAllowStrafe);                                             // 0x02F8(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003B PADDING_09D7, unsigned char,                                                         bWantsPlayerState);                                        // 0x02F8(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003B PADDING_09D7, unsigned char,                                                         bSetControlRotationFromPawnOrientation);                   // 0x02F8(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0043 PADDING_09D7, class UPathFollowingComponent*,                                        PathFollowingComponent);                                   // 0x0300(0x0008)  (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x004B PADDING_09D7, class UBrainComponent*,                                                BrainComponent);                                           // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0053 PADDING_09D7, class UAIPerceptionComponent*,                                         PerceptionComponent);                                      // 0x0310(0x0008)  (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005B PADDING_09D7, class UPawnActionsComponent*,                                          ActionsComp);                                              // 0x0318(0x0008)  (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0063 PADDING_09D7, class UBlackboardComponent*,                                           Blackboard);                                               // 0x0320(0x0008)  (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x006B PADDING_09D7, class UGameplayTasksComponent*,                                        CachedGameplayTasksComponent);                             // 0x0328(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0073 PADDING_09D7, class UClass*,                                                         DefaultNavigationFilterClass);                             // 0x0330(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x007B PADDING_09D7, struct FScriptMulticastDelegate,                                       ReceiveMoveCompleted);                                     // 0x0338(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIController");
		return ptr;
	}


	bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent);
	void UnclaimTaskResource(class UClass* ResourceClass);
	void SetPathFollowingComponent(class UPathFollowingComponent* NewPFComponent);
	void SetMoveBlockDetection(bool bEnable);
	bool RunBehaviorTree(class UBehaviorTree* BTAsset);
	void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
	void OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased);
	TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	TEnumAsByte<EPathFollowingRequestResult> MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	void K2_SetFocus(class AActor* NewFocus);
	void K2_SetFocalPoint(const struct FVector& FP);
	void K2_ClearFocus();
	bool HasPartialPath();
	class UPathFollowingComponent* GetPathFollowingComponent();
	TEnumAsByte<EPathFollowingStatus> GetMoveStatus();
	struct FVector GetImmediateMoveDestination();
	class AActor* GetFocusActor();
	struct FVector GetFocalPointOnActor(class AActor* Actor);
	struct FVector GetFocalPoint();
	class UAIPerceptionComponent* GetAIPerceptionComponent();
	void ClaimTaskResource(class UClass* ResourceClass);
};

// Class AIModule.BTNode
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_09D8 - 0x0000 // Minimum to subtract -> (0008)
class UBTNode : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_09D8, struct FString,                                                        NodeName);                                                 // 0x0030(0x0010)  (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_09D8, class UBehaviorTree*,                                                  TreeAsset);                                                // 0x0040(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0020 PADDING_09D8, class UBTCompositeNode*,                                               ParentNode);                                               // 0x0048(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTNode");
		return ptr;
	}


};

// Class AIModule.BTAuxiliaryNode
// 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
// LastOffsetWithSize(0x0050)
class UBTAuxiliaryNode : public UBTNode
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTAuxiliaryNode");
		return ptr;
	}


};

// Class AIModule.BTDecorator
// 0x000D (FullSize[0x0065] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0050)
#define PADDING_09DA - 0x0000 // Minimum to subtract -> (0010)
class UBTDecorator : public UBTAuxiliaryNode
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_09DA, unsigned char,                                                         bInverseCondition);                                        // 0x0060(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0014 PADDING_09DA, TEnumAsByte<EBTFlowAbortMode>,                                         FlowAbortMode);                                            // 0x0064(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator");
		return ptr;
	}


};

// Class AIModule.BTTaskNode
// 0x0019 (FullSize[0x0069] - InheritedSize[0x0050])
// LastOffsetWithSize(0x0050)
#define PADDING_09DB - 0x0000 // Minimum to subtract -> (0008)
class UBTTaskNode : public UBTNode
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_09DB, TArray<class UBTService*>,                                             Services);                                                 // 0x0058(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_09DB, unsigned char,                                                         bIgnoreRestartSelf);                                       // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTaskNode");
		return ptr;
	}


};

// Class AIModule.BTTask_BlackboardBase
// 0x002F (FullSize[0x0098] - InheritedSize[0x0069])
// LastOffsetWithSize(0x0069)
#define PADDING_09DC - 0x0000 // Minimum to subtract -> (0007)
class UBTTask_BlackboardBase : public UBTTaskNode
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_09DC, struct FBlackboardKeySelector,                                         BlackboardKey);                                            // 0x0070(0x0028)  (Edit, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_BlackboardBase");
		return ptr;
	}


};

// Class AIModule.AIAsyncTaskBlueprintProxy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_09DD - 0x0000 // Minimum to subtract -> (0000)
class UAIAsyncTaskBlueprintProxy : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09DD, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0028(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_09DD, struct FScriptMulticastDelegate,                                       OnFail);                                                   // 0x0038(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIAsyncTaskBlueprintProxy");
		return ptr;
	}


	void OnMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> MovementResult);
};

// Class AIModule.AIBlueprintHelperLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIBlueprintHelperLibrary");
		return ptr;
	}


	static void STATIC_UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
	static class APawn* STATIC_SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail);
	static void STATIC_SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal);
	static void STATIC_SimpleMoveToActor(class AController* Controller, class AActor* Goal);
	static void STATIC_SendAIMessage(class APawn* Target, const struct FName& Message, class UObject* MessageSource, bool bSuccess);
	static void STATIC_LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
	static bool STATIC_IsValidAIRotation(const struct FRotator& Rotation);
	static bool STATIC_IsValidAILocation(const struct FVector& Location);
	static bool STATIC_IsValidAIDirection(const struct FVector& DirectionVector);
	static class UNavigationPath* STATIC_GetCurrentPath(class AController* Controller);
	static class UBlackboardComponent* STATIC_GetBlackboard(class AActor* Target);
	static class AAIController* STATIC_GetAIController(class AActor* ControlledActor);
	static class UAIAsyncTaskBlueprintProxy* STATIC_CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
};

// Class AIModule.AIDataProvider
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UAIDataProvider : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIDataProvider");
		return ptr;
	}


};

// Class AIModule.AIDataProvider_QueryParams
// 0x0011 (FullSize[0x0039] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_09E0 - 0x0000 // Minimum to subtract -> (0000)
class UAIDataProvider_QueryParams : public UAIDataProvider
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09E0, struct FName,                                                          ParamName);                                                // 0x0028(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_09E0, float,                                                                 FloatValue);                                               // 0x0030(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_09E0, int,                                                                   IntValue);                                                 // 0x0034(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_09E0, bool,                                                                  BoolValue);                                                // 0x0038(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIDataProvider_QueryParams");
		return ptr;
	}


};

// Class AIModule.AIDataProvider_Random
// 0x0010 (FullSize[0x0049] - InheritedSize[0x0039])
// LastOffsetWithSize(0x0039)
#define PADDING_09E1 - 0x0000 // Minimum to subtract -> (0007)
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_09E1, float,                                                                 Min);                                                      // 0x0040(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x000B PADDING_09E1, float,                                                                 Max);                                                      // 0x0044(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x000F PADDING_09E1, unsigned char,                                                         bInteger);                                                 // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIDataProvider_Random");
		return ptr;
	}


};

// Class AIModule.AIHotSpotManager
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UAIHotSpotManager : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIHotSpotManager");
		return ptr;
	}


};

// Class AIModule.AIPerceptionComponent
// 0x00E0 (FullSize[0x01A8] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_09E3 - 0x0000 // Minimum to subtract -> (0010)
class UAIPerceptionComponent : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_09E3, TArray<class UAISenseConfig*>,                                         SensesConfig);                                             // 0x00D8(0x0010)  (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0020 PADDING_09E3, class UClass*,                                                         DominantSense);                                            // 0x00E8(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0038 PADDING_09E3, class AAIController*,                                                  AIOwner);                                                  // 0x0100(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_09E3, struct FScriptMulticastDelegate,                                       OnPerceptionUpdated);                                      // 0x0188(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_09E3, struct FScriptMulticastDelegate,                                       OnTargetPerceptionUpdated);                                // 0x0198(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionComponent");
		return ptr;
	}


	void SetSenseEnabled(class UClass* SenseClass, bool bEnable);
	void RequestStimuliListenerUpdate();
	void OnOwnerEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void GetPerceivedHostileActors(TArray<class AActor*>* OutActors);
	void GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	void GetKnownPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	void GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	bool GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info);
};

// Class AIModule.AIPerceptionListenerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UAIPerceptionListenerInterface : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionListenerInterface");
		return ptr;
	}


};

// Class AIModule.AIPerceptionStimuliSourceComponent
// 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_09E5 - 0x0000 // Minimum to subtract -> (0010)
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_09E5, unsigned char,                                                         bAutoRegisterAsSource);                                    // 0x00D8(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0018 PADDING_09E5, TArray<class UClass*>,                                                 RegisterAsSourceForSenses);                                // 0x00E0(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionStimuliSourceComponent");
		return ptr;
	}


	void UnregisterFromSense(class UClass* SenseClass);
	void UnregisterFromPerceptionSystem();
	void RegisterWithPerceptionSystem();
	void RegisterForSense(class UClass* SenseClass);
};

// Class AIModule.AISubsystem
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_09E6 - 0x0000 // Minimum to subtract -> (0008)
class UAISubsystem : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_09E6, class UAISystem*,                                                      AISystem);                                                 // 0x0030(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISubsystem");
		return ptr;
	}


};

// Class AIModule.AIPerceptionSystem
// 0x0064 (FullSize[0x009C] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_09E7 - 0x0000 // Minimum to subtract -> (0050)
class UAIPerceptionSystem : public UAISubsystem
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_09E7, TArray<class UAISense*>,                                               Senses);                                                   // 0x0088(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0060 PADDING_09E7, float,                                                                 PerceptionAgingRate);                                      // 0x0098(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionSystem");
		return ptr;
	}


	static void STATIC_ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent);
	void ReportEvent(class UAISenseEvent* PerceptionEvent);
	static bool STATIC_RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UClass* Sense, class AActor* Target);
	void OnPerceptionStimuliSourceEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	static class UClass* STATIC_GetSenseClassForStimulus(class UObject* WorldContextObject, const struct FAIStimulus& Stimulus);
};

// Class AIModule.AIResourceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UAIResourceInterface : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIResourceInterface");
		return ptr;
	}


};

// Class AIModule.AIResource_Movement
// 0x0007 (FullSize[0x0038] - InheritedSize[0x0031])
// LastOffsetWithSize(0x0031)
class UAIResource_Movement : public UGameplayTaskResource
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIResource_Movement");
		return ptr;
	}


};

// Class AIModule.AIResource_Logic
// 0x0007 (FullSize[0x0038] - InheritedSize[0x0031])
// LastOffsetWithSize(0x0031)
class UAIResource_Logic : public UGameplayTaskResource
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIResource_Logic");
		return ptr;
	}


};

// Class AIModule.AISense
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_09EB - 0x0000 // Minimum to subtract -> (0000)
class UAISense : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09EB, float,                                                                 DefaultExpirationAge);                                     // 0x0028(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0004 PADDING_09EB, EAISenseNotifyType,                                                    NotifyType);                                               // 0x002C(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0008 PADDING_09EB, unsigned char,                                                         bWantsNewPawnNotification);                                // 0x0030(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0008 PADDING_09EB, unsigned char,                                                         bAutoRegisterAllPawnsAsSources);                           // 0x0030(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0010 PADDING_09EB, class UAIPerceptionSystem*,                                            PerceptionSystemInstance);                                 // 0x0038(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense");
		return ptr;
	}


};

// Class AIModule.AISense_Blueprint
// 0x0068 (FullSize[0x00A8] - InheritedSize[0x0040])
// LastOffsetWithSize(0x0040)
#define PADDING_09EC - 0x0000 // Minimum to subtract -> (0040)
class UAISense_Blueprint : public UAISense
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0040 PADDING_09EC, class UClass*,                                                         ListenerDataType);                                         // 0x0080(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0048 PADDING_09EC, TArray<class UAIPerceptionComponent*>,                                 ListenerContainer);                                        // 0x0088(0x0010)  (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0058 PADDING_09EC, TArray<class UAISenseEvent*>,                                          UnprocessedEvents);                                        // 0x0098(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Blueprint");
		return ptr;
	}


	float OnUpdate(TArray<class UAISenseEvent*> EventsToProcess);
	void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void K2_OnNewPawn(class APawn* NewPawn);
	void GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents);
	void GetAllListenerActors(TArray<class AActor*>* ListenerActors);
};

// Class AIModule.AISense_Damage
// 0x0050 (FullSize[0x0090] - InheritedSize[0x0040])
// LastOffsetWithSize(0x0040)
#define PADDING_09ED - 0x0000 // Minimum to subtract -> (0040)
class UAISense_Damage : public UAISense
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0040 PADDING_09ED, TArray<struct FAIDamageEvent>,                                         RegisteredEvents);                                         // 0x0080(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Damage");
		return ptr;
	}


	static void STATIC_ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation);
};

// Class AIModule.AISense_Hearing
// 0x0054 (FullSize[0x0094] - InheritedSize[0x0040])
// LastOffsetWithSize(0x0040)
#define PADDING_09EE - 0x0000 // Minimum to subtract -> (0040)
class UAISense_Hearing : public UAISense
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0040 PADDING_09EE, TArray<struct FAINoiseEvent>,                                          NoiseEvents);                                              // 0x0080(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0050 PADDING_09EE, float,                                                                 SpeedOfSoundSq);                                           // 0x0090(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Hearing");
		return ptr;
	}


	static void STATIC_ReportNoiseEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, const struct FName& Tag);
};

// Class AIModule.AISense_Prediction
// 0x0050 (FullSize[0x0090] - InheritedSize[0x0040])
// LastOffsetWithSize(0x0040)
#define PADDING_09EF - 0x0000 // Minimum to subtract -> (0040)
class UAISense_Prediction : public UAISense
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0040 PADDING_09EF, TArray<struct FAIPredictionEvent>,                                     RegisteredEvents);                                         // 0x0080(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Prediction");
		return ptr;
	}


	static void STATIC_RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);
	static void STATIC_RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime);
};

// Class AIModule.AISense_Sight
// 0x0110 (FullSize[0x0150] - InheritedSize[0x0040])
// LastOffsetWithSize(0x0040)
#define PADDING_09F0 - 0x0000 // Minimum to subtract -> (00F0)
class UAISense_Sight : public UAISense
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x00F0 PADDING_09F0, int,                                                                   MaxTracesPerTick);                                         // 0x0130(0x0004)  (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F4 PADDING_09F0, int,                                                                   MinQueriesPerTimeSliceCheck);                              // 0x0134(0x0004)  (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_09F0, double,                                                                MaxTimeSlicePerTick);                                      // 0x0138(0x0008)  (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0100 PADDING_09F0, float,                                                                 HighImportanceQueryDistanceThreshold);                     // 0x0140(0x0004)  (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0108 PADDING_09F0, float,                                                                 MaxQueryImportance);                                       // 0x0148(0x0004)  (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x010C PADDING_09F0, float,                                                                 SightLimitQueryImportance);                                // 0x014C(0x0004)  (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Sight");
		return ptr;
	}


};

// Class AIModule.AISense_Team
// 0x0050 (FullSize[0x0090] - InheritedSize[0x0040])
// LastOffsetWithSize(0x0040)
#define PADDING_09F1 - 0x0000 // Minimum to subtract -> (0040)
class UAISense_Team : public UAISense
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0040 PADDING_09F1, TArray<struct FAITeamStimulusEvent>,                                   RegisteredEvents);                                         // 0x0080(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Team");
		return ptr;
	}


};

// Class AIModule.AISense_Touch
// 0x0050 (FullSize[0x0090] - InheritedSize[0x0040])
// LastOffsetWithSize(0x0040)
#define PADDING_09F2 - 0x0000 // Minimum to subtract -> (0040)
class UAISense_Touch : public UAISense
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0040 PADDING_09F2, TArray<struct FAITouchEvent>,                                          RegisteredEvents);                                         // 0x0080(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Touch");
		return ptr;
	}


};

// Class AIModule.AISenseBlueprintListener
// 0x0034 (FullSize[0x00F0] - InheritedSize[0x00BC])
// LastOffsetWithSize(0x00BC)
class UAISenseBlueprintListener : public UUserDefinedStruct
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseBlueprintListener");
		return ptr;
	}


};

// Class AIModule.AISenseConfig
// 0x0009 (FullSize[0x0031] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_09F4 - 0x0000 // Minimum to subtract -> (0000)
class UAISenseConfig : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09F4, struct FColor,                                                         DebugColor);                                               // 0x0028(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0004 PADDING_09F4, float,                                                                 MaxAge);                                                   // 0x002C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0008 PADDING_09F4, unsigned char,                                                         bStartsEnabled);                                           // 0x0030(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig");
		return ptr;
	}


};

// Class AIModule.AISenseConfig_Blueprint
// 0x001F (FullSize[0x0050] - InheritedSize[0x0031])
// LastOffsetWithSize(0x0031)
#define PADDING_09F5 - 0x0000 // Minimum to subtract -> (0017)
class UAISenseConfig_Blueprint : public UAISenseConfig
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0017 PADDING_09F5, class UClass*,                                                         Implementation);                                           // 0x0048(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Blueprint");
		return ptr;
	}


};

// Class AIModule.AISenseConfig_Damage
// 0x001F (FullSize[0x0050] - InheritedSize[0x0031])
// LastOffsetWithSize(0x0031)
#define PADDING_09F6 - 0x0000 // Minimum to subtract -> (0017)
class UAISenseConfig_Damage : public UAISenseConfig
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0017 PADDING_09F6, class UClass*,                                                         Implementation);                                           // 0x0048(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Damage");
		return ptr;
	}


};

// Class AIModule.AISenseConfig_Hearing
// 0x002F (FullSize[0x0060] - InheritedSize[0x0031])
// LastOffsetWithSize(0x0031)
#define PADDING_09F7 - 0x0000 // Minimum to subtract -> (0017)
class UAISenseConfig_Hearing : public UAISenseConfig
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0017 PADDING_09F7, class UClass*,                                                         Implementation);                                           // 0x0048(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001F PADDING_09F7, float,                                                                 HearingRange);                                             // 0x0050(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0023 PADDING_09F7, float,                                                                 LoSHearingRange);                                          // 0x0054(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0027 PADDING_09F7, unsigned char,                                                         bUseLoSHearing);                                           // 0x0058(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002B PADDING_09F7, struct FAISenseAffiliationFilter,                                      DetectionByAffiliation);                                   // 0x005C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Hearing");
		return ptr;
	}


};

// Class AIModule.AISenseConfig_Prediction
// 0x0017 (FullSize[0x0048] - InheritedSize[0x0031])
// LastOffsetWithSize(0x0031)
class UAISenseConfig_Prediction : public UAISenseConfig
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Prediction");
		return ptr;
	}


};

// Class AIModule.AISenseConfig_Sight
// 0x0033 (FullSize[0x0064] - InheritedSize[0x0031])
// LastOffsetWithSize(0x0031)
#define PADDING_09F9 - 0x0000 // Minimum to subtract -> (0017)
class UAISenseConfig_Sight : public UAISenseConfig
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0017 PADDING_09F9, class UClass*,                                                         Implementation);                                           // 0x0048(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001F PADDING_09F9, float,                                                                 SightRadius);                                              // 0x0050(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0023 PADDING_09F9, float,                                                                 LoseSightRadius);                                          // 0x0054(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0027 PADDING_09F9, float,                                                                 PeripheralVisionAngleDegrees);                             // 0x0058(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002B PADDING_09F9, struct FAISenseAffiliationFilter,                                      DetectionByAffiliation);                                   // 0x005C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002F PADDING_09F9, float,                                                                 AutoSuccessRangeFromLastSeenLocation);                     // 0x0060(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Sight");
		return ptr;
	}


};

// Class AIModule.AISenseConfig_Team
// 0x0017 (FullSize[0x0048] - InheritedSize[0x0031])
// LastOffsetWithSize(0x0031)
class UAISenseConfig_Team : public UAISenseConfig
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Team");
		return ptr;
	}


};

// Class AIModule.AISenseConfig_Touch
// 0x0017 (FullSize[0x0048] - InheritedSize[0x0031])
// LastOffsetWithSize(0x0031)
class UAISenseConfig_Touch : public UAISenseConfig
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Touch");
		return ptr;
	}


};

// Class AIModule.AISenseEvent
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UAISenseEvent : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseEvent");
		return ptr;
	}


};

// Class AIModule.AISenseEvent_Damage
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_09FD - 0x0000 // Minimum to subtract -> (0000)
class UAISenseEvent_Damage : public UAISenseEvent
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09FD, struct FAIDamageEvent,                                                 Event);                                                    // 0x0028(0x0030)  (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseEvent_Damage");
		return ptr;
	}


};

// Class AIModule.AISenseEvent_Hearing
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_09FE - 0x0000 // Minimum to subtract -> (0000)
class UAISenseEvent_Hearing : public UAISenseEvent
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09FE, struct FAINoiseEvent,                                                  Event);                                                    // 0x0028(0x0030)  (Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseEvent_Hearing");
		return ptr;
	}


};

// Class AIModule.AISightTargetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UAISightTargetInterface : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISightTargetInterface");
		return ptr;
	}


};

// Class AIModule.AISystem
// 0x0087 (FullSize[0x00D8] - InheritedSize[0x0051])
// LastOffsetWithSize(0x0051)
#define PADDING_0A00 - 0x0000 // Minimum to subtract -> (0007)
class UAISystem : public UAISystemBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A00, struct FSoftClassPath,                                                 PerceptionSystemClassName);                                // 0x0058(0x0018)  (Edit, ZeroConstructor, Config, GlobalConfig, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x001F PADDING_0A00, struct FSoftClassPath,                                                 HotSpotManagerClassName);                                  // 0x0070(0x0018)  (Edit, ZeroConstructor, Config, GlobalConfig, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0037 PADDING_0A00, float,                                                                 AcceptanceRadius);                                         // 0x0088(0x0004)  (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003B PADDING_0A00, float,                                                                 PathfollowingRegularPathPointAcceptanceRadius);            // 0x008C(0x0004)  (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003F PADDING_0A00, float,                                                                 PathfollowingNavLinkAcceptanceRadius);                     // 0x0090(0x0004)  (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0043 PADDING_0A00, bool,                                                                  bFinishMoveOnGoalOverlap);                                 // 0x0094(0x0001)  (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0044 PADDING_0A00, bool,                                                                  bAcceptPartialPaths);                                      // 0x0095(0x0001)  (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0045 PADDING_0A00, bool,                                                                  bAllowStrafing);                                           // 0x0096(0x0001)  (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0046 PADDING_0A00, bool,                                                                  bEnableBTAITasks);                                         // 0x0097(0x0001)  (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0047 PADDING_0A00, bool,                                                                  bAllowControllersAsEQSQuerier);                            // 0x0098(0x0001)  (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0A00, bool,                                                                  bEnableDebuggerPlugin);                                    // 0x0099(0x0001)  (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0049 PADDING_0A00, TEnumAsByte<ECollisionChannel>,                                        DefaultSightCollisionChannel);                             // 0x009A(0x0001)  (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x004F PADDING_0A00, class UBehaviorTreeManager*,                                           BehaviorTreeManager);                                      // 0x00A0(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0057 PADDING_0A00, class UEnvQueryManager*,                                               EnvironmentQueryManager);                                  // 0x00A8(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x005F PADDING_0A00, class UAIPerceptionSystem*,                                            PerceptionSystem);                                         // 0x00B0(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0067 PADDING_0A00, TArray<class UAIAsyncTaskBlueprintProxy*>,                             AllProxyObjects);                                          // 0x00B8(0x0010)  (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0077 PADDING_0A00, class UAIHotSpotManager*,                                              HotSpotManager);                                           // 0x00C8(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x007F PADDING_0A00, class UNavLocalGridManager*,                                           NavLocalGrids);                                            // 0x00D0(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISystem");
		return ptr;
	}


	void AILoggingVerbose();
	void AIIgnorePlayers();
};

// Class AIModule.AITask
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0068)
#define PADDING_0A01 - 0x0000 // Minimum to subtract -> (0000)
class UAITask : public UGameplayTask
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A01, class AAIController*,                                                  OwnerController);                                          // 0x0068(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AITask");
		return ptr;
	}


};

// Class AIModule.AITask_LockLogic
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
// LastOffsetWithSize(0x0070)
class UAITask_LockLogic : public UAITask
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AITask_LockLogic");
		return ptr;
	}


};

// Class AIModule.AITask_MoveTo
// 0x0060 (FullSize[0x00D0] - InheritedSize[0x0070])
// LastOffsetWithSize(0x0070)
#define PADDING_0A03 - 0x0000 // Minimum to subtract -> (0000)
class UAITask_MoveTo : public UAITask
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A03, struct FScriptMulticastDelegate,                                       OnRequestFailed);                                          // 0x0070(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A03, struct FScriptMulticastDelegate,                                       OnMoveFinished);                                           // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0A03, struct FAIMoveRequest,                                                 MoveRequest);                                              // 0x0090(0x0040)  (Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AITask_MoveTo");
		return ptr;
	}


	static class UAITask_MoveTo* STATIC_AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag> StopOnOverlap, TEnumAsByte<EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<EAIOptionFlag> ProjectGoalOnNavigation);
};

// Class AIModule.AITask_RunEQS
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
// LastOffsetWithSize(0x0070)
class UAITask_RunEQS : public UAITask
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AITask_RunEQS");
		return ptr;
	}


	static class UAITask_RunEQS* STATIC_RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate);
};

// Class AIModule.BehaviorTree
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A05 - 0x0000 // Minimum to subtract -> (0000)
class UBehaviorTree : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A05, class UBTCompositeNode*,                                               RootNode);                                                 // 0x0028(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0A05, class UBlackboardData*,                                                BlackboardAsset);                                          // 0x0030(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A05, TArray<class UBTDecorator*>,                                           RootDecorators);                                           // 0x0038(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0A05, TArray<struct FBTDecoratorLogic>,                                      RootDecoratorOps);                                         // 0x0048(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTree");
		return ptr;
	}


};

// Class AIModule.BrainComponent
// 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_0A06 - 0x0000 // Minimum to subtract -> (0018)
class UBrainComponent : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0018 PADDING_0A06, class UBlackboardComponent*,                                           BlackboardComp);                                           // 0x00E0(0x0008)  (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0A06, class AAIController*,                                                  AIOwner);                                                  // 0x00E8(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BrainComponent");
		return ptr;
	}


	void StopLogic(const struct FString& Reason);
	void RestartLogic();
	bool IsRunning();
	bool IsPaused();
};

// Class AIModule.BehaviorTreeComponent
// 0x0078 (FullSize[0x0168] - InheritedSize[0x00F0])
// LastOffsetWithSize(0x00F0)
#define PADDING_0A07 - 0x0000 // Minimum to subtract -> (0068)
class UBehaviorTreeComponent : public UBrainComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0068 PADDING_0A07, TArray<class UBTNode*>,                                                NodeInstances);                                            // 0x0158(0x0010)  (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTreeComponent");
		return ptr;
	}


	void SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset);
	float GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag);
	void AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
};

// Class AIModule.BehaviorTreeManager
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A08 - 0x0000 // Minimum to subtract -> (0000)
class UBehaviorTreeManager : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A08, int,                                                                   MaxDebuggerSteps);                                         // 0x0028(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0A08, TArray<struct FBehaviorTreeTemplateInfo>,                              LoadedTemplates);                                          // 0x0030(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0A08, TArray<class UBehaviorTreeComponent*>,                                 ActiveComponents);                                         // 0x0040(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTreeManager");
		return ptr;
	}


};

// Class AIModule.BehaviorTreeTypes
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UBehaviorTreeTypes : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTreeTypes");
		return ptr;
	}


};

// Class AIModule.BlackboardComponent
// 0x0050 (FullSize[0x0118] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_0A0A - 0x0000 // Minimum to subtract -> (0010)
class UBlackboardComponent : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A0A, class UBrainComponent*,                                                BrainComp);                                                // 0x00D8(0x0008)  (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0A0A, class UBlackboardData*,                                                BlackboardAsset);                                          // 0x00E0(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0A0A, TArray<class UBlackboardKeyType*>,                                     KeyInstances);                                             // 0x0108(0x0010)  (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardComponent");
		return ptr;
	}


	void SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue);
	void SetValueAsString(const struct FName& KeyName, const struct FString& StringValue);
	void SetValueAsRotator(const struct FName& KeyName, const struct FRotator& VectorValue);
	void SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue);
	void SetValueAsName(const struct FName& KeyName, const struct FName& NameValue);
	void SetValueAsInt(const struct FName& KeyName, int IntValue);
	void SetValueAsFloat(const struct FName& KeyName, float FloatValue);
	void SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue);
	void SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue);
	void SetValueAsBool(const struct FName& KeyName, bool BoolValue);
	bool IsVectorValueSet(const struct FName& KeyName);
	struct FVector GetValueAsVector(const struct FName& KeyName);
	struct FString GetValueAsString(const struct FName& KeyName);
	struct FRotator GetValueAsRotator(const struct FName& KeyName);
	class UObject* GetValueAsObject(const struct FName& KeyName);
	struct FName GetValueAsName(const struct FName& KeyName);
	int GetValueAsInt(const struct FName& KeyName);
	float GetValueAsFloat(const struct FName& KeyName);
	unsigned char GetValueAsEnum(const struct FName& KeyName);
	class UClass* GetValueAsClass(const struct FName& KeyName);
	bool GetValueAsBool(const struct FName& KeyName);
	bool GetRotationFromEntry(const struct FName& KeyName, struct FRotator* ResultRotation);
	bool GetLocationFromEntry(const struct FName& KeyName, struct FVector* ResultLocation);
	void ClearValue(const struct FName& KeyName);
};

// Class AIModule.BlackboardData
// 0x0019 (FullSize[0x0049] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
#define PADDING_0A0B - 0x0000 // Minimum to subtract -> (0000)
class UBlackboardData : public UDataAsset
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A0B, class UBlackboardData*,                                                Parent);                                                   // 0x0030(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0A0B, TArray<struct FBlackboardEntry>,                                       Keys);                                                     // 0x0038(0x0010)  (Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0A0B, unsigned char,                                                         bHasSynchronizedKeys);                                     // 0x0048(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardData");
		return ptr;
	}


};

// Class AIModule.BlackboardKeyType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UBlackboardKeyType : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType");
		return ptr;
	}


};

// Class AIModule.BlackboardKeyType_Bool
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Bool");
		return ptr;
	}


};

// Class AIModule.BlackboardKeyType_Class
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A0E - 0x0000 // Minimum to subtract -> (0008)
class UBlackboardKeyType_Class : public UBlackboardKeyType
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0A0E, class UClass*,                                                         BaseClass);                                                // 0x0030(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Class");
		return ptr;
	}


};

// Class AIModule.BlackboardKeyType_Enum
// 0x0021 (FullSize[0x0049] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A0F - 0x0000 // Minimum to subtract -> (0008)
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0A0F, class UEnum*,                                                          EnumType);                                                 // 0x0030(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A0F, struct FString,                                                        EnumName);                                                 // 0x0038(0x0010)  (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0A0F, unsigned char,                                                         bIsEnumNameValid);                                         // 0x0048(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Enum");
		return ptr;
	}


};

// Class AIModule.BlackboardKeyType_Float
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UBlackboardKeyType_Float : public UBlackboardKeyType
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Float");
		return ptr;
	}


};

// Class AIModule.BlackboardKeyType_Int
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UBlackboardKeyType_Int : public UBlackboardKeyType
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Int");
		return ptr;
	}


};

// Class AIModule.BlackboardKeyType_Name
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UBlackboardKeyType_Name : public UBlackboardKeyType
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Name");
		return ptr;
	}


};

// Class AIModule.BlackboardKeyType_NativeEnum
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A13 - 0x0000 // Minimum to subtract -> (0008)
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0A13, struct FString,                                                        EnumName);                                                 // 0x0030(0x0010)  (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0A13, class UEnum*,                                                          EnumType);                                                 // 0x0040(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_NativeEnum");
		return ptr;
	}


};

// Class AIModule.BlackboardKeyType_Object
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A14 - 0x0000 // Minimum to subtract -> (0008)
class UBlackboardKeyType_Object : public UBlackboardKeyType
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0A14, class UClass*,                                                         BaseClass);                                                // 0x0030(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Object");
		return ptr;
	}


};

// Class AIModule.BlackboardKeyType_Rotator
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Rotator");
		return ptr;
	}


};

// Class AIModule.BlackboardKeyType_String
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A16 - 0x0000 // Minimum to subtract -> (0008)
class UBlackboardKeyType_String : public UBlackboardKeyType
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0A16, struct FString,                                                        StringValue);                                              // 0x0030(0x0010)  (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_String");
		return ptr;
	}


};

// Class AIModule.BlackboardKeyType_Vector
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Vector");
		return ptr;
	}


};

// Class AIModule.BTCompositeNode
// 0x0039 (FullSize[0x0089] - InheritedSize[0x0050])
// LastOffsetWithSize(0x0050)
#define PADDING_0A18 - 0x0000 // Minimum to subtract -> (0008)
class UBTCompositeNode : public UBTNode
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0A18, TArray<struct FBTCompositeChild>,                                      Children);                                                 // 0x0058(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0A18, TArray<class UBTService*>,                                             Services);                                                 // 0x0068(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0A18, unsigned char,                                                         bApplyDecoratorScope);                                     // 0x0088(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTCompositeNode");
		return ptr;
	}


};

// Class AIModule.BTComposite_Selector
// 0x0007 (FullSize[0x0090] - InheritedSize[0x0089])
// LastOffsetWithSize(0x0089)
class UBTComposite_Selector : public UBTCompositeNode
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTComposite_Selector");
		return ptr;
	}


};

// Class AIModule.BTComposite_Sequence
// 0x0007 (FullSize[0x0090] - InheritedSize[0x0089])
// LastOffsetWithSize(0x0089)
class UBTComposite_Sequence : public UBTCompositeNode
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTComposite_Sequence");
		return ptr;
	}


};

// Class AIModule.BTComposite_SimpleParallel
// 0x0008 (FullSize[0x0091] - InheritedSize[0x0089])
// LastOffsetWithSize(0x0089)
#define PADDING_0A1B - 0x0000 // Minimum to subtract -> (0007)
class UBTComposite_SimpleParallel : public UBTCompositeNode
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A1B, TEnumAsByte<EBTParallelMode>,                                          FinishMode);                                               // 0x0090(0x0001)  (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTComposite_SimpleParallel");
		return ptr;
	}


};

// Class AIModule.BTDecorator_BlackboardBase
// 0x002B (FullSize[0x0090] - InheritedSize[0x0065])
// LastOffsetWithSize(0x0065)
#define PADDING_0A1C - 0x0000 // Minimum to subtract -> (0003)
class UBTDecorator_BlackboardBase : public UBTDecorator
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0003 PADDING_0A1C, struct FBlackboardKeySelector,                                         BlackboardKey);                                            // 0x0068(0x0028)  (Edit, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_BlackboardBase");
		return ptr;
	}


};

// Class AIModule.BTDecorator_Blackboard
// 0x002A (FullSize[0x00BA] - InheritedSize[0x0090])
// LastOffsetWithSize(0x0090)
#define PADDING_0A1D - 0x0000 // Minimum to subtract -> (0000)
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A1D, int,                                                                   IntValue);                                                 // 0x0090(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0004 PADDING_0A1D, float,                                                                 FloatValue);                                               // 0x0094(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0A1D, struct FString,                                                        StringValue);                                              // 0x0098(0x0010)  (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0A1D, struct FString,                                                        CachedDescription);                                        // 0x00A8(0x0010)  (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0A1D, unsigned char,                                                         OperationType);                                            // 0x00B8(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0029 PADDING_0A1D, TEnumAsByte<EBTBlackboardRestart>,                                     NotifyObserver);                                           // 0x00B9(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_Blackboard");
		return ptr;
	}


};

// Class AIModule.BTDecorator_BlueprintBase
// 0x0034 (FullSize[0x0099] - InheritedSize[0x0065])
// LastOffsetWithSize(0x0065)
#define PADDING_0A1E - 0x0000 // Minimum to subtract -> (0003)
class UBTDecorator_BlueprintBase : public UBTDecorator
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0003 PADDING_0A1E, class AAIController*,                                                  AIOwner);                                                  // 0x0068(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x000B PADDING_0A1E, class AActor*,                                                         ActorOwner);                                               // 0x0070(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0013 PADDING_0A1E, TArray<struct FName>,                                                  ObservedKeyNames);                                         // 0x0078(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0033 PADDING_0A1E, unsigned char,                                                         bShowPropertyDetails);                                     // 0x0098(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0033 PADDING_0A1E, unsigned char,                                                         bCheckConditionOnlyBlackBoardChanges);                     // 0x0098(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0033 PADDING_0A1E, unsigned char,                                                         bIsObservingBB);                                           // 0x0098(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_BlueprintBase");
		return ptr;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverDeactivated(class AActor* OwnerActor);
	void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverActivated(class AActor* OwnerActor);
	void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecutionStart(class AActor* OwnerActor);
	void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult);
	void ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult);
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	bool PerformConditionCheck(class AActor* OwnerActor);
	bool IsDecoratorObserverActive();
	bool IsDecoratorExecutionActive();
};

// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// 0x0063 (FullSize[0x00C8] - InheritedSize[0x0065])
// LastOffsetWithSize(0x0065)
#define PADDING_0A1F - 0x0000 // Minimum to subtract -> (0003)
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0003 PADDING_0A1F, struct FBlackboardKeySelector,                                         ActorToCheck);                                             // 0x0068(0x0028)  (Edit, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x002B PADDING_0A1F, EGameplayContainerMatchType,                                           TagsToMatch);                                              // 0x0090(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0033 PADDING_0A1F, struct FGameplayTagContainer,                                          GameplayTags);                                             // 0x0098(0x0020)  (Edit, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0053 PADDING_0A1F, struct FString,                                                        CachedDescription);                                        // 0x00B8(0x0010)  (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_CheckGameplayTagsOnActor");
		return ptr;
	}


};

// Class AIModule.BTDecorator_CompareBBEntries
// 0x005B (FullSize[0x00C0] - InheritedSize[0x0065])
// LastOffsetWithSize(0x0065)
#define PADDING_0A20 - 0x0000 // Minimum to subtract -> (0003)
class UBTDecorator_CompareBBEntries : public UBTDecorator
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0003 PADDING_0A20, TEnumAsByte<EBlackBoardEntryComparison>,                               Operator);                                                 // 0x0068(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x000B PADDING_0A20, struct FBlackboardKeySelector,                                         BlackboardKeyA);                                           // 0x0070(0x0028)  (Edit, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0033 PADDING_0A20, struct FBlackboardKeySelector,                                         BlackboardKeyB);                                           // 0x0098(0x0028)  (Edit, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_CompareBBEntries");
		return ptr;
	}


};

// Class AIModule.BTDecorator_ConditionalLoop
// 0x0006 (FullSize[0x00C0] - InheritedSize[0x00BA])
// LastOffsetWithSize(0x00BA)
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ConditionalLoop");
		return ptr;
	}


};

// Class AIModule.BTDecorator_ConeCheck
// 0x0083 (FullSize[0x00E8] - InheritedSize[0x0065])
// LastOffsetWithSize(0x0065)
#define PADDING_0A22 - 0x0000 // Minimum to subtract -> (0003)
class UBTDecorator_ConeCheck : public UBTDecorator
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0003 PADDING_0A22, float,                                                                 ConeHalfAngle);                                            // 0x0068(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000B PADDING_0A22, struct FBlackboardKeySelector,                                         ConeOrigin);                                               // 0x0070(0x0028)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0033 PADDING_0A22, struct FBlackboardKeySelector,                                         ConeDirection);                                            // 0x0098(0x0028)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005B PADDING_0A22, struct FBlackboardKeySelector,                                         Observed);                                                 // 0x00C0(0x0028)  (Edit, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ConeCheck");
		return ptr;
	}


};

// Class AIModule.BTDecorator_Cooldown
// 0x0007 (FullSize[0x006C] - InheritedSize[0x0065])
// LastOffsetWithSize(0x0065)
#define PADDING_0A23 - 0x0000 // Minimum to subtract -> (0003)
class UBTDecorator_Cooldown : public UBTDecorator
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0003 PADDING_0A23, float,                                                                 CoolDownTime);                                             // 0x0068(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_Cooldown");
		return ptr;
	}


};

// Class AIModule.BTDecorator_DoesPathExist
// 0x0063 (FullSize[0x00C8] - InheritedSize[0x0065])
// LastOffsetWithSize(0x0065)
#define PADDING_0A24 - 0x0000 // Minimum to subtract -> (0003)
class UBTDecorator_DoesPathExist : public UBTDecorator
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0003 PADDING_0A24, struct FBlackboardKeySelector,                                         BlackboardKeyA);                                           // 0x0068(0x0028)  (Edit, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x002B PADDING_0A24, struct FBlackboardKeySelector,                                         BlackboardKeyB);                                           // 0x0090(0x0028)  (Edit, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0053 PADDING_0A24, unsigned char,                                                         bUseSelf);                                                 // 0x00B8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0057 PADDING_0A24, TEnumAsByte<EPathExistanceQueryType>,                                  PathQueryType);                                            // 0x00BC(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005B PADDING_0A24, class UClass*,                                                         FilterClass);                                              // 0x00C0(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_DoesPathExist");
		return ptr;
	}


};

// Class AIModule.BTDecorator_ForceSuccess
// 0x0003 (FullSize[0x0068] - InheritedSize[0x0065])
// LastOffsetWithSize(0x0065)
class UBTDecorator_ForceSuccess : public UBTDecorator
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ForceSuccess");
		return ptr;
	}


};

// Class AIModule.BTDecorator_IsAtLocation
// 0x003D (FullSize[0x00CD] - InheritedSize[0x0090])
// LastOffsetWithSize(0x0090)
#define PADDING_0A26 - 0x0000 // Minimum to subtract -> (0000)
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A26, float,                                                                 AcceptableRadius);                                         // 0x0090(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0A26, struct FAIDataProviderFloatValue,                                      ParametrizedAcceptableRadius);                             // 0x0098(0x0030)  (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0A26, EFAIDistanceType,                                                      GeometricDistanceType);                                    // 0x00C8(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003C PADDING_0A26, unsigned char,                                                         bUseParametrizedRadius);                                   // 0x00CC(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003C PADDING_0A26, unsigned char,                                                         bUseNavAgentGoalLocation);                                 // 0x00CC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003C PADDING_0A26, unsigned char,                                                         bPathFindingBasedTest);                                    // 0x00CC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_IsAtLocation");
		return ptr;
	}


};

// Class AIModule.BTDecorator_IsBBEntryOfClass
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
// LastOffsetWithSize(0x0090)
#define PADDING_0A27 - 0x0000 // Minimum to subtract -> (0000)
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A27, class UClass*,                                                         TestClass);                                                // 0x0090(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_IsBBEntryOfClass");
		return ptr;
	}


};

// Class AIModule.BTDecorator_KeepInCone
// 0x005C (FullSize[0x00C1] - InheritedSize[0x0065])
// LastOffsetWithSize(0x0065)
#define PADDING_0A28 - 0x0000 // Minimum to subtract -> (0003)
class UBTDecorator_KeepInCone : public UBTDecorator
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0003 PADDING_0A28, float,                                                                 ConeHalfAngle);                                            // 0x0068(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000B PADDING_0A28, struct FBlackboardKeySelector,                                         ConeOrigin);                                               // 0x0070(0x0028)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0033 PADDING_0A28, struct FBlackboardKeySelector,                                         Observed);                                                 // 0x0098(0x0028)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005B PADDING_0A28, unsigned char,                                                         bUseSelfAsOrigin);                                         // 0x00C0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005B PADDING_0A28, unsigned char,                                                         bUseSelfAsObserved);                                       // 0x00C0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_KeepInCone");
		return ptr;
	}


};

// Class AIModule.BTDecorator_Loop
// 0x000F (FullSize[0x0074] - InheritedSize[0x0065])
// LastOffsetWithSize(0x0065)
#define PADDING_0A29 - 0x0000 // Minimum to subtract -> (0003)
class UBTDecorator_Loop : public UBTDecorator
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0003 PADDING_0A29, int,                                                                   NumLoops);                                                 // 0x0068(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A29, bool,                                                                  bInfiniteLoop);                                            // 0x006C(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000B PADDING_0A29, float,                                                                 InfiniteLoopTimeoutTime);                                  // 0x0070(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_Loop");
		return ptr;
	}


};

// Class AIModule.BTDecorator_ReachedMoveGoal
// 0x0003 (FullSize[0x0068] - InheritedSize[0x0065])
// LastOffsetWithSize(0x0065)
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ReachedMoveGoal");
		return ptr;
	}


};

// Class AIModule.BTDecorator_SetTagCooldown
// 0x0010 (FullSize[0x0075] - InheritedSize[0x0065])
// LastOffsetWithSize(0x0065)
#define PADDING_0A2B - 0x0000 // Minimum to subtract -> (0003)
class UBTDecorator_SetTagCooldown : public UBTDecorator
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0003 PADDING_0A2B, struct FGameplayTag,                                                   CooldownTag);                                              // 0x0068(0x0008)  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000B PADDING_0A2B, float,                                                                 CooldownDuration);                                         // 0x0070(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000F PADDING_0A2B, bool,                                                                  bAddToExistingDuration);                                   // 0x0074(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_SetTagCooldown");
		return ptr;
	}


};

// Class AIModule.BTDecorator_TagCooldown
// 0x0011 (FullSize[0x0076] - InheritedSize[0x0065])
// LastOffsetWithSize(0x0065)
#define PADDING_0A2C - 0x0000 // Minimum to subtract -> (0003)
class UBTDecorator_TagCooldown : public UBTDecorator
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0003 PADDING_0A2C, struct FGameplayTag,                                                   CooldownTag);                                              // 0x0068(0x0008)  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000B PADDING_0A2C, float,                                                                 CooldownDuration);                                         // 0x0070(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000F PADDING_0A2C, bool,                                                                  bAddToExistingDuration);                                   // 0x0074(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A2C, bool,                                                                  bActivatesCooldown);                                       // 0x0075(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_TagCooldown");
		return ptr;
	}


};

// Class AIModule.BTDecorator_TimeLimit
// 0x0007 (FullSize[0x006C] - InheritedSize[0x0065])
// LastOffsetWithSize(0x0065)
#define PADDING_0A2D - 0x0000 // Minimum to subtract -> (0003)
class UBTDecorator_TimeLimit : public UBTDecorator
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0003 PADDING_0A2D, float,                                                                 TimeLimit);                                                // 0x0068(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_TimeLimit");
		return ptr;
	}


};

// Class AIModule.BTFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTFunctionLibrary");
		return ptr;
	}


	static void STATIC_StopUsingExternalEvent(class UBTNode* NodeOwner);
	static void STATIC_StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);
	static void STATIC_SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value);
	static void STATIC_SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FString& Value);
	static void STATIC_SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value);
	static void STATIC_SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value);
	static void STATIC_SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FName& Value);
	static void STATIC_SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int Value);
	static void STATIC_SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value);
	static void STATIC_SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value);
	static void STATIC_SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value);
	static void STATIC_SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value);
	static class UBlackboardComponent* STATIC_GetOwnersBlackboard(class UBTNode* NodeOwner);
	static class UBehaviorTreeComponent* STATIC_GetOwnerComponent(class UBTNode* NodeOwner);
	static struct FVector STATIC_GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static struct FString STATIC_GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static struct FRotator STATIC_GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static class UObject* STATIC_GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static struct FName STATIC_GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static int STATIC_GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static float STATIC_GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static unsigned char STATIC_GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static class UClass* STATIC_GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static bool STATIC_GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static class AActor* STATIC_GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static void STATIC_ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static void STATIC_ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
};

// Class AIModule.BTService
// 0x0011 (FullSize[0x0069] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0050)
#define PADDING_0A2F - 0x0000 // Minimum to subtract -> (0010)
class UBTService : public UBTAuxiliaryNode
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A2F, float,                                                                 Interval);                                                 // 0x0060(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0A2F, float,                                                                 RandomDeviation);                                          // 0x0064(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0A2F, unsigned char,                                                         bCallTickOnSearchStart);                                   // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0A2F, unsigned char,                                                         bRestartTimerOnEachActivation);                            // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService");
		return ptr;
	}


};

// Class AIModule.BTService_BlackboardBase
// 0x002F (FullSize[0x0098] - InheritedSize[0x0069])
// LastOffsetWithSize(0x0069)
#define PADDING_0A30 - 0x0000 // Minimum to subtract -> (0007)
class UBTService_BlackboardBase : public UBTService
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A30, struct FBlackboardKeySelector,                                         BlackboardKey);                                            // 0x0070(0x0028)  (Edit, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_BlackboardBase");
		return ptr;
	}


};

// Class AIModule.BTService_BlueprintBase
// 0x0028 (FullSize[0x0091] - InheritedSize[0x0069])
// LastOffsetWithSize(0x0069)
#define PADDING_0A31 - 0x0000 // Minimum to subtract -> (0007)
class UBTService_BlueprintBase : public UBTService
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A31, class AAIController*,                                                  AIOwner);                                                  // 0x0070(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x000F PADDING_0A31, class AActor*,                                                         ActorOwner);                                               // 0x0078(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0027 PADDING_0A31, unsigned char,                                                         bShowPropertyDetails);                                     // 0x0090(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0027 PADDING_0A31, unsigned char,                                                         bShowEventDetails);                                        // 0x0090(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_BlueprintBase");
		return ptr;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveSearchStart(class AActor* OwnerActor);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDeactivation(class AActor* OwnerActor);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveActivation(class AActor* OwnerActor);
	bool IsServiceActive();
};

// Class AIModule.BTService_DefaultFocus
// 0x0001 (FullSize[0x0099] - InheritedSize[0x0098])
// LastOffsetWithSize(0x0098)
#define PADDING_0A32 - 0x0000 // Minimum to subtract -> (0000)
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A32, unsigned char,                                                         FocusPriority);                                            // 0x0098(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_DefaultFocus");
		return ptr;
	}


};

// Class AIModule.BTService_RunEQS
// 0x0048 (FullSize[0x00E0] - InheritedSize[0x0098])
// LastOffsetWithSize(0x0098)
#define PADDING_0A33 - 0x0000 // Minimum to subtract -> (0000)
class UBTService_RunEQS : public UBTService_BlackboardBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A33, struct FEQSParametrizedQueryExecutionRequest,                          EQSRequest);                                               // 0x0098(0x0048)  (Edit, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_RunEQS");
		return ptr;
	}


};

// Class AIModule.BTTask_BlueprintBase
// 0x0030 (FullSize[0x0099] - InheritedSize[0x0069])
// LastOffsetWithSize(0x0069)
#define PADDING_0A34 - 0x0000 // Minimum to subtract -> (0007)
class UBTTask_BlueprintBase : public UBTTaskNode
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A34, class AAIController*,                                                  AIOwner);                                                  // 0x0070(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x000F PADDING_0A34, class AActor*,                                                         ActorOwner);                                               // 0x0078(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x002F PADDING_0A34, unsigned char,                                                         bShowPropertyDetails);                                     // 0x0098(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_BlueprintBase");
		return ptr;
	}


	void SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID);
	void SetFinishOnMessage(const struct FName& MessageName);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecute(class AActor* OwnerActor);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbort(class AActor* OwnerActor);
	bool IsTaskExecuting();
	bool IsTaskAborting();
	void FinishExecute(bool bSuccess);
	void FinishAbort();
};

// Class AIModule.BTTask_FinishWithResult
// 0x0008 (FullSize[0x0071] - InheritedSize[0x0069])
// LastOffsetWithSize(0x0069)
#define PADDING_0A35 - 0x0000 // Minimum to subtract -> (0007)
class UBTTask_FinishWithResult : public UBTTaskNode
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A35, TEnumAsByte<EBTNodeResult>,                                            Result);                                                   // 0x0070(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_FinishWithResult");
		return ptr;
	}


};

// Class AIModule.BTTask_GameplayTaskBase
// 0x0008 (FullSize[0x0071] - InheritedSize[0x0069])
// LastOffsetWithSize(0x0069)
#define PADDING_0A36 - 0x0000 // Minimum to subtract -> (0007)
class UBTTask_GameplayTaskBase : public UBTTaskNode
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A36, unsigned char,                                                         bWaitForGameplayTask);                                     // 0x0070(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_GameplayTaskBase");
		return ptr;
	}


};

// Class AIModule.BTTask_MakeNoise
// 0x000B (FullSize[0x0074] - InheritedSize[0x0069])
// LastOffsetWithSize(0x0069)
#define PADDING_0A37 - 0x0000 // Minimum to subtract -> (0007)
class UBTTask_MakeNoise : public UBTTaskNode
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A37, float,                                                                 Loudnes);                                                  // 0x0070(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_MakeNoise");
		return ptr;
	}


};

// Class AIModule.BTTask_MoveTo
// 0x0016 (FullSize[0x00AE] - InheritedSize[0x0098])
// LastOffsetWithSize(0x0098)
#define PADDING_0A38 - 0x0000 // Minimum to subtract -> (0000)
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A38, float,                                                                 AcceptableRadius);                                         // 0x0098(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0A38, class UClass*,                                                         FilterClass);                                              // 0x00A0(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A38, float,                                                                 ObservedBlackboardValueTolerance);                         // 0x00A8(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0A38, unsigned char,                                                         bObserveBlackboardValue);                                  // 0x00AC(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0A38, unsigned char,                                                         bAllowStrafe);                                             // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0A38, unsigned char,                                                         bAllowPartialPath);                                        // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0A38, unsigned char,                                                         bTrackMovingGoal);                                         // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0A38, unsigned char,                                                         bProjectGoalLocation);                                     // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0A38, unsigned char,                                                         bReachTestIncludesAgentRadius);                            // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0A38, unsigned char,                                                         bReachTestIncludesGoalRadius);                             // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0A38, unsigned char,                                                         bStopOnOverlap);                                           // 0x00AC(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0015 PADDING_0A38, unsigned char,                                                         bStopOnOverlapNeedsUpdate);                                // 0x00AD(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_MoveTo");
		return ptr;
	}


};

// Class AIModule.BTTask_MoveDirectlyToward
// 0x0003 (FullSize[0x00B1] - InheritedSize[0x00AE])
// LastOffsetWithSize(0x00AE)
#define PADDING_0A39 - 0x0000 // Minimum to subtract -> (0002)
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0002 PADDING_0A39, unsigned char,                                                         bDisablePathUpdateOnGoalLocationChange);                   // 0x00B0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0002 PADDING_0A39, unsigned char,                                                         bProjectVectorGoalToNavigation);                           // 0x00B0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0002 PADDING_0A39, unsigned char,                                                         bUpdatedDeprecatedProperties);                             // 0x00B0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_MoveDirectlyToward");
		return ptr;
	}


};

// Class AIModule.BTTask_PawnActionBase
// 0x0007 (FullSize[0x0070] - InheritedSize[0x0069])
// LastOffsetWithSize(0x0069)
class UBTTask_PawnActionBase : public UBTTaskNode
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PawnActionBase");
		return ptr;
	}


};

// Class AIModule.BTTask_PlayAnimation
// 0x0027 (FullSize[0x0090] - InheritedSize[0x0069])
// LastOffsetWithSize(0x0069)
#define PADDING_0A3B - 0x0000 // Minimum to subtract -> (0007)
class UBTTask_PlayAnimation : public UBTTaskNode
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A3B, class UAnimationAsset*,                                                AnimationToPlay);                                          // 0x0070(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000F PADDING_0A3B, unsigned char,                                                         bLooping);                                                 // 0x0078(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000F PADDING_0A3B, unsigned char,                                                         bNonBlocking);                                             // 0x0078(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0017 PADDING_0A3B, class UBehaviorTreeComponent*,                                         MyOwnerComp);                                              // 0x0080(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001F PADDING_0A3B, class USkeletalMeshComponent*,                                         CachedSkelMesh);                                           // 0x0088(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PlayAnimation");
		return ptr;
	}


};

// Class AIModule.BTTask_PlaySound
// 0x000F (FullSize[0x0078] - InheritedSize[0x0069])
// LastOffsetWithSize(0x0069)
#define PADDING_0A3C - 0x0000 // Minimum to subtract -> (0007)
class UBTTask_PlaySound : public UBTTaskNode
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A3C, class USoundCue*,                                                      SoundToPlay);                                              // 0x0070(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PlaySound");
		return ptr;
	}


};

// Class AIModule.BTTask_PushPawnAction
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
// LastOffsetWithSize(0x0069)
#define PADDING_0A3D - 0x0000 // Minimum to subtract -> (0007)
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A3D, class UPawnAction*,                                                    Action);                                                   // 0x0070(0x0008)  (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PushPawnAction");
		return ptr;
	}


};

// Class AIModule.BTTask_RotateToFaceBBEntry
// 0x0004 (FullSize[0x009C] - InheritedSize[0x0098])
// LastOffsetWithSize(0x0098)
#define PADDING_0A3E - 0x0000 // Minimum to subtract -> (0000)
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A3E, float,                                                                 Precision);                                                // 0x0098(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RotateToFaceBBEntry");
		return ptr;
	}


};

// Class AIModule.BTTask_RunBehavior
// 0x000F (FullSize[0x0078] - InheritedSize[0x0069])
// LastOffsetWithSize(0x0069)
#define PADDING_0A3F - 0x0000 // Minimum to subtract -> (0007)
class UBTTask_RunBehavior : public UBTTaskNode
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A3F, class UBehaviorTree*,                                                  BehaviorAsset);                                            // 0x0070(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RunBehavior");
		return ptr;
	}


};

// Class AIModule.BTTask_RunBehaviorDynamic
// 0x001F (FullSize[0x0088] - InheritedSize[0x0069])
// LastOffsetWithSize(0x0069)
#define PADDING_0A40 - 0x0000 // Minimum to subtract -> (0007)
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A40, struct FGameplayTag,                                                   InjectionTag);                                             // 0x0070(0x0008)  (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x000F PADDING_0A40, class UBehaviorTree*,                                                  DefaultBehaviorAsset);                                     // 0x0078(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0017 PADDING_0A40, class UBehaviorTree*,                                                  BehaviorAsset);                                            // 0x0080(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RunBehaviorDynamic");
		return ptr;
	}


};

// Class AIModule.BTTask_RunEQSQuery
// 0x00A8 (FullSize[0x0140] - InheritedSize[0x0098])
// LastOffsetWithSize(0x0098)
#define PADDING_0A41 - 0x0000 // Minimum to subtract -> (0000)
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A41, class UEnvQuery*,                                                      QueryTemplate);                                            // 0x0098(0x0008)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0A41, TArray<struct FEnvNamedValue>,                                         QueryParams);                                              // 0x00A0(0x0010)  (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0A41, TArray<struct FAIDynamicParam>,                                        QueryConfig);                                              // 0x00B0(0x0010)  (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0A41, TEnumAsByte<EEnvQueryRunMode>,                                         RunMode);                                                  // 0x00C0(0x0001)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0A41, struct FBlackboardKeySelector,                                         EQSQueryBlackboardKey);                                    // 0x00C8(0x0028)  (Edit, EditConst, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0A41, bool,                                                                  bUseBBKey);                                                // 0x00F0(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0A41, struct FEQSParametrizedQueryExecutionRequest,                          EQSRequest);                                               // 0x00F8(0x0048)  (Edit, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RunEQSQuery");
		return ptr;
	}


};

// Class AIModule.BTTask_SetTagCooldown
// 0x0017 (FullSize[0x0080] - InheritedSize[0x0069])
// LastOffsetWithSize(0x0069)
#define PADDING_0A42 - 0x0000 // Minimum to subtract -> (0007)
class UBTTask_SetTagCooldown : public UBTTaskNode
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A42, struct FGameplayTag,                                                   CooldownTag);                                              // 0x0070(0x0008)  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000F PADDING_0A42, bool,                                                                  bAddToExistingDuration);                                   // 0x0078(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0013 PADDING_0A42, float,                                                                 CooldownDuration);                                         // 0x007C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_SetTagCooldown");
		return ptr;
	}


};

// Class AIModule.BTTask_Wait
// 0x000F (FullSize[0x0078] - InheritedSize[0x0069])
// LastOffsetWithSize(0x0069)
#define PADDING_0A43 - 0x0000 // Minimum to subtract -> (0007)
class UBTTask_Wait : public UBTTaskNode
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A43, float,                                                                 WaitTime);                                                 // 0x0070(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000B PADDING_0A43, float,                                                                 RandomDeviation);                                          // 0x0074(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_Wait");
		return ptr;
	}


};

// Class AIModule.BTTask_WaitBlackboardTime
// 0x0028 (FullSize[0x00A0] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_0A44 - 0x0000 // Minimum to subtract -> (0000)
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A44, struct FBlackboardKeySelector,                                         BlackboardKey);                                            // 0x0078(0x0028)  (Edit, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_WaitBlackboardTime");
		return ptr;
	}


};

// Class AIModule.CrowdAgentInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UCrowdAgentInterface : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.CrowdAgentInterface");
		return ptr;
	}


};

// Class AIModule.PathFollowingComponent
// 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_0A46 - 0x0000 // Minimum to subtract -> (0048)
class UPathFollowingComponent : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0048 PADDING_0A46, class UNavMovementComponent*,                                          MovementComp);                                             // 0x0110(0x0008)  (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0A46, class ANavigationData*,                                                MyNavData);                                                // 0x0120(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PathFollowingComponent");
		return ptr;
	}


	void OnNavDataRegistered(class ANavigationData* NavData);
	void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	struct FVector GetPathDestination();
	TEnumAsByte<EPathFollowingAction> GetPathActionType();
};

// Class AIModule.CrowdFollowingComponent
// 0x0174 (FullSize[0x029C] - InheritedSize[0x0128])
// LastOffsetWithSize(0x0128)
#define PADDING_0A47 - 0x0000 // Minimum to subtract -> (0160)
class UCrowdFollowingComponent : public UPathFollowingComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0160 PADDING_0A47, class UCharacterMovementComponent*,                                    CharacterMovement);                                        // 0x0288(0x0008)  (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0168 PADDING_0A47, struct FVector,                                                        CrowdAgentMoveDirection);                                  // 0x0290(0x000C)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.CrowdFollowingComponent");
		return ptr;
	}


	void SuspendCrowdSteering(bool bSuspend);
};

// Class AIModule.CrowdManager
// 0x0049 (FullSize[0x0071] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A48 - 0x0000 // Minimum to subtract -> (0000)
class UCrowdManager : public UCrowdManagerBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A48, class ANavigationData*,                                                MyNavData);                                                // 0x0028(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0A48, TArray<struct FCrowdAvoidanceConfig>,                                  AvoidanceConfig);                                          // 0x0030(0x0010)  (Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0A48, TArray<struct FCrowdAvoidanceSamplingPattern>,                         SamplingPatterns);                                         // 0x0040(0x0010)  (Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0A48, int,                                                                   MaxAgents);                                                // 0x0050(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x002C PADDING_0A48, float,                                                                 MaxAgentRadius);                                           // 0x0054(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0A48, int,                                                                   MaxAvoidedAgents);                                         // 0x0058(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0034 PADDING_0A48, int,                                                                   MaxAvoidedWalls);                                          // 0x005C(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0A48, float,                                                                 NavmeshCheckInterval);                                     // 0x0060(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x003C PADDING_0A48, float,                                                                 PathOptimizationInterval);                                 // 0x0064(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0A48, float,                                                                 SeparationDirClamp);                                       // 0x0068(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0044 PADDING_0A48, float,                                                                 PathOffsetRadiusMultiplier);                               // 0x006C(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0A48, unsigned char,                                                         bResolveCollisions);                                       // 0x0070(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.CrowdManager");
		return ptr;
	}


};

// Class AIModule.DetourCrowdAIController
// 0x0008 (FullSize[0x0350] - InheritedSize[0x0348])
// LastOffsetWithSize(0x0348)
class ADetourCrowdAIController : public AAIController
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.DetourCrowdAIController");
		return ptr;
	}


};

// Class AIModule.EnvQuery
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
#define PADDING_0A4A - 0x0000 // Minimum to subtract -> (0000)
class UEnvQuery : public UDataAsset
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A4A, struct FName,                                                          QueryName);                                                // 0x0030(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0A4A, TArray<class UEnvQueryOption*>,                                        Options);                                                  // 0x0038(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQuery");
		return ptr;
	}


};

// Class AIModule.EnvQueryContext
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UEnvQueryContext : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext");
		return ptr;
	}


};

// Class AIModule.EnvQueryContext_BlueprintBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext_BlueprintBase");
		return ptr;
	}


	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation);
	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor);
	void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet);
	void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet);
};

// Class AIModule.EnvQueryContext_Item
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UEnvQueryContext_Item : public UEnvQueryContext
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Item");
		return ptr;
	}


};

// Class AIModule.EnvQueryContext_Querier
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UEnvQueryContext_Querier : public UEnvQueryContext
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Querier");
		return ptr;
	}


};

// Class AIModule.EnvQueryDebugHelpers
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UEnvQueryDebugHelpers : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryDebugHelpers");
		return ptr;
	}


};

// Class AIModule.EnvQueryNode
// 0x0004 (FullSize[0x002C] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A50 - 0x0000 // Minimum to subtract -> (0000)
class UEnvQueryNode : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A50, int,                                                                   VerNum);                                                   // 0x0028(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryNode");
		return ptr;
	}


};

// Class AIModule.EnvQueryGenerator
// 0x001D (FullSize[0x0049] - InheritedSize[0x002C])
// LastOffsetWithSize(0x002C)
#define PADDING_0A51 - 0x0000 // Minimum to subtract -> (0004)
class UEnvQueryGenerator : public UEnvQueryNode
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_0A51, struct FString,                                                        OptionName);                                               // 0x0030(0x0010)  (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0A51, class UClass*,                                                         ItemType);                                                 // 0x0040(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0A51, unsigned char,                                                         bAutoSortTests);                                           // 0x0048(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator");
		return ptr;
	}


};

// Class AIModule.EnvQueryGenerator_ActorsOfClass
// 0x0077 (FullSize[0x00C0] - InheritedSize[0x0049])
// LastOffsetWithSize(0x0049)
#define PADDING_0A52 - 0x0000 // Minimum to subtract -> (0007)
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A52, class UClass*,                                                         SearchedActorClass);                                       // 0x0050(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000F PADDING_0A52, struct FAIDataProviderBoolValue,                                       GenerateOnlyActorsInRadius);                               // 0x0058(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003F PADDING_0A52, struct FAIDataProviderFloatValue,                                      SearchRadius);                                             // 0x0088(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x006F PADDING_0A52, class UClass*,                                                         SearchCenter);                                             // 0x00B8(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ActorsOfClass");
		return ptr;
	}


};

// Class AIModule.EnvQueryGenerator_BlueprintBase
// 0x002F (FullSize[0x0078] - InheritedSize[0x0049])
// LastOffsetWithSize(0x0049)
#define PADDING_0A53 - 0x0000 // Minimum to subtract -> (0007)
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A53, struct FText,                                                          GeneratorsActionDescription);                              // 0x0050(0x0018)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001F PADDING_0A53, class UClass*,                                                         Context);                                                  // 0x0068(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0027 PADDING_0A53, class UClass*,                                                         GeneratedItemType);                                        // 0x0070(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_BlueprintBase");
		return ptr;
	}


	class UObject* GetQuerier();
	void DoItemGeneration(TArray<struct FVector> ContextLocations);
	void AddGeneratedVector(const struct FVector& GeneratedVector);
	void AddGeneratedActor(class AActor* GeneratedActor);
};

// Class AIModule.EnvQueryGenerator_Composite
// 0x0027 (FullSize[0x0070] - InheritedSize[0x0049])
// LastOffsetWithSize(0x0049)
#define PADDING_0A54 - 0x0000 // Minimum to subtract -> (0007)
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A54, TArray<class UEnvQueryGenerator*>,                                     Generators);                                               // 0x0050(0x0010)  (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0017 PADDING_0A54, unsigned char,                                                         bAllowDifferentItemTypes);                                 // 0x0060(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0017 PADDING_0A54, unsigned char,                                                         bHasMatchingItemType);                                     // 0x0060(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001F PADDING_0A54, class UClass*,                                                         ForcedItemType);                                           // 0x0068(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Composite");
		return ptr;
	}


};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
// 0x0037 (FullSize[0x0080] - InheritedSize[0x0049])
// LastOffsetWithSize(0x0049)
#define PADDING_0A55 - 0x0000 // Minimum to subtract -> (0007)
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A55, struct FEnvTraceData,                                                  ProjectionData);                                           // 0x0050(0x0030)  (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ProjectedPoints");
		return ptr;
	}


};

// Class AIModule.EnvQueryGenerator_Cone
// 0x00C9 (FullSize[0x0149] - InheritedSize[0x0080])
// LastOffsetWithSize(0x0080)
#define PADDING_0A56 - 0x0000 // Minimum to subtract -> (0000)
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A56, struct FAIDataProviderFloatValue,                                      AlignedPointsDistance);                                    // 0x0080(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0A56, struct FAIDataProviderFloatValue,                                      ConeDegrees);                                              // 0x00B0(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0A56, struct FAIDataProviderFloatValue,                                      AngleStep);                                                // 0x00E0(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0A56, struct FAIDataProviderFloatValue,                                      Range);                                                    // 0x0110(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0A56, class UClass*,                                                         CenterActor);                                              // 0x0140(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_0A56, unsigned char,                                                         bIncludeContextLocation);                                  // 0x0148(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Cone");
		return ptr;
	}


};

// Class AIModule.EnvQueryGenerator_CurrentLocation
// 0x000F (FullSize[0x0058] - InheritedSize[0x0049])
// LastOffsetWithSize(0x0049)
#define PADDING_0A57 - 0x0000 // Minimum to subtract -> (0007)
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A57, class UClass*,                                                         QueryContext);                                             // 0x0050(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_CurrentLocation");
		return ptr;
	}


};

// Class AIModule.EnvQueryGenerator_Donut
// 0x0121 (FullSize[0x01A1] - InheritedSize[0x0080])
// LastOffsetWithSize(0x0080)
#define PADDING_0A58 - 0x0000 // Minimum to subtract -> (0000)
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A58, struct FAIDataProviderFloatValue,                                      InnerRadius);                                              // 0x0080(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0A58, struct FAIDataProviderFloatValue,                                      OuterRadius);                                              // 0x00B0(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0A58, struct FAIDataProviderIntValue,                                        NumberOfRings);                                            // 0x00E0(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0A58, struct FAIDataProviderIntValue,                                        PointsPerRing);                                            // 0x0110(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0A58, struct FEnvDirection,                                                  ArcDirection);                                             // 0x0140(0x0020)  (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_0A58, struct FAIDataProviderFloatValue,                                      ArcAngle);                                                 // 0x0160(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0110 PADDING_0A58, bool,                                                                  bUseSpiralPattern);                                        // 0x0190(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0118 PADDING_0A58, class UClass*,                                                         Center);                                                   // 0x0198(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0120 PADDING_0A58, unsigned char,                                                         bDefineArc);                                               // 0x01A0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Donut");
		return ptr;
	}


};

// Class AIModule.EnvQueryGenerator_OnCircle
// 0x0161 (FullSize[0x01E1] - InheritedSize[0x0080])
// LastOffsetWithSize(0x0080)
#define PADDING_0A59 - 0x0000 // Minimum to subtract -> (0000)
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A59, struct FAIDataProviderFloatValue,                                      CircleRadius);                                             // 0x0080(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0A59, struct FAIDataProviderFloatValue,                                      SpaceBetween);                                             // 0x00B0(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0A59, struct FAIDataProviderIntValue,                                        NumberOfPoints);                                           // 0x00E0(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0A59, EPointOnCircleSpacingMethod,                                           PointOnCircleSpacingMethod);                               // 0x0110(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0A59, struct FEnvDirection,                                                  ArcDirection);                                             // 0x0118(0x0020)  (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0A59, struct FAIDataProviderFloatValue,                                      ArcAngle);                                                 // 0x0138(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_0A59, float,                                                                 AngleRadians);                                             // 0x0168(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_0A59, class UClass*,                                                         CircleCenter);                                             // 0x0170(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_0A59, bool,                                                                  bIgnoreAnyContextActorsWhenGeneratingCircle);              // 0x0178(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0100 PADDING_0A59, struct FAIDataProviderFloatValue,                                      CircleCenterZOffset);                                      // 0x0180(0x0030)  (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0130 PADDING_0A59, struct FEnvTraceData,                                                  TraceData);                                                // 0x01B0(0x0030)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0160 PADDING_0A59, unsigned char,                                                         bDefineArc);                                               // 0x01E0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_OnCircle");
		return ptr;
	}


};

// Class AIModule.EnvQueryGenerator_SimpleGrid
// 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
// LastOffsetWithSize(0x0080)
#define PADDING_0A5A - 0x0000 // Minimum to subtract -> (0000)
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A5A, struct FAIDataProviderFloatValue,                                      GridSize);                                                 // 0x0080(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0A5A, struct FAIDataProviderFloatValue,                                      SpaceBetween);                                             // 0x00B0(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0A5A, class UClass*,                                                         GenerateAround);                                           // 0x00E0(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_SimpleGrid");
		return ptr;
	}


};

// Class AIModule.EnvQueryGenerator_PathingGrid
// 0x0068 (FullSize[0x0150] - InheritedSize[0x00E8])
// LastOffsetWithSize(0x00E8)
#define PADDING_0A5B - 0x0000 // Minimum to subtract -> (0000)
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A5B, struct FAIDataProviderBoolValue,                                       PathToItem);                                               // 0x00E8(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0A5B, class UClass*,                                                         NavigationFilter);                                         // 0x0118(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0A5B, struct FAIDataProviderFloatValue,                                      ScanRangeMultiplier);                                      // 0x0120(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_PathingGrid");
		return ptr;
	}


};

// Class AIModule.EnvQueryInstanceBlueprintWrapper
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A5C - 0x0000 // Minimum to subtract -> (0008)
class UEnvQueryInstanceBlueprintWrapper : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0A5C, int,                                                                   QueryID);                                                  // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0A5C, class UClass*,                                                         ItemType);                                                 // 0x0058(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0A5C, int,                                                                   OptionIndex);                                              // 0x0060(0x0004)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0A5C, struct FScriptMulticastDelegate,                                       OnQueryFinishedEvent);                                     // 0x0068(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryInstanceBlueprintWrapper");
		return ptr;
	}


	void SetNamedParam(const struct FName& ParamName, float Value);
	TArray<struct FVector> GetResultsAsLocations();
	TArray<class AActor*> GetResultsAsActors();
	bool GetQueryResultsAsLocations(TArray<struct FVector>* ResultLocations);
	bool GetQueryResultsAsActors(TArray<class AActor*>* ResultActors);
	float GetItemScore(int ItemIndex);
	void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
};

// Class AIModule.EnvQueryItemType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UEnvQueryItemType : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType");
		return ptr;
	}


};

// Class AIModule.EnvQueryItemType_VectorBase
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_VectorBase");
		return ptr;
	}


};

// Class AIModule.EnvQueryItemType_ActorBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0028)
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_ActorBase");
		return ptr;
	}


};

// Class AIModule.EnvQueryItemType_Actor
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0028)
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Actor");
		return ptr;
	}


};

// Class AIModule.EnvQueryItemType_Direction
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0028)
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Direction");
		return ptr;
	}


};

// Class AIModule.EnvQueryItemType_Point
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0028)
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Point");
		return ptr;
	}


};

// Class AIModule.EnvQueryManager
// 0x0108 (FullSize[0x0140] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_0A63 - 0x0000 // Minimum to subtract -> (0070)
class UEnvQueryManager : public UAISubsystem
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0070 PADDING_0A63, TArray<struct FEnvQueryInstanceCache>,                                 InstanceCache);                                            // 0x00A8(0x0010)  (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0A63, TArray<class UEnvQueryContext*>,                                       LocalContexts);                                            // 0x00B8(0x0010)  (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0A63, TArray<class UEnvQueryInstanceBlueprintWrapper*>,                      GCShieldedWrappers);                                       // 0x00C8(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F4 PADDING_0A63, float,                                                                 MaxAllowedTestingTime);                                    // 0x012C(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_0A63, bool,                                                                  bTestQueriesUsingBreadth);                                 // 0x0130(0x0001)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00FC PADDING_0A63, int,                                                                   QueryCountWarningThreshold);                               // 0x0134(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0100 PADDING_0A63, double,                                                                QueryCountWarningInterval);                                // 0x0138(0x0008)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryManager");
		return ptr;
	}


	static class UEnvQueryInstanceBlueprintWrapper* STATIC_RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, class UClass* WrapperClass);
};

// Class AIModule.EnvQueryOption
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A64 - 0x0000 // Minimum to subtract -> (0000)
class UEnvQueryOption : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A64, class UEnvQueryGenerator*,                                             Generator);                                                // 0x0028(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0A64, TArray<class UEnvQueryTest*>,                                          Tests);                                                    // 0x0030(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryOption");
		return ptr;
	}


};

// Class AIModule.EnvQueryTest
// 0x018D (FullSize[0x01B9] - InheritedSize[0x002C])
// LastOffsetWithSize(0x002C)
#define PADDING_0A65 - 0x0000 // Minimum to subtract -> (0004)
class UEnvQueryTest : public UEnvQueryNode
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_0A65, int,                                                                   TestOrder);                                                // 0x0030(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0A65, TEnumAsByte<EEnvTestPurpose>,                                          TestPurpose);                                              // 0x0034(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_0A65, struct FString,                                                        TestComment);                                              // 0x0038(0x0010)  (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0A65, TEnumAsByte<EEnvTestFilterOperator>,                                   MultipleContextFilterOp);                                  // 0x0048(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001D PADDING_0A65, TEnumAsByte<EEnvTestScoreOperator>,                                    MultipleContextScoreOp);                                   // 0x0049(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001E PADDING_0A65, TEnumAsByte<EEnvTestFilterType>,                                       FilterType);                                               // 0x004A(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0A65, struct FAIDataProviderBoolValue,                                       BoolValue);                                                // 0x0050(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0054 PADDING_0A65, struct FAIDataProviderFloatValue,                                      FloatValueMin);                                            // 0x0080(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0084 PADDING_0A65, struct FAIDataProviderFloatValue,                                      FloatValueMax);                                            // 0x00B0(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B5 PADDING_0A65, TEnumAsByte<EEnvTestScoreEquation>,                                    ScoringEquation);                                          // 0x00E1(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B6 PADDING_0A65, TEnumAsByte<EEnvQueryTestClamping>,                                    ClampMinType);                                             // 0x00E2(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B7 PADDING_0A65, TEnumAsByte<EEnvQueryTestClamping>,                                    ClampMaxType);                                             // 0x00E3(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0A65, EEQSNormalizationType,                                                 NormalizationType);                                        // 0x00E4(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00BC PADDING_0A65, struct FAIDataProviderFloatValue,                                      ScoreClampMin);                                            // 0x00E8(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00EC PADDING_0A65, struct FAIDataProviderFloatValue,                                      ScoreClampMax);                                            // 0x0118(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x011C PADDING_0A65, struct FAIDataProviderFloatValue,                                      ScoringFactor);                                            // 0x0148(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x014C PADDING_0A65, struct FAIDataProviderFloatValue,                                      ReferenceValue);                                           // 0x0178(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x017C PADDING_0A65, bool,                                                                  bDefineReferenceValue);                                    // 0x01A8(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x018C PADDING_0A65, unsigned char,                                                         bWorkOnFloatValues);                                       // 0x01B8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest");
		return ptr;
	}


};

// Class AIModule.EnvQueryTest_Distance
// 0x0017 (FullSize[0x01D0] - InheritedSize[0x01B9])
// LastOffsetWithSize(0x01B9)
#define PADDING_0A66 - 0x0000 // Minimum to subtract -> (0007)
class UEnvQueryTest_Distance : public UEnvQueryTest
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A66, TEnumAsByte<EEnvTestDistance>,                                         TestMode);                                                 // 0x01C0(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000F PADDING_0A66, class UClass*,                                                         DistanceTo);                                               // 0x01C8(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Distance");
		return ptr;
	}


};

// Class AIModule.EnvQueryTest_Dot
// 0x0049 (FullSize[0x0202] - InheritedSize[0x01B9])
// LastOffsetWithSize(0x01B9)
#define PADDING_0A67 - 0x0000 // Minimum to subtract -> (0007)
class UEnvQueryTest_Dot : public UEnvQueryTest
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A67, struct FEnvDirection,                                                  LineA);                                                    // 0x01C0(0x0020)  (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0027 PADDING_0A67, struct FEnvDirection,                                                  LineB);                                                    // 0x01E0(0x0020)  (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0047 PADDING_0A67, EEnvTestDot,                                                           TestMode);                                                 // 0x0200(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0A67, bool,                                                                  bAbsoluteValue);                                           // 0x0201(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Dot");
		return ptr;
	}


};

// Class AIModule.EnvQueryTest_GameplayTags
// 0x0077 (FullSize[0x0230] - InheritedSize[0x01B9])
// LastOffsetWithSize(0x01B9)
#define PADDING_0A68 - 0x0000 // Minimum to subtract -> (0007)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A68, struct FGameplayTagQuery,                                              TagQueryToMatch);                                          // 0x01C0(0x0048)  (Edit, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x004F PADDING_0A68, bool,                                                                  bUpdatedToUseQuery);                                       // 0x0208(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0A68, EGameplayContainerMatchType,                                           TagsToMatch);                                              // 0x0209(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0057 PADDING_0A68, struct FGameplayTagContainer,                                          GameplayTags);                                             // 0x0210(0x0020)  (Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_GameplayTags");
		return ptr;
	}


};

// Class AIModule.EnvQueryTest_Overlap
// 0x0027 (FullSize[0x01E0] - InheritedSize[0x01B9])
// LastOffsetWithSize(0x01B9)
#define PADDING_0A69 - 0x0000 // Minimum to subtract -> (0007)
class UEnvQueryTest_Overlap : public UEnvQueryTest
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A69, struct FEnvOverlapData,                                                OverlapData);                                              // 0x01C0(0x0020)  (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Overlap");
		return ptr;
	}


};

// Class AIModule.EnvQueryTest_Pathfinding
// 0x007F (FullSize[0x0238] - InheritedSize[0x01B9])
// LastOffsetWithSize(0x01B9)
#define PADDING_0A6A - 0x0000 // Minimum to subtract -> (0007)
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A6A, TEnumAsByte<EEnvTestPathfinding>,                                      TestMode);                                                 // 0x01C0(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000F PADDING_0A6A, class UClass*,                                                         Context);                                                  // 0x01C8(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0017 PADDING_0A6A, struct FAIDataProviderBoolValue,                                       PathFromContext);                                          // 0x01D0(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0047 PADDING_0A6A, struct FAIDataProviderBoolValue,                                       SkipUnreachable);                                          // 0x0200(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0077 PADDING_0A6A, class UClass*,                                                         FilterClass);                                              // 0x0230(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Pathfinding");
		return ptr;
	}


};

// Class AIModule.EnvQueryTest_PathfindingBatch
// 0x0030 (FullSize[0x0268] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_0A6B - 0x0000 // Minimum to subtract -> (0000)
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A6B, struct FAIDataProviderFloatValue,                                      ScanRangeMultiplier);                                      // 0x0238(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_PathfindingBatch");
		return ptr;
	}


};

// Class AIModule.EnvQueryTest_Project
// 0x0037 (FullSize[0x01F0] - InheritedSize[0x01B9])
// LastOffsetWithSize(0x01B9)
#define PADDING_0A6C - 0x0000 // Minimum to subtract -> (0007)
class UEnvQueryTest_Project : public UEnvQueryTest
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A6C, struct FEnvTraceData,                                                  ProjectionData);                                           // 0x01C0(0x0030)  (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Project");
		return ptr;
	}


};

// Class AIModule.EnvQueryTest_Random
// 0x0007 (FullSize[0x01C0] - InheritedSize[0x01B9])
// LastOffsetWithSize(0x01B9)
class UEnvQueryTest_Random : public UEnvQueryTest
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Random");
		return ptr;
	}


};

// Class AIModule.EnvQueryTest_Trace
// 0x00CF (FullSize[0x0288] - InheritedSize[0x01B9])
// LastOffsetWithSize(0x01B9)
#define PADDING_0A6E - 0x0000 // Minimum to subtract -> (0007)
class UEnvQueryTest_Trace : public UEnvQueryTest
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A6E, struct FEnvTraceData,                                                  TraceData);                                                // 0x01C0(0x0030)  (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0037 PADDING_0A6E, struct FAIDataProviderBoolValue,                                       TraceFromContext);                                         // 0x01F0(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0067 PADDING_0A6E, struct FAIDataProviderFloatValue,                                      ItemHeightOffset);                                         // 0x0220(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0097 PADDING_0A6E, struct FAIDataProviderFloatValue,                                      ContextHeightOffset);                                      // 0x0250(0x0030)  (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C7 PADDING_0A6E, class UClass*,                                                         Context);                                                  // 0x0280(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Trace");
		return ptr;
	}


};

// Class AIModule.EnvQueryTest_Volume
// 0x0018 (FullSize[0x01D1] - InheritedSize[0x01B9])
// LastOffsetWithSize(0x01B9)
#define PADDING_0A6F - 0x0000 // Minimum to subtract -> (0007)
class UEnvQueryTest_Volume : public UEnvQueryTest
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0A6F, class UClass*,                                                         VolumeContext);                                            // 0x01C0(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x000F PADDING_0A6F, class UClass*,                                                         VolumeClass);                                              // 0x01C8(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0017 PADDING_0A6F, unsigned char,                                                         bDoComplexVolumeTest);                                     // 0x01D0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Volume");
		return ptr;
	}


};

// Class AIModule.EnvQueryTypes
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UEnvQueryTypes : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTypes");
		return ptr;
	}


};

// Class AIModule.EQSQueryResultSourceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UEQSQueryResultSourceInterface : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EQSQueryResultSourceInterface");
		return ptr;
	}


};

// Class AIModule.EQSRenderingComponent
// 0x000B (FullSize[0x0410] - InheritedSize[0x0405])
// LastOffsetWithSize(0x0408)
class UEQSRenderingComponent : public UPrimitiveComponent
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EQSRenderingComponent");
		return ptr;
	}


};

// Class AIModule.EQSTestingPawn
// 0x0078 (FullSize[0x06D0] - InheritedSize[0x0658])
// LastOffsetWithSize(0x0658)
#define PADDING_0A73 - 0x0000 // Minimum to subtract -> (0008)
class AEQSTestingPawn : public ACharacter
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0A73, class UEnvQuery*,                                                      QueryTemplate);                                            // 0x0660(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A73, TArray<struct FEnvNamedValue>,                                         QueryParams);                                              // 0x0668(0x0010)  (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0A73, TArray<struct FAIDynamicParam>,                                        QueryConfig);                                              // 0x0678(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0A73, float,                                                                 TimeLimitPerStep);                                         // 0x0688(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0034 PADDING_0A73, int,                                                                   StepToDebugDraw);                                          // 0x068C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0A73, EEnvQueryHightlightMode,                                               HighlightMode);                                            // 0x0690(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003C PADDING_0A73, unsigned char,                                                         bDrawLabels);                                              // 0x0694(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003C PADDING_0A73, unsigned char,                                                         bDrawFailedItems);                                         // 0x0694(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003C PADDING_0A73, unsigned char,                                                         bReRunQueryOnlyOnFinishedMove);                            // 0x0694(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003C PADDING_0A73, unsigned char,                                                         bShouldBeVisibleInGame);                                   // 0x0694(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003C PADDING_0A73, unsigned char,                                                         bTickDuringGame);                                          // 0x0694(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0A73, TEnumAsByte<EEnvQueryRunMode>,                                         QueryingMode);                                             // 0x0698(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0A73, struct FNavAgentProperties,                                            NavAgentProperties);                                       // 0x06A0(0x0030)  (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EQSTestingPawn");
		return ptr;
	}


};

// Class AIModule.GenericTeamAgentInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UGenericTeamAgentInterface : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.GenericTeamAgentInterface");
		return ptr;
	}


};

// Class AIModule.GridPathAIController
// 0x0008 (FullSize[0x0350] - InheritedSize[0x0348])
// LastOffsetWithSize(0x0348)
class AGridPathAIController : public AAIController
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.GridPathAIController");
		return ptr;
	}


};

// Class AIModule.GridPathFollowingComponent
// 0x0160 (FullSize[0x0288] - InheritedSize[0x0128])
// LastOffsetWithSize(0x0128)
#define PADDING_0A76 - 0x0000 // Minimum to subtract -> (0158)
class UGridPathFollowingComponent : public UPathFollowingComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0158 PADDING_0A76, class UNavLocalGridManager*,                                           GridManager);                                              // 0x0280(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.GridPathFollowingComponent");
		return ptr;
	}


};

// Class AIModule.NavFilter_AIControllerDefault
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
// LastOffsetWithSize(0x0040)
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.NavFilter_AIControllerDefault");
		return ptr;
	}


};

// Class AIModule.NavLinkProxy
// 0x0060 (FullSize[0x0298] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_0A78 - 0x0000 // Minimum to subtract -> (0020)
class ANavLinkProxy : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0020 PADDING_0A78, TArray<struct FNavigationLink>,                                        PointLinks);                                               // 0x0258(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0A78, TArray<struct FNavigationSegmentLink>,                                 SegmentLinks);                                             // 0x0268(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0A78, class UNavLinkCustomComponent*,                                        SmartLinkComp);                                            // 0x0278(0x0008)  (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0A78, bool,                                                                  bSmartLinkIsRelevant);                                     // 0x0280(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0A78, struct FScriptMulticastDelegate,                                       OnSmartLinkReached);                                       // 0x0288(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.NavLinkProxy");
		return ptr;
	}


	void SetSmartLinkEnabled(bool bEnabled);
	void ResumePathFollowing(class AActor* Agent);
	void ReceiveSmartLinkReached(class AActor* Agent, const struct FVector& Destination);
	bool IsSmartLinkEnabled();
	bool HasMovingAgents();
};

// Class AIModule.NavLocalGridManager
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UNavLocalGridManager : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.NavLocalGridManager");
		return ptr;
	}


	static bool STATIC_SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize);
	static void STATIC_RemoveLocalNavigationGrid(class UObject* WorldContextObject, int GridId, bool bRebuildGrids);
	static bool STATIC_FindLocalNavigationGridPath(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<struct FVector>* PathPoints);
	static int STATIC_AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<struct FVector> Locations, int Radius2D, float Height, bool bRebuildGrids);
	static int STATIC_AddLocalNavigationGridForPoint(class UObject* WorldContextObject, const struct FVector& Location, int Radius2D, float Height, bool bRebuildGrids);
	static int STATIC_AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int Radius2D, float Height, bool bRebuildGrids);
	static int STATIC_AddLocalNavigationGridForBox(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, int Radius2D, float Height, bool bRebuildGrids);
};

// Class AIModule.PathFollowingManager
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UPathFollowingManager : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PathFollowingManager");
		return ptr;
	}


};

// Class AIModule.PawnAction
// 0x0059 (FullSize[0x0081] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A7B - 0x0000 // Minimum to subtract -> (0000)
class UPawnAction : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A7B, class UPawnAction*,                                                    ChildAction);                                              // 0x0028(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0A7B, class UPawnAction*,                                                    ParentAction);                                             // 0x0030(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A7B, class UPawnActionsComponent*,                                          OwnerComponent);                                           // 0x0038(0x0008)  (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0A7B, class UObject*,                                                        Instigator);                                               // 0x0040(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0A7B, class UBrainComponent*,                                                BrainComp);                                                // 0x0048(0x0008)  (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0A7B, unsigned char,                                                         bAllowNewSameClassInstance);                               // 0x0080(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0A7B, unsigned char,                                                         bReplaceActiveSameClassInstance);                          // 0x0080(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0A7B, unsigned char,                                                         bShouldPauseMovement);                                     // 0x0080(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0A7B, unsigned char,                                                         bAlwaysNotifyOnFinished);                                  // 0x0080(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction");
		return ptr;
	}


	TEnumAsByte<EAIRequestPriority> GetActionPriority();
	void Finish(TEnumAsByte<EPawnActionResult> WithResult);
	static class UPawnAction* STATIC_CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);
};

// Class AIModule.PawnAction_BlueprintBase
// 0x0017 (FullSize[0x0098] - InheritedSize[0x0081])
// LastOffsetWithSize(0x0081)
class UPawnAction_BlueprintBase : public UPawnAction
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_BlueprintBase");
		return ptr;
	}


	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionPause(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
};

// Class AIModule.PawnAction_Move
// 0x0038 (FullSize[0x00B9] - InheritedSize[0x0081])
// LastOffsetWithSize(0x0081)
#define PADDING_0A7D - 0x0000 // Minimum to subtract -> (0017)
class UPawnAction_Move : public UPawnAction
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0017 PADDING_0A7D, class AActor*,                                                         GoalActor);                                                // 0x0098(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x001F PADDING_0A7D, struct FVector,                                                        GoalLocation);                                             // 0x00A0(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x002B PADDING_0A7D, float,                                                                 AcceptableRadius);                                         // 0x00AC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x002F PADDING_0A7D, class UClass*,                                                         FilterClass);                                              // 0x00B0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0037 PADDING_0A7D, unsigned char,                                                         bAllowStrafe);                                             // 0x00B8(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0037 PADDING_0A7D, unsigned char,                                                         bFinishOnOverlap);                                         // 0x00B8(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0037 PADDING_0A7D, unsigned char,                                                         bUsePathfinding);                                          // 0x00B8(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0037 PADDING_0A7D, unsigned char,                                                         bAllowPartialPath);                                        // 0x00B8(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0037 PADDING_0A7D, unsigned char,                                                         bProjectGoalToNavigation);                                 // 0x00B8(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0037 PADDING_0A7D, unsigned char,                                                         bUpdatePathToGoal);                                        // 0x00B8(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0037 PADDING_0A7D, unsigned char,                                                         bAbortChildActionOnPathChange);                            // 0x00B8(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Move");
		return ptr;
	}


};

// Class AIModule.PawnAction_Repeat
// 0x0028 (FullSize[0x00A9] - InheritedSize[0x0081])
// LastOffsetWithSize(0x0081)
#define PADDING_0A7E - 0x0000 // Minimum to subtract -> (0017)
class UPawnAction_Repeat : public UPawnAction
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0017 PADDING_0A7E, class UPawnAction*,                                                    ActionToRepeat);                                           // 0x0098(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001F PADDING_0A7E, class UPawnAction*,                                                    RecentActionCopy);                                         // 0x00A0(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0027 PADDING_0A7E, TEnumAsByte<EPawnActionFailHandling>,                                  ChildFailureHandlingMode);                                 // 0x00A8(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Repeat");
		return ptr;
	}


};

// Class AIModule.PawnAction_Sequence
// 0x0037 (FullSize[0x00B8] - InheritedSize[0x0081])
// LastOffsetWithSize(0x0081)
#define PADDING_0A7F - 0x0000 // Minimum to subtract -> (0017)
class UPawnAction_Sequence : public UPawnAction
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0017 PADDING_0A7F, TArray<class UPawnAction*>,                                            ActionSequence);                                           // 0x0098(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0027 PADDING_0A7F, TEnumAsByte<EPawnActionFailHandling>,                                  ChildFailureHandlingMode);                                 // 0x00A8(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002F PADDING_0A7F, class UPawnAction*,                                                    RecentActionCopy);                                         // 0x00B0(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Sequence");
		return ptr;
	}


};

// Class AIModule.PawnAction_Wait
// 0x001B (FullSize[0x009C] - InheritedSize[0x0081])
// LastOffsetWithSize(0x0081)
#define PADDING_0A80 - 0x0000 // Minimum to subtract -> (0017)
class UPawnAction_Wait : public UPawnAction
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0017 PADDING_0A80, float,                                                                 TimeToWait);                                               // 0x0098(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Wait");
		return ptr;
	}


};

// Class AIModule.PawnActionsComponent
// 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_0A81 - 0x0000 // Minimum to subtract -> (0010)
class UPawnActionsComponent : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A81, class APawn*,                                                          ControlledPawn);                                           // 0x00D8(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0A81, TArray<struct FPawnActionStack>,                                       ActionStacks);                                             // 0x00E0(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0A81, TArray<struct FPawnActionEvent>,                                       ActionEvents);                                             // 0x00F0(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0A81, class UPawnAction*,                                                    CurrentAction);                                            // 0x0100(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnActionsComponent");
		return ptr;
	}


	bool K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, class UObject* Instigator);
	static bool STATIC_K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, TEnumAsByte<EAIRequestPriority> Priority);
	TEnumAsByte<EPawnActionAbortState> K2_ForceAbortAction(class UPawnAction* ActionToAbort);
	TEnumAsByte<EPawnActionAbortState> K2_AbortAction(class UPawnAction* ActionToAbort);
};

// Class AIModule.PawnSensingComponent
// 0x0058 (FullSize[0x0120] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_0A82 - 0x0000 // Minimum to subtract -> (0010)
class UPawnSensingComponent : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A82, float,                                                                 HearingThreshold);                                         // 0x00D8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0A82, float,                                                                 LOSHearingThreshold);                                      // 0x00DC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0A82, float,                                                                 SightRadius);                                              // 0x00E0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0A82, float,                                                                 SensingInterval);                                          // 0x00E4(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0A82, float,                                                                 HearingMaxSoundAge);                                       // 0x00E8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0A82, unsigned char,                                                         bEnableSensingUpdates);                                    // 0x00EC(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0A82, unsigned char,                                                         bOnlySensePlayers);                                        // 0x00EC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0A82, unsigned char,                                                         bSeePawns);                                                // 0x00EC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0A82, unsigned char,                                                         bHearNoises);                                              // 0x00EC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0A82, struct FScriptMulticastDelegate,                                       OnSeePawn);                                                // 0x00F8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0A82, struct FScriptMulticastDelegate,                                       OnHearNoise);                                              // 0x0108(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0A82, float,                                                                 PeripheralVisionAngle);                                    // 0x0118(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0054 PADDING_0A82, float,                                                                 PeripheralVisionCosine);                                   // 0x011C(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnSensingComponent");
		return ptr;
	}


	void SetSensingUpdatesEnabled(bool bEnabled);
	void SetSensingInterval(float NewSensingInterval);
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
	void SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume);
	float GetPeripheralVisionCosine();
	float GetPeripheralVisionAngle();
};

// Class AIModule.VisualLoggerExtension
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UVisualLoggerExtension : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.VisualLoggerExtension");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
