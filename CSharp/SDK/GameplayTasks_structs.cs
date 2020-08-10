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

// Enum GameplayTasks.ETaskResourceOverlapPolicy
public enum ETaskResourceOverlapPolicy : byte
{
	ETaskResourceOverlapPolicy__StartOnTop = 0,
	ETaskResourceOverlapPolicy__StartAtEnd = 1,
	ETaskResourceOverlapPolicy__ETaskResourceOverlapPolicy_MAX = 2
}

// Enum GameplayTasks.EGameplayTaskState
public enum EGameplayTaskState : byte
{
	EGameplayTaskState__Uninitialized = 0,
	EGameplayTaskState__AwaitingActivation = 1,
	EGameplayTaskState__Paused     = 2,
	EGameplayTaskState__Active     = 3,
	EGameplayTaskState__Finished   = 4,
	EGameplayTaskState__EGameplayTaskState_MAX = 5
}

// Enum GameplayTasks.EGameplayTaskRunResult
public enum EGameplayTaskRunResult : byte
{
	EGameplayTaskRunResult__Error  = 0,
	EGameplayTaskRunResult__Failed = 1,
	EGameplayTaskRunResult__Success_Paused = 2,
	EGameplayTaskRunResult__Success_Active = 3,
	EGameplayTaskRunResult__Success_Finished = 4,
	EGameplayTaskRunResult__EGameplayTaskRunResult_MAX = 5
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayTasks.GameplayResourceSet
// 0x0002
public class FGameplayResourceSet : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FGameplayResourceSet() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}

}