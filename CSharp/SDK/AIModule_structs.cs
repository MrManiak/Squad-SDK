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

// Enum AIModule.EAISenseNotifyType
public enum EAISenseNotifyType : byte
{
	EAISenseNotifyType__OnEveryPerception = 0,
	EAISenseNotifyType__OnPerceptionChange = 1,
	EAISenseNotifyType__EAISenseNotifyType_MAX = 2
}

// Enum AIModule.EAITaskPriority
public enum EAITaskPriority : byte
{
	EAITaskPriority__Lowest        = 0,
	EAITaskPriority__Low           = 1,
	EAITaskPriority__AutonomousAI  = 2,
	EAITaskPriority__High          = 3,
	EAITaskPriority__Ultimate      = 4,
	EAITaskPriority__EAITaskPriority_MAX = 5
}

// Enum AIModule.EGenericAICheck
public enum EGenericAICheck : byte
{
	EGenericAICheck__Less          = 0,
	EGenericAICheck__LessOrEqual   = 1,
	EGenericAICheck__Equal         = 2,
	EGenericAICheck__NotEqual      = 3,
	EGenericAICheck__GreaterOrEqual = 4,
	EGenericAICheck__Greater       = 5,
	EGenericAICheck__IsTrue        = 6,
	EGenericAICheck__MAX           = 7
}

// Enum AIModule.EAILockSource
public enum EAILockSource : byte
{
	EAILockSource__Animation       = 0,
	EAILockSource__Logic           = 1,
	EAILockSource__Script          = 2,
	EAILockSource__Gameplay        = 3,
	EAILockSource__MAX             = 4
}

// Enum AIModule.EAIRequestPriority
public enum EAIRequestPriority : byte
{
	EAIRequestPriority__SoftScript = 0,
	EAIRequestPriority__Logic      = 1,
	EAIRequestPriority__HardScript = 2,
	EAIRequestPriority__Reaction   = 3,
	EAIRequestPriority__Ultimate   = 4,
	EAIRequestPriority__MAX        = 5
}

// Enum AIModule.EPawnActionEventType
public enum EPawnActionEventType : byte
{
	EPawnActionEventType__Invalid  = 0,
	EPawnActionEventType__FailedToStart = 1,
	EPawnActionEventType__InstantAbort = 2,
	EPawnActionEventType__FinishedAborting = 3,
	EPawnActionEventType__FinishedExecution = 4,
	EPawnActionEventType__Push     = 5,
	EPawnActionEventType__EPawnActionEventType_MAX = 6
}

// Enum AIModule.EPawnActionResult
public enum EPawnActionResult : byte
{
	EPawnActionResult__NotStarted  = 0,
	EPawnActionResult__InProgress  = 1,
	EPawnActionResult__Success     = 2,
	EPawnActionResult__Failed      = 3,
	EPawnActionResult__Aborted     = 4,
	EPawnActionResult__EPawnActionResult_MAX = 5
}

// Enum AIModule.EPawnActionAbortState
public enum EPawnActionAbortState : byte
{
	EPawnActionAbortState__NeverStarted = 0,
	EPawnActionAbortState__NotBeingAborted = 1,
	EPawnActionAbortState__MarkPendingAbort = 2,
	EPawnActionAbortState__LatentAbortInProgress = 3,
	EPawnActionAbortState__AbortDone = 4,
	EPawnActionAbortState__MAX     = 5
}

// Enum AIModule.FAIDistanceType
public enum EFAIDistanceType : byte
{
	FAIDistanceType__Distance3D    = 0,
	FAIDistanceType__Distance2D    = 1,
	FAIDistanceType__DistanceZ     = 2,
	FAIDistanceType__MAX           = 3
}

// Enum AIModule.EAIOptionFlag
public enum EAIOptionFlag : byte
{
	EAIOptionFlag__Default         = 0,
	EAIOptionFlag__Enable          = 1,
	EAIOptionFlag__Disable         = 2,
	EAIOptionFlag__MAX             = 3
}

// Enum AIModule.EBTFlowAbortMode
public enum EBTFlowAbortMode : byte
{
	EBTFlowAbortMode__None         = 0,
	EBTFlowAbortMode__LowerPriority = 1,
	EBTFlowAbortMode__Self         = 2,
	EBTFlowAbortMode__Both         = 3,
	EBTFlowAbortMode__EBTFlowAbortMode_MAX = 4
}

// Enum AIModule.EBTNodeResult
public enum EBTNodeResult : byte
{
	EBTNodeResult__Succeeded       = 0,
	EBTNodeResult__Failed          = 1,
	EBTNodeResult__Aborted         = 2,
	EBTNodeResult__InProgress      = 3,
	EBTNodeResult__EBTNodeResult_MAX = 4
}

// Enum AIModule.ETextKeyOperation
public enum ETextKeyOperation : byte
{
	ETextKeyOperation__Equal       = 0,
	ETextKeyOperation__NotEqual    = 1,
	ETextKeyOperation__Contain     = 2,
	ETextKeyOperation__NotContain  = 3,
	ETextKeyOperation__ETextKeyOperation_MAX = 4
}

// Enum AIModule.EArithmeticKeyOperation
public enum EArithmeticKeyOperation : byte
{
	EArithmeticKeyOperation__Equal = 0,
	EArithmeticKeyOperation__NotEqual = 1,
	EArithmeticKeyOperation__Less  = 2,
	EArithmeticKeyOperation__LessOrEqual = 3,
	EArithmeticKeyOperation__Greater = 4,
	EArithmeticKeyOperation__GreaterOrEqual = 5,
	EArithmeticKeyOperation__EArithmeticKeyOperation_MAX = 6
}

// Enum AIModule.EBasicKeyOperation
public enum EBasicKeyOperation : byte
{
	EBasicKeyOperation__Set        = 0,
	EBasicKeyOperation__NotSet     = 1,
	EBasicKeyOperation__EBasicKeyOperation_MAX = 2
}

// Enum AIModule.EBTParallelMode
public enum EBTParallelMode : byte
{
	EBTParallelMode__AbortBackground = 0,
	EBTParallelMode__WaitForBackground = 1,
	EBTParallelMode__EBTParallelMode_MAX = 2
}

// Enum AIModule.EBTDecoratorLogic
public enum EBTDecoratorLogic : byte
{
	EBTDecoratorLogic__Invalid     = 0,
	EBTDecoratorLogic__Test        = 1,
	EBTDecoratorLogic__And         = 2,
	EBTDecoratorLogic__Or          = 3,
	EBTDecoratorLogic__Not         = 4,
	EBTDecoratorLogic__EBTDecoratorLogic_MAX = 5
}

// Enum AIModule.EBTChildIndex
public enum EBTChildIndex : byte
{
	EBTChildIndex__FirstNode       = 0,
	EBTChildIndex__TaskNode        = 1,
	EBTChildIndex__EBTChildIndex_MAX = 2
}

// Enum AIModule.EBTBlackboardRestart
public enum EBTBlackboardRestart : byte
{
	EBTBlackboardRestart__ValueChange = 0,
	EBTBlackboardRestart__ResultChange = 1,
	EBTBlackboardRestart__EBTBlackboardRestart_MAX = 2
}

// Enum AIModule.EBlackBoardEntryComparison
public enum EBlackBoardEntryComparison : byte
{
	EBlackBoardEntryComparison__Equal = 0,
	EBlackBoardEntryComparison__NotEqual = 1,
	EBlackBoardEntryComparison__EBlackBoardEntryComparison_MAX = 2
}

// Enum AIModule.EPathExistanceQueryType
public enum EPathExistanceQueryType : byte
{
	EPathExistanceQueryType__NavmeshRaycast2D = 0,
	EPathExistanceQueryType__HierarchicalQuery = 1,
	EPathExistanceQueryType__RegularPathFinding = 2,
	EPathExistanceQueryType__EPathExistanceQueryType_MAX = 3
}

// Enum AIModule.EPointOnCircleSpacingMethod
public enum EPointOnCircleSpacingMethod : byte
{
	EPointOnCircleSpacingMethod__BySpaceBetween = 0,
	EPointOnCircleSpacingMethod__ByNumberOfPoints = 1,
	EPointOnCircleSpacingMethod__EPointOnCircleSpacingMethod_MAX = 2
}

// Enum AIModule.EEQSNormalizationType
public enum EEQSNormalizationType : byte
{
	EEQSNormalizationType__Absolute = 0,
	EEQSNormalizationType__RelativeToScores = 1,
	EEQSNormalizationType__EEQSNormalizationType_MAX = 2
}

// Enum AIModule.EEnvTestDistance
public enum EEnvTestDistance : byte
{
	EEnvTestDistance__Distance3D   = 0,
	EEnvTestDistance__Distance2D   = 1,
	EEnvTestDistance__DistanceZ    = 2,
	EEnvTestDistance__DistanceAbsoluteZ = 3,
	EEnvTestDistance__EEnvTestDistance_MAX = 4
}

// Enum AIModule.EEnvTestDot
public enum EEnvTestDot : byte
{
	EEnvTestDot__Dot3D             = 0,
	EEnvTestDot__Dot2D             = 1,
	EEnvTestDot__EEnvTestDot_MAX   = 2
}

// Enum AIModule.EEnvTestPathfinding
public enum EEnvTestPathfinding : byte
{
	EEnvTestPathfinding__PathExist = 0,
	EEnvTestPathfinding__PathCost  = 1,
	EEnvTestPathfinding__PathLength = 2,
	EEnvTestPathfinding__EEnvTestPathfinding_MAX = 3
}

// Enum AIModule.EEnvQueryTestClamping
public enum EEnvQueryTestClamping : byte
{
	EEnvQueryTestClamping__None    = 0,
	EEnvQueryTestClamping__SpecifiedValue = 1,
	EEnvQueryTestClamping__FilterThreshold = 2,
	EEnvQueryTestClamping__EEnvQueryTestClamping_MAX = 3
}

// Enum AIModule.EEnvDirection
public enum EEnvDirection : byte
{
	EEnvDirection__TwoPoints       = 0,
	EEnvDirection__Rotation        = 1,
	EEnvDirection__EEnvDirection_MAX = 2
}

// Enum AIModule.EEnvOverlapShape
public enum EEnvOverlapShape : byte
{
	EEnvOverlapShape__Box          = 0,
	EEnvOverlapShape__Sphere       = 1,
	EEnvOverlapShape__Capsule      = 2,
	EEnvOverlapShape__EEnvOverlapShape_MAX = 3
}

// Enum AIModule.EEnvTraceShape
public enum EEnvTraceShape : byte
{
	EEnvTraceShape__Line           = 0,
	EEnvTraceShape__Box            = 1,
	EEnvTraceShape__Sphere         = 2,
	EEnvTraceShape__Capsule        = 3,
	EEnvTraceShape__EEnvTraceShape_MAX = 4
}

// Enum AIModule.EEnvQueryTrace
public enum EEnvQueryTrace : byte
{
	EEnvQueryTrace__None           = 0,
	EEnvQueryTrace__Navigation     = 1,
	EEnvQueryTrace__Geometry       = 2,
	EEnvQueryTrace__NavigationOverLedges = 3,
	EEnvQueryTrace__EEnvQueryTrace_MAX = 4
}

// Enum AIModule.EAIParamType
public enum EAIParamType : byte
{
	EAIParamType__Float            = 0,
	EAIParamType__Int              = 1,
	EAIParamType__Bool             = 2,
	EAIParamType__MAX              = 3
}

// Enum AIModule.EEnvQueryParam
public enum EEnvQueryParam : byte
{
	EEnvQueryParam__Float          = 0,
	EEnvQueryParam__Int            = 1,
	EEnvQueryParam__Bool           = 2,
	EEnvQueryParam__EEnvQueryParam_MAX = 3
}

// Enum AIModule.EEnvQueryRunMode
public enum EEnvQueryRunMode : byte
{
	EEnvQueryRunMode__SingleResult = 0,
	EEnvQueryRunMode__RandomBest5Pct = 1,
	EEnvQueryRunMode__RandomBest25Pct = 2,
	EEnvQueryRunMode__AllMatching  = 3,
	EEnvQueryRunMode__EEnvQueryRunMode_MAX = 4
}

// Enum AIModule.EEnvTestScoreOperator
public enum EEnvTestScoreOperator : byte
{
	EEnvTestScoreOperator__AverageScore = 0,
	EEnvTestScoreOperator__MinScore = 1,
	EEnvTestScoreOperator__MaxScore = 2,
	EEnvTestScoreOperator__EEnvTestScoreOperator_MAX = 3
}

// Enum AIModule.EEnvTestFilterOperator
public enum EEnvTestFilterOperator : byte
{
	EEnvTestFilterOperator__AllPass = 0,
	EEnvTestFilterOperator__AnyPass = 1,
	EEnvTestFilterOperator__EEnvTestFilterOperator_MAX = 2
}

// Enum AIModule.EEnvTestCost
public enum EEnvTestCost : byte
{
	EEnvTestCost__Low              = 0,
	EEnvTestCost__Medium           = 1,
	EEnvTestCost__High             = 2,
	EEnvTestCost__EEnvTestCost_MAX = 3
}

// Enum AIModule.EEnvTestWeight
public enum EEnvTestWeight : byte
{
	EEnvTestWeight__None           = 0,
	EEnvTestWeight__Square         = 1,
	EEnvTestWeight__Inverse        = 2,
	EEnvTestWeight__Unused         = 3,
	EEnvTestWeight__Constant       = 4,
	EEnvTestWeight__Skip           = 5,
	EEnvTestWeight__EEnvTestWeight_MAX = 6
}

// Enum AIModule.EEnvTestScoreEquation
public enum EEnvTestScoreEquation : byte
{
	EEnvTestScoreEquation__Linear  = 0,
	EEnvTestScoreEquation__Square  = 1,
	EEnvTestScoreEquation__InverseLinear = 2,
	EEnvTestScoreEquation__SquareRoot = 3,
	EEnvTestScoreEquation__Constant = 4,
	EEnvTestScoreEquation__EEnvTestScoreEquation_MAX = 5
}

// Enum AIModule.EEnvTestFilterType
public enum EEnvTestFilterType : byte
{
	EEnvTestFilterType__Minimum    = 0,
	EEnvTestFilterType__Maximum    = 1,
	EEnvTestFilterType__Range      = 2,
	EEnvTestFilterType__Match      = 3,
	EEnvTestFilterType__EEnvTestFilterType_MAX = 4
}

// Enum AIModule.EEnvTestPurpose
public enum EEnvTestPurpose : byte
{
	EEnvTestPurpose__Filter        = 0,
	EEnvTestPurpose__Score         = 1,
	EEnvTestPurpose__FilterAndScore = 2,
	EEnvTestPurpose__EEnvTestPurpose_MAX = 3
}

// Enum AIModule.EEnvQueryHightlightMode
public enum EEnvQueryHightlightMode : byte
{
	EEnvQueryHightlightMode__All   = 0,
	EEnvQueryHightlightMode__Best5Pct = 1,
	EEnvQueryHightlightMode__Best25Pct = 2,
	EEnvQueryHightlightMode__EEnvQueryHightlightMode_MAX = 3
}

// Enum AIModule.ETeamAttitude
public enum ETeamAttitude : byte
{
	ETeamAttitude__Friendly        = 0,
	ETeamAttitude__Neutral         = 1,
	ETeamAttitude__Hostile         = 2,
	ETeamAttitude__ETeamAttitude_MAX = 3
}

// Enum AIModule.EPathFollowingRequestResult
public enum EPathFollowingRequestResult : byte
{
	EPathFollowingRequestResult__Failed = 0,
	EPathFollowingRequestResult__AlreadyAtGoal = 1,
	EPathFollowingRequestResult__RequestSuccessful = 2,
	EPathFollowingRequestResult__EPathFollowingRequestResult_MAX = 3
}

// Enum AIModule.EPathFollowingAction
public enum EPathFollowingAction : byte
{
	EPathFollowingAction__Error    = 0,
	EPathFollowingAction__NoMove   = 1,
	EPathFollowingAction__DirectMove = 2,
	EPathFollowingAction__PartialPath = 3,
	EPathFollowingAction__PathToGoal = 4,
	EPathFollowingAction__EPathFollowingAction_MAX = 5
}

// Enum AIModule.EPathFollowingStatus
public enum EPathFollowingStatus : byte
{
	EPathFollowingStatus__Idle     = 0,
	EPathFollowingStatus__Waiting  = 1,
	EPathFollowingStatus__Paused   = 2,
	EPathFollowingStatus__Moving   = 3,
	EPathFollowingStatus__EPathFollowingStatus_MAX = 4
}

// Enum AIModule.EPawnActionFailHandling
public enum EPawnActionFailHandling : byte
{
	EPawnActionFailHandling__RequireSuccess = 0,
	EPawnActionFailHandling__IgnoreFailure = 1,
	EPawnActionFailHandling__EPawnActionFailHandling_MAX = 2
}

// Enum AIModule.EPawnSubActionTriggeringPolicy
public enum EPawnSubActionTriggeringPolicy : byte
{
	EPawnSubActionTriggeringPolicy__CopyBeforeTriggering = 0,
	EPawnSubActionTriggeringPolicy__ReuseInstances = 1,
	EPawnSubActionTriggeringPolicy__EPawnSubActionTriggeringPolicy_MAX = 2
}

// Enum AIModule.EPawnActionMoveMode
public enum EPawnActionMoveMode : byte
{
	EPawnActionMoveMode__UsePathfinding = 0,
	EPawnActionMoveMode__StraightLine = 1,
	EPawnActionMoveMode__EPawnActionMoveMode_MAX = 2
}

// Enum AIModule.EPathFollowingResult
public enum EPathFollowingResult : byte
{
	EPathFollowingResult__Success  = 0,
	EPathFollowingResult__Blocked  = 1,
	EPathFollowingResult__OffPath  = 2,
	EPathFollowingResult__Aborted  = 3,
	EPathFollowingResult__Skipped_DEPRECATED = 4,
	EPathFollowingResult__Invalid  = 5,
	EPathFollowingResult__EPathFollowingResult_MAX = 6
}

// Enum AIModule.EEnvQueryStatus
public enum EEnvQueryStatus : byte
{
	EEnvQueryStatus__Processing    = 0,
	EEnvQueryStatus__Success       = 1,
	EEnvQueryStatus__Failed        = 2,
	EEnvQueryStatus__Aborted       = 3,
	EEnvQueryStatus__OwnerLost     = 4,
	EEnvQueryStatus__MissingParam  = 5,
	EEnvQueryStatus__EEnvQueryStatus_MAX = 6
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AIModule.EnvNamedValue
// 0x0010
public class FEnvNamedValue : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offParamName                                                  = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EAIParamType>                       _offParamType                                                  = new ExternalOffset<EAIParamType>(0x0008, false);             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offValue                                                      = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               ParamName                                                      => _offParamName.GetValue();
	public EAIParamType                                        ParamType                                                      => _offParamType.GetValue();
	public float                                               Value                                                          => _offValue.GetValue();
	#endregion

	public FEnvNamedValue(FName c_ParamName, EAIParamType c_ParamType, float c_Value) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offParamName.SetValue(c_ParamName);
		_offParamType.SetValue(c_ParamType);
		_offValue.SetValue(c_Value);
	}
}
// ScriptStruct AIModule.GenericTeamId
// 0x0001
public class FGenericTeamId : ExternalClass
{
	#region Offsets
//	private ExternalOffset<char>                               _offTeamId                                                     = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	#endregion

	public FGenericTeamId() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct AIModule.PawnActionStack
// 0x0008
public class FPawnActionStack : ExternalClass
{
	#region Offsets
	private ExternalOffset<UPawnAction>                        _offTopAction                                                  = new ExternalOffset<UPawnAction>(0x0000, true);               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UPawnAction                                         TopAction                                                      => _offTopAction.GetValue();
	#endregion

	public FPawnActionStack(UPawnAction c_TopAction) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTopAction.SetValue(c_TopAction);
	}
}
// ScriptStruct AIModule.PawnActionEvent
// 0x0018
public class FPawnActionEvent : ExternalClass
{
	#region Offsets
	private ExternalOffset<UPawnAction>                        _offAction                                                     = new ExternalOffset<UPawnAction>(0x0000, true);               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UPawnAction                                         Action                                                         => _offAction.GetValue();
	#endregion

	public FPawnActionEvent(UPawnAction c_Action) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAction.SetValue(c_Action);
	}
}
// ScriptStruct AIModule.BlackboardKeySelector
// 0x0028
public class FBlackboardKeySelector : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<UBlackboardKeyType>>         _offAllowedTypes                                               = new ExternalOffset<TArray<UBlackboardKeyType>>(0x0000, false); // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offSelectedKeyName                                            = new ExternalOffset<FName>(0x0010, false);                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offSelectedKeyType                                            = new ExternalOffset<UClass>(0x0018, true);                    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offSelectedKeyID                                              = new ExternalOffset<char>(0x0020, false);                     // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                               _offbNoneIsAllowedValue                                        = new ExternalOffset<char>(0x0024, false);                     // 0x0024(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<UBlackboardKeyType>                          AllowedTypes                                                   => _offAllowedTypes.GetValue();
	public FName                                               SelectedKeyName                                                => _offSelectedKeyName.GetValue();
	public UClass                                              SelectedKeyType                                                => _offSelectedKeyType.GetValue();
	#endregion

	public FBlackboardKeySelector(TArray<UBlackboardKeyType> c_AllowedTypes, FName c_SelectedKeyName, UClass c_SelectedKeyType) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAllowedTypes.SetValue(c_AllowedTypes);
		_offSelectedKeyName.SetValue(c_SelectedKeyName);
		_offSelectedKeyType.SetValue(c_SelectedKeyType);
	}
}
// ScriptStruct AIModule.AIRequestID
// 0x0004
public class FAIRequestID : ExternalClass
{
	#region Offsets
	private ExternalOffset<uint>                               _offRequestID                                                  = new ExternalOffset<uint>(0x0000);                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public uint                                                RequestID                                                      => _offRequestID.GetValue();
	#endregion

	public FAIRequestID(uint c_RequestID) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRequestID.SetValue(c_RequestID);
	}
}
// ScriptStruct AIModule.AIStimulus
// 0x003C
public class FAIStimulus : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offAge                                                        = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                              _offExpirationAge                                              = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                              _offStrength                                                   = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offStimulusLocation                                           = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offReceiverLocation                                           = new ExternalOffset<FVector>(0x0018, false);                  // 0x0018(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offTag                                                        = new ExternalOffset<FName>(0x0024, false);                    // 0x0024(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbSuccessfullySensed                                        = new ExternalOffset<char>(0x0038, false);                     // 0x0038(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public float                                               Age                                                            => _offAge.GetValue();
	public float                                               ExpirationAge                                                  => _offExpirationAge.GetValue();
	public float                                               Strength                                                       => _offStrength.GetValue();
	public FVector                                             StimulusLocation                                               => _offStimulusLocation.GetValue();
	public FVector                                             ReceiverLocation                                               => _offReceiverLocation.GetValue();
	public FName                                               Tag                                                            => _offTag.GetValue();
	#endregion

	public FAIStimulus(float c_Age, float c_ExpirationAge, float c_Strength, FVector c_StimulusLocation, FVector c_ReceiverLocation, FName c_Tag) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAge.SetValue(c_Age);
		_offExpirationAge.SetValue(c_ExpirationAge);
		_offStrength.SetValue(c_Strength);
		_offStimulusLocation.SetValue(c_StimulusLocation);
		_offReceiverLocation.SetValue(c_ReceiverLocation);
		_offTag.SetValue(c_Tag);
	}
}
// ScriptStruct AIModule.ActorPerceptionBlueprintInfo
// 0x0020
public class FActorPerceptionBlueprintInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<AActor>                             _offTarget                                                     = new ExternalOffset<AActor>(0x0000, true);                    // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FAIStimulus>>                _offLastSensedStimuli                                          = new ExternalOffset<TArray<FAIStimulus>>(0x0008, false);      // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbIsHostile                                                 = new ExternalOffset<char>(0x0018, false);                     // 0x0018(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public AActor                                              Target                                                         => _offTarget.GetValue();
	public TArray<FAIStimulus>                                 LastSensedStimuli                                              => _offLastSensedStimuli.GetValue();
	#endregion

	public FActorPerceptionBlueprintInfo(AActor c_Target, TArray<FAIStimulus> c_LastSensedStimuli) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTarget.SetValue(c_Target);
		_offLastSensedStimuli.SetValue(c_LastSensedStimuli);
	}
}
// ScriptStruct AIModule.AIDataProviderValue
// 0x0020
public class FAIDataProviderValue : ExternalClass
{
	#region Offsets
	private ExternalOffset<UProperty>                          _offCachedProperty                                             = new ExternalOffset<UProperty>(0x0008, true);                 // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UAIDataProvider>                    _offDataBinding                                                = new ExternalOffset<UAIDataProvider>(0x0010, true);           // 0x0010(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offDataField                                                  = new ExternalOffset<FName>(0x0018, false);                    // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UProperty                                           CachedProperty                                                 => _offCachedProperty.GetValue();
	public UAIDataProvider                                     DataBinding                                                    => _offDataBinding.GetValue();
	public FName                                               DataField                                                      => _offDataField.GetValue();
	#endregion

	public FAIDataProviderValue(UProperty c_CachedProperty, UAIDataProvider c_DataBinding, FName c_DataField) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCachedProperty.SetValue(c_CachedProperty);
		_offDataBinding.SetValue(c_DataBinding);
		_offDataField.SetValue(c_DataField);
	}
}
// ScriptStruct AIModule.AIDataProviderTypedValue
// 0x0008 (0x0028 - 0x0020)
public class FAIDataProviderTypedValue : FAIDataProviderValue
{
	#region Offsets
	private ExternalOffset<UClass>                             _offPropertyType                                               = new ExternalOffset<UClass>(0x0020, true);                    // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              PropertyType                                                   => _offPropertyType.GetValue();
	#endregion

	public FAIDataProviderTypedValue(UClass c_PropertyType) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPropertyType.SetValue(c_PropertyType);
	}
}
// ScriptStruct AIModule.AIDataProviderBoolValue
// 0x0008 (0x0030 - 0x0028)
public class FAIDataProviderBoolValue : FAIDataProviderTypedValue
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offDefaultValue                                               = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      DefaultValue                                                   => _offDefaultValue.GetValue();
	#endregion

	public FAIDataProviderBoolValue(byte/*(bool)*/ c_DefaultValue) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDefaultValue.SetValue(c_DefaultValue);
	}
}
// ScriptStruct AIModule.AIDataProviderFloatValue
// 0x0008 (0x0030 - 0x0028)
public class FAIDataProviderFloatValue : FAIDataProviderTypedValue
{
	#region Offsets
	private ExternalOffset<float>                              _offDefaultValue                                               = new ExternalOffset<float>(0x0028);                           // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               DefaultValue                                                   => _offDefaultValue.GetValue();
	#endregion

	public FAIDataProviderFloatValue(float c_DefaultValue) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDefaultValue.SetValue(c_DefaultValue);
	}
}
// ScriptStruct AIModule.AIDataProviderIntValue
// 0x0008 (0x0030 - 0x0028)
public class FAIDataProviderIntValue : FAIDataProviderTypedValue
{
	#region Offsets
	private ExternalOffset<int>                                _offDefaultValue                                               = new ExternalOffset<int>(0x0028);                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 DefaultValue                                                   => _offDefaultValue.GetValue();
	#endregion

	public FAIDataProviderIntValue(int c_DefaultValue) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDefaultValue.SetValue(c_DefaultValue);
	}
}
// ScriptStruct AIModule.AIDataProviderStructValue
// 0x0010 (0x0030 - 0x0020)
public class FAIDataProviderStructValue : FAIDataProviderValue
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FAIDataProviderStructValue() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct AIModule.AISenseAffiliationFilter
// 0x0004
public class FAISenseAffiliationFilter : ExternalClass
{
	#region Offsets
//	private ExternalOffset<char>                               _offbDetectEnemies                                             = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbDetectNeutrals                                            = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbDetectFriendlies                                          = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	#endregion

	public FAISenseAffiliationFilter() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct AIModule.AIDamageEvent
// 0x0030
public class FAIDamageEvent : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offAmount                                                     = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offLocation                                                   = new ExternalOffset<FVector>(0x0004, false);                  // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offHitLocation                                                = new ExternalOffset<FVector>(0x0010, false);                  // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AActor>                             _offDamagedActor                                               = new ExternalOffset<AActor>(0x0020, true);                    // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AActor>                             _offInstigator                                                 = new ExternalOffset<AActor>(0x0028, true);                    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               Amount                                                         => _offAmount.GetValue();
	public FVector                                             Location                                                       => _offLocation.GetValue();
	public FVector                                             HitLocation                                                    => _offHitLocation.GetValue();
	public AActor                                              DamagedActor                                                   => _offDamagedActor.GetValue();
	public AActor                                              Instigator                                                     => _offInstigator.GetValue();
	#endregion

	public FAIDamageEvent(float c_Amount, FVector c_Location, FVector c_HitLocation, AActor c_DamagedActor, AActor c_Instigator) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAmount.SetValue(c_Amount);
		_offLocation.SetValue(c_Location);
		_offHitLocation.SetValue(c_HitLocation);
		_offDamagedActor.SetValue(c_DamagedActor);
		_offInstigator.SetValue(c_Instigator);
	}
}
// ScriptStruct AIModule.AINoiseEvent
// 0x0030
public class FAINoiseEvent : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offNoiseLocation                                              = new ExternalOffset<FVector>(0x0004, false);                  // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLoudness                                                   = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxRange                                                   = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AActor>                             _offInstigator                                                 = new ExternalOffset<AActor>(0x0018, true);                    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offTag                                                        = new ExternalOffset<FName>(0x0020, false);                    // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             NoiseLocation                                                  => _offNoiseLocation.GetValue();
	public float                                               Loudness                                                       => _offLoudness.GetValue();
	public float                                               MaxRange                                                       => _offMaxRange.GetValue();
	public AActor                                              Instigator                                                     => _offInstigator.GetValue();
	public FName                                               Tag                                                            => _offTag.GetValue();
	#endregion

	public FAINoiseEvent(FVector c_NoiseLocation, float c_Loudness, float c_MaxRange, AActor c_Instigator, FName c_Tag) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offNoiseLocation.SetValue(c_NoiseLocation);
		_offLoudness.SetValue(c_Loudness);
		_offMaxRange.SetValue(c_MaxRange);
		_offInstigator.SetValue(c_Instigator);
		_offTag.SetValue(c_Tag);
	}
}
// ScriptStruct AIModule.AIPredictionEvent
// 0x0018
public class FAIPredictionEvent : ExternalClass
{
	#region Offsets
	private ExternalOffset<AActor>                             _offRequestor                                                  = new ExternalOffset<AActor>(0x0000, true);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AActor>                             _offPredictedActor                                             = new ExternalOffset<AActor>(0x0008, true);                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public AActor                                              Requestor                                                      => _offRequestor.GetValue();
	public AActor                                              PredictedActor                                                 => _offPredictedActor.GetValue();
	#endregion

	public FAIPredictionEvent(AActor c_Requestor, AActor c_PredictedActor) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRequestor.SetValue(c_Requestor);
		_offPredictedActor.SetValue(c_PredictedActor);
	}
}
// ScriptStruct AIModule.AISightEvent
// 0x0018
public class FAISightEvent : ExternalClass
{
	#region Offsets
	private ExternalOffset<AActor>                             _offSeenActor                                                  = new ExternalOffset<AActor>(0x0008, true);                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AActor>                             _offObserver                                                   = new ExternalOffset<AActor>(0x0010, true);                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public AActor                                              SeenActor                                                      => _offSeenActor.GetValue();
	public AActor                                              Observer                                                       => _offObserver.GetValue();
	#endregion

	public FAISightEvent(AActor c_SeenActor, AActor c_Observer) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSeenActor.SetValue(c_SeenActor);
		_offObserver.SetValue(c_Observer);
	}
}
// ScriptStruct AIModule.AITeamStimulusEvent
// 0x0038
public class FAITeamStimulusEvent : ExternalClass
{
	#region Offsets
	private ExternalOffset<AActor>                             _offBroadcaster                                                = new ExternalOffset<AActor>(0x0028, true);                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<AActor>                             _offEnemy                                                      = new ExternalOffset<AActor>(0x0030, true);                    // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public AActor                                              Broadcaster                                                    => _offBroadcaster.GetValue();
	public AActor                                              Enemy                                                          => _offEnemy.GetValue();
	#endregion

	public FAITeamStimulusEvent(AActor c_Broadcaster, AActor c_Enemy) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBroadcaster.SetValue(c_Broadcaster);
		_offEnemy.SetValue(c_Enemy);
	}
}
// ScriptStruct AIModule.AITouchEvent
// 0x0020
public class FAITouchEvent : ExternalClass
{
	#region Offsets
	private ExternalOffset<AActor>                             _offTouchReceiver                                              = new ExternalOffset<AActor>(0x0010, true);                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AActor>                             _offOtherActor                                                 = new ExternalOffset<AActor>(0x0018, true);                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public AActor                                              TouchReceiver                                                  => _offTouchReceiver.GetValue();
	public AActor                                              OtherActor                                                     => _offOtherActor.GetValue();
	#endregion

	public FAITouchEvent(AActor c_TouchReceiver, AActor c_OtherActor) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTouchReceiver.SetValue(c_TouchReceiver);
		_offOtherActor.SetValue(c_OtherActor);
	}
}
// ScriptStruct AIModule.AIMoveRequest
// 0x0040
public class FAIMoveRequest : ExternalClass
{
	#region Offsets
	private ExternalOffset<AActor>                             _offGoalActor                                                  = new ExternalOffset<AActor>(0x0000, true);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public AActor                                              GoalActor                                                      => _offGoalActor.GetValue();
	#endregion

	public FAIMoveRequest(AActor c_GoalActor) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGoalActor.SetValue(c_GoalActor);
	}
}
// ScriptStruct AIModule.BehaviorTreeTemplateInfo
// 0x0018
public class FBehaviorTreeTemplateInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<UBehaviorTree>                      _offAsset                                                      = new ExternalOffset<UBehaviorTree>(0x0000, true);             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UBTCompositeNode>                   _offTemplate                                                   = new ExternalOffset<UBTCompositeNode>(0x0008, true);          // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UBehaviorTree                                       Asset                                                          => _offAsset.GetValue();
	public UBTCompositeNode                                    Template                                                       => _offTemplate.GetValue();
	#endregion

	public FBehaviorTreeTemplateInfo(UBehaviorTree c_Asset, UBTCompositeNode c_Template) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAsset.SetValue(c_Asset);
		_offTemplate.SetValue(c_Template);
	}
}
// ScriptStruct AIModule.BlackboardEntry
// 0x0018
public class FBlackboardEntry : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offEntryName                                                  = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UBlackboardKeyType>                 _offKeyType                                                    = new ExternalOffset<UBlackboardKeyType>(0x0008, true);        // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbInstanceSynced                                            = new ExternalOffset<char>(0x0010, false);                     // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               EntryName                                                      => _offEntryName.GetValue();
	public UBlackboardKeyType                                  KeyType                                                        => _offKeyType.GetValue();
	#endregion

	public FBlackboardEntry(FName c_EntryName, UBlackboardKeyType c_KeyType) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEntryName.SetValue(c_EntryName);
		_offKeyType.SetValue(c_KeyType);
	}
}
// ScriptStruct AIModule.BTDecoratorLogic
// 0x0004
public class FBTDecoratorLogic : ExternalClass
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<EBTDecoratorLogic>>     _offOperation                                                  = new ExternalOffset<TEnumAsByte<EBTDecoratorLogic>>(0x0000, false); // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ushort>                             _offNumber                                                     = new ExternalOffset<ushort>(0x0002);                          // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TEnumAsByte<EBTDecoratorLogic>                      Operation                                                      => _offOperation.GetValue();
	public ushort                                              Number                                                         => _offNumber.GetValue();
	#endregion

	public FBTDecoratorLogic(TEnumAsByte<EBTDecoratorLogic> c_Operation, ushort c_Number) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offOperation.SetValue(c_Operation);
		_offNumber.SetValue(c_Number);
	}
}
// ScriptStruct AIModule.BTCompositeChild
// 0x0030
public class FBTCompositeChild : ExternalClass
{
	#region Offsets
	private ExternalOffset<UBTCompositeNode>                   _offChildComposite                                             = new ExternalOffset<UBTCompositeNode>(0x0000, true);          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UBTTaskNode>                        _offChildTask                                                  = new ExternalOffset<UBTTaskNode>(0x0008, true);               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UBTDecorator>>               _offDecorators                                                 = new ExternalOffset<TArray<UBTDecorator>>(0x0010, false);     // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FBTDecoratorLogic>>          _offDecoratorOps                                               = new ExternalOffset<TArray<FBTDecoratorLogic>>(0x0020, false); // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UBTCompositeNode                                    ChildComposite                                                 => _offChildComposite.GetValue();
	public UBTTaskNode                                         ChildTask                                                      => _offChildTask.GetValue();
	public TArray<UBTDecorator>                                Decorators                                                     => _offDecorators.GetValue();
	public TArray<FBTDecoratorLogic>                           DecoratorOps                                                   => _offDecoratorOps.GetValue();
	#endregion

	public FBTCompositeChild(UBTCompositeNode c_ChildComposite, UBTTaskNode c_ChildTask, TArray<UBTDecorator> c_Decorators, TArray<FBTDecoratorLogic> c_DecoratorOps) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offChildComposite.SetValue(c_ChildComposite);
		_offChildTask.SetValue(c_ChildTask);
		_offDecorators.SetValue(c_Decorators);
		_offDecoratorOps.SetValue(c_DecoratorOps);
	}
}
// ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
// 0x0020
public class FCrowdAvoidanceSamplingPattern : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<float>>                      _offAngles                                                     = new ExternalOffset<TArray<float>>(0x0000, false);            // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<float>>                      _offRadii                                                      = new ExternalOffset<TArray<float>>(0x0010, false);            // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<float>                                       Angles                                                         => _offAngles.GetValue();
	public TArray<float>                                       Radii                                                          => _offRadii.GetValue();
	#endregion

	public FCrowdAvoidanceSamplingPattern(TArray<float> c_Angles, TArray<float> c_Radii) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAngles.SetValue(c_Angles);
		_offRadii.SetValue(c_Radii);
	}
}
// ScriptStruct AIModule.CrowdAvoidanceConfig
// 0x001C
public class FCrowdAvoidanceConfig : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offVelocityBias                                               = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDesiredVelocityWeight                                      = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCurrentVelocityWeight                                      = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSideBiasWeight                                             = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offImpactTimeWeight                                           = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offImpactTimeRange                                            = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offCustomPatternIdx                                           = new ExternalOffset<char>(0x0018, false);                     // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offAdaptiveDivisions                                          = new ExternalOffset<char>(0x0019, false);                     // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offAdaptiveRings                                              = new ExternalOffset<char>(0x001A, false);                     // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offAdaptiveDepth                                              = new ExternalOffset<char>(0x001B, false);                     // 0x001B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               VelocityBias                                                   => _offVelocityBias.GetValue();
	public float                                               DesiredVelocityWeight                                          => _offDesiredVelocityWeight.GetValue();
	public float                                               CurrentVelocityWeight                                          => _offCurrentVelocityWeight.GetValue();
	public float                                               SideBiasWeight                                                 => _offSideBiasWeight.GetValue();
	public float                                               ImpactTimeWeight                                               => _offImpactTimeWeight.GetValue();
	public float                                               ImpactTimeRange                                                => _offImpactTimeRange.GetValue();
	#endregion

	public FCrowdAvoidanceConfig(float c_VelocityBias, float c_DesiredVelocityWeight, float c_CurrentVelocityWeight, float c_SideBiasWeight, float c_ImpactTimeWeight, float c_ImpactTimeRange) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVelocityBias.SetValue(c_VelocityBias);
		_offDesiredVelocityWeight.SetValue(c_DesiredVelocityWeight);
		_offCurrentVelocityWeight.SetValue(c_CurrentVelocityWeight);
		_offSideBiasWeight.SetValue(c_SideBiasWeight);
		_offImpactTimeWeight.SetValue(c_ImpactTimeWeight);
		_offImpactTimeRange.SetValue(c_ImpactTimeRange);
	}
}
// ScriptStruct AIModule.EnvQueryInstanceCache
// 0x0178
public class FEnvQueryInstanceCache : ExternalClass
{
	#region Offsets
	private ExternalOffset<UEnvQuery>                          _offTemplate                                                   = new ExternalOffset<UEnvQuery>(0x0000, true);                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UEnvQuery                                           Template                                                       => _offTemplate.GetValue();
	#endregion

	public FEnvQueryInstanceCache(UEnvQuery c_Template) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTemplate.SetValue(c_Template);
	}
}
// ScriptStruct AIModule.EnvQueryRequest
// 0x0068
public class FEnvQueryRequest : ExternalClass
{
	#region Offsets
	private ExternalOffset<UEnvQuery>                          _offQueryTemplate                                              = new ExternalOffset<UEnvQuery>(0x0000, true);                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UObject>                            _offOwner                                                      = new ExternalOffset<UObject>(0x0008, true);                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UWorld>                             _offWorld                                                      = new ExternalOffset<UWorld>(0x0010, true);                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UEnvQuery                                           QueryTemplate                                                  => _offQueryTemplate.GetValue();
	public UObject                                             Owner                                                          => _offOwner.GetValue();
	public UWorld                                              World                                                          => _offWorld.GetValue();
	#endregion

	public FEnvQueryRequest(UEnvQuery c_QueryTemplate, UObject c_Owner, UWorld c_World) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offQueryTemplate.SetValue(c_QueryTemplate);
		_offOwner.SetValue(c_Owner);
		_offWorld.SetValue(c_World);
	}
}
// ScriptStruct AIModule.AIDynamicParam
// 0x0038
public class FAIDynamicParam : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offParamName                                                  = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EAIParamType>                       _offParamType                                                  = new ExternalOffset<EAIParamType>(0x0008, false);             // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offValue                                                      = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FBlackboardKeySelector>             _offBBKey                                                      = new ExternalOffset<FBlackboardKeySelector>(0x0010, false);   // 0x0010(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               ParamName                                                      => _offParamName.GetValue();
	public EAIParamType                                        ParamType                                                      => _offParamType.GetValue();
	public float                                               Value                                                          => _offValue.GetValue();
	public FBlackboardKeySelector                              BBKey                                                          => _offBBKey.GetValue();
	#endregion

	public FAIDynamicParam(FName c_ParamName, EAIParamType c_ParamType, float c_Value, FBlackboardKeySelector c_BBKey) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offParamName.SetValue(c_ParamName);
		_offParamType.SetValue(c_ParamType);
		_offValue.SetValue(c_Value);
		_offBBKey.SetValue(c_BBKey);
	}
}
// ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
// 0x0048
public class FEQSParametrizedQueryExecutionRequest : ExternalClass
{
	#region Offsets
	private ExternalOffset<UEnvQuery>                          _offQueryTemplate                                              = new ExternalOffset<UEnvQuery>(0x0000, true);                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FAIDynamicParam>>            _offQueryConfig                                                = new ExternalOffset<TArray<FAIDynamicParam>>(0x0008, false);  // 0x0008(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FBlackboardKeySelector>             _offEQSQueryBlackboardKey                                      = new ExternalOffset<FBlackboardKeySelector>(0x0018, false);   // 0x0018(0x0028) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EEnvQueryRunMode>>      _offRunMode                                                    = new ExternalOffset<TEnumAsByte<EEnvQueryRunMode>>(0x0040, false); // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbUseBBKeyForQueryTemplate                                  = new ExternalOffset<char>(0x0044, false);                     // 0x0044(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UEnvQuery                                           QueryTemplate                                                  => _offQueryTemplate.GetValue();
	public TArray<FAIDynamicParam>                             QueryConfig                                                    => _offQueryConfig.GetValue();
	public FBlackboardKeySelector                              EQSQueryBlackboardKey                                          => _offEQSQueryBlackboardKey.GetValue();
	public TEnumAsByte<EEnvQueryRunMode>                       RunMode                                                        => _offRunMode.GetValue();
	#endregion

	public FEQSParametrizedQueryExecutionRequest(UEnvQuery c_QueryTemplate, TArray<FAIDynamicParam> c_QueryConfig, FBlackboardKeySelector c_EQSQueryBlackboardKey, TEnumAsByte<EEnvQueryRunMode> c_RunMode) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offQueryTemplate.SetValue(c_QueryTemplate);
		_offQueryConfig.SetValue(c_QueryConfig);
		_offEQSQueryBlackboardKey.SetValue(c_EQSQueryBlackboardKey);
		_offRunMode.SetValue(c_RunMode);
	}
}
// ScriptStruct AIModule.EnvQueryResult
// 0x0040
public class FEnvQueryResult : ExternalClass
{
	#region Offsets
	private ExternalOffset<UClass>                             _offItemType                                                   = new ExternalOffset<UClass>(0x0010, true);                    // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offOptionIndex                                                = new ExternalOffset<int>(0x002C);                             // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offQueryID                                                    = new ExternalOffset<int>(0x0030);                             // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              ItemType                                                       => _offItemType.GetValue();
	public int                                                 OptionIndex                                                    => _offOptionIndex.GetValue();
	public int                                                 QueryID                                                        => _offQueryID.GetValue();
	#endregion

	public FEnvQueryResult(UClass c_ItemType, int c_OptionIndex, int c_QueryID) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offItemType.SetValue(c_ItemType);
		_offOptionIndex.SetValue(c_OptionIndex);
		_offQueryID.SetValue(c_QueryID);
	}
}
// ScriptStruct AIModule.EnvOverlapData
// 0x0020
public class FEnvOverlapData : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offExtentX                                                    = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offExtentY                                                    = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offExtentZ                                                    = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offShapeOffset                                                = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ECollisionChannel>>     _offOverlapChannel                                             = new ExternalOffset<TEnumAsByte<ECollisionChannel>>(0x0018, false); // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EEnvOverlapShape>>      _offOverlapShape                                               = new ExternalOffset<TEnumAsByte<EEnvOverlapShape>>(0x0019, false); // 0x0019(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOnlyBlockingHits                                          = new ExternalOffset<char>(0x001C, false);                     // 0x001C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverlapComplex                                            = new ExternalOffset<char>(0x001C, false);                     // 0x001C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbSkipOverlapQuerier                                        = new ExternalOffset<char>(0x001C, false);                     // 0x001C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               ExtentX                                                        => _offExtentX.GetValue();
	public float                                               ExtentY                                                        => _offExtentY.GetValue();
	public float                                               ExtentZ                                                        => _offExtentZ.GetValue();
	public FVector                                             ShapeOffset                                                    => _offShapeOffset.GetValue();
	public TEnumAsByte<ECollisionChannel>                      OverlapChannel                                                 => _offOverlapChannel.GetValue();
	public TEnumAsByte<EEnvOverlapShape>                       OverlapShape                                                   => _offOverlapShape.GetValue();
	#endregion

	public FEnvOverlapData(float c_ExtentX, float c_ExtentY, float c_ExtentZ, FVector c_ShapeOffset, TEnumAsByte<ECollisionChannel> c_OverlapChannel, TEnumAsByte<EEnvOverlapShape> c_OverlapShape) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offExtentX.SetValue(c_ExtentX);
		_offExtentY.SetValue(c_ExtentY);
		_offExtentZ.SetValue(c_ExtentZ);
		_offShapeOffset.SetValue(c_ShapeOffset);
		_offOverlapChannel.SetValue(c_OverlapChannel);
		_offOverlapShape.SetValue(c_OverlapShape);
	}
}
// ScriptStruct AIModule.EnvTraceData
// 0x0030
public class FEnvTraceData : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offVersionNum                                                 = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offNavigationFilter                                           = new ExternalOffset<UClass>(0x0008, true);                    // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offProjectDown                                                = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offProjectUp                                                  = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offExtentX                                                    = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offExtentY                                                    = new ExternalOffset<float>(0x001C);                           // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offExtentZ                                                    = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPostProjectionVerticalOffset                               = new ExternalOffset<float>(0x0024);                           // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ETraceTypeQuery>>       _offTraceChannel                                               = new ExternalOffset<TEnumAsByte<ETraceTypeQuery>>(0x0028, false); // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ECollisionChannel>>     _offSerializedChannel                                          = new ExternalOffset<TEnumAsByte<ECollisionChannel>>(0x0029, false); // 0x0029(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EEnvTraceShape>>        _offTraceShape                                                 = new ExternalOffset<TEnumAsByte<EEnvTraceShape>>(0x002A, false); // 0x002A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EEnvQueryTrace>>        _offTraceMode                                                  = new ExternalOffset<TEnumAsByte<EEnvQueryTrace>>(0x002B, false); // 0x002B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbTraceComplex                                              = new ExternalOffset<char>(0x002C, false);                     // 0x002C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOnlyBlockingHits                                          = new ExternalOffset<char>(0x002C, false);                     // 0x002C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbCanTraceOnNavMesh                                         = new ExternalOffset<char>(0x002C, false);                     // 0x002C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbCanTraceOnGeometry                                        = new ExternalOffset<char>(0x002C, false);                     // 0x002C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbCanDisableTrace                                           = new ExternalOffset<char>(0x002C, false);                     // 0x002C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbCanProjectDown                                            = new ExternalOffset<char>(0x002C, false);                     // 0x002C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 VersionNum                                                     => _offVersionNum.GetValue();
	public UClass                                              NavigationFilter                                               => _offNavigationFilter.GetValue();
	public float                                               ProjectDown                                                    => _offProjectDown.GetValue();
	public float                                               ProjectUp                                                      => _offProjectUp.GetValue();
	public float                                               ExtentX                                                        => _offExtentX.GetValue();
	public float                                               ExtentY                                                        => _offExtentY.GetValue();
	public float                                               ExtentZ                                                        => _offExtentZ.GetValue();
	public float                                               PostProjectionVerticalOffset                                   => _offPostProjectionVerticalOffset.GetValue();
	public TEnumAsByte<ETraceTypeQuery>                        TraceChannel                                                   => _offTraceChannel.GetValue();
	public TEnumAsByte<ECollisionChannel>                      SerializedChannel                                              => _offSerializedChannel.GetValue();
	public TEnumAsByte<EEnvTraceShape>                         TraceShape                                                     => _offTraceShape.GetValue();
	public TEnumAsByte<EEnvQueryTrace>                         TraceMode                                                      => _offTraceMode.GetValue();
	#endregion

	public FEnvTraceData(int c_VersionNum, UClass c_NavigationFilter, float c_ProjectDown, float c_ProjectUp, float c_ExtentX, float c_ExtentY, float c_ExtentZ, float c_PostProjectionVerticalOffset, TEnumAsByte<ETraceTypeQuery> c_TraceChannel, TEnumAsByte<ECollisionChannel> c_SerializedChannel, TEnumAsByte<EEnvTraceShape> c_TraceShape, TEnumAsByte<EEnvQueryTrace> c_TraceMode) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVersionNum.SetValue(c_VersionNum);
		_offNavigationFilter.SetValue(c_NavigationFilter);
		_offProjectDown.SetValue(c_ProjectDown);
		_offProjectUp.SetValue(c_ProjectUp);
		_offExtentX.SetValue(c_ExtentX);
		_offExtentY.SetValue(c_ExtentY);
		_offExtentZ.SetValue(c_ExtentZ);
		_offPostProjectionVerticalOffset.SetValue(c_PostProjectionVerticalOffset);
		_offTraceChannel.SetValue(c_TraceChannel);
		_offSerializedChannel.SetValue(c_SerializedChannel);
		_offTraceShape.SetValue(c_TraceShape);
		_offTraceMode.SetValue(c_TraceMode);
	}
}
// ScriptStruct AIModule.EnvDirection
// 0x0020
public class FEnvDirection : ExternalClass
{
	#region Offsets
	private ExternalOffset<UClass>                             _offLineFrom                                                   = new ExternalOffset<UClass>(0x0000, true);                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offLineTo                                                     = new ExternalOffset<UClass>(0x0008, true);                    // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offRotation                                                   = new ExternalOffset<UClass>(0x0010, true);                    // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EEnvDirection>>         _offDirMode                                                    = new ExternalOffset<TEnumAsByte<EEnvDirection>>(0x0018, false); // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              LineFrom                                                       => _offLineFrom.GetValue();
	public UClass                                              LineTo                                                         => _offLineTo.GetValue();
	public UClass                                              Rotation                                                       => _offRotation.GetValue();
	public TEnumAsByte<EEnvDirection>                          DirMode                                                        => _offDirMode.GetValue();
	#endregion

	public FEnvDirection(UClass c_LineFrom, UClass c_LineTo, UClass c_Rotation, TEnumAsByte<EEnvDirection> c_DirMode) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLineFrom.SetValue(c_LineFrom);
		_offLineTo.SetValue(c_LineTo);
		_offRotation.SetValue(c_Rotation);
		_offDirMode.SetValue(c_DirMode);
	}
}

}