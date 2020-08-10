// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimationSharing.AnimationSetup
// 0x0018
public class FAnimationSetup : ExternalClass
{
	#region Offsets
	private ExternalOffset<UAnimSequence>                      _offAnimSequence                                               = new ExternalOffset<UAnimSequence>(0x0000, true);             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offAnimBlueprint                                              = new ExternalOffset<UClass>(0x0008, true);                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FPerPlatformInt>                    _offNumRandomizedInstances                                     = new ExternalOffset<FPerPlatformInt>(0x0010, false);          // 0x0010(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FPerPlatformBool>                   _offEnabled                                                    = new ExternalOffset<FPerPlatformBool>(0x0014, false);         // 0x0014(0x0001) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UAnimSequence                                       AnimSequence                                                   => _offAnimSequence.GetValue();
	public UClass                                              AnimBlueprint                                                  => _offAnimBlueprint.GetValue();
	public FPerPlatformInt                                     NumRandomizedInstances                                         => _offNumRandomizedInstances.GetValue();
	public FPerPlatformBool                                    Enabled                                                        => _offEnabled.GetValue();
	#endregion

	public FAnimationSetup(UAnimSequence c_AnimSequence, UClass c_AnimBlueprint, FPerPlatformInt c_NumRandomizedInstances, FPerPlatformBool c_Enabled) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAnimSequence.SetValue(c_AnimSequence);
		_offAnimBlueprint.SetValue(c_AnimBlueprint);
		_offNumRandomizedInstances.SetValue(c_NumRandomizedInstances);
		_offEnabled.SetValue(c_Enabled);
	}
}
// ScriptStruct AnimationSharing.AnimationStateEntry
// 0x0030
public class FAnimationStateEntry : ExternalClass
{
	#region Offsets
//	private ExternalOffset<char>                               _offState                                                      = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FAnimationSetup>>            _offAnimationSetups                                            = new ExternalOffset<TArray<FAnimationSetup>>(0x0008, false);  // 0x0008(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbOnDemand                                                  = new ExternalOffset<byte/*(bool)*/>(0x0018);                  // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbAdditive                                                  = new ExternalOffset<byte/*(bool)*/>(0x0019);                  // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offBlendTime                                                  = new ExternalOffset<float>(0x001C);                           // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbReturnToPreviousState                                     = new ExternalOffset<byte/*(bool)*/>(0x0020);                  // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbSetNextState                                              = new ExternalOffset<byte/*(bool)*/>(0x0021);                  // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offNextState                                                  = new ExternalOffset<char>(0x0022, false);                     // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FPerPlatformInt>                    _offMaximumNumberOfConcurrentInstances                         = new ExternalOffset<FPerPlatformInt>(0x0024, false);          // 0x0024(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offWiggleTimePercentage                                       = new ExternalOffset<float>(0x0028);                           // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbRequiresCurves                                            = new ExternalOffset<byte/*(bool)*/>(0x002C);                  // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FAnimationSetup>                             AnimationSetups                                                => _offAnimationSetups.GetValue();
	public byte/*(bool)*/                                      bOnDemand                                                      => _offbOnDemand.GetValue();
	public byte/*(bool)*/                                      bAdditive                                                      => _offbAdditive.GetValue();
	public float                                               BlendTime                                                      => _offBlendTime.GetValue();
	public byte/*(bool)*/                                      bReturnToPreviousState                                         => _offbReturnToPreviousState.GetValue();
	public byte/*(bool)*/                                      bSetNextState                                                  => _offbSetNextState.GetValue();
	public FPerPlatformInt                                     MaximumNumberOfConcurrentInstances                             => _offMaximumNumberOfConcurrentInstances.GetValue();
	public float                                               WiggleTimePercentage                                           => _offWiggleTimePercentage.GetValue();
	public byte/*(bool)*/                                      bRequiresCurves                                                => _offbRequiresCurves.GetValue();
	#endregion

	public FAnimationStateEntry(TArray<FAnimationSetup> c_AnimationSetups, byte/*(bool)*/ c_bOnDemand, byte/*(bool)*/ c_bAdditive, float c_BlendTime, byte/*(bool)*/ c_bReturnToPreviousState, byte/*(bool)*/ c_bSetNextState, FPerPlatformInt c_MaximumNumberOfConcurrentInstances, float c_WiggleTimePercentage, byte/*(bool)*/ c_bRequiresCurves) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAnimationSetups.SetValue(c_AnimationSetups);
		_offbOnDemand.SetValue(c_bOnDemand);
		_offbAdditive.SetValue(c_bAdditive);
		_offBlendTime.SetValue(c_BlendTime);
		_offbReturnToPreviousState.SetValue(c_bReturnToPreviousState);
		_offbSetNextState.SetValue(c_bSetNextState);
		_offMaximumNumberOfConcurrentInstances.SetValue(c_MaximumNumberOfConcurrentInstances);
		_offWiggleTimePercentage.SetValue(c_WiggleTimePercentage);
		_offbRequiresCurves.SetValue(c_bRequiresCurves);
	}
}
// ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup
// 0x0038
public class FPerSkeletonAnimationSharingSetup : ExternalClass
{
	#region Offsets
	private ExternalOffset<USkeleton>                          _offSkeleton                                                   = new ExternalOffset<USkeleton>(0x0000, true);                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USkeletalMesh>                      _offSkeletalMesh                                               = new ExternalOffset<USkeletalMesh>(0x0008, true);             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offBlendAnimBlueprint                                         = new ExternalOffset<UClass>(0x0010, true);                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offAdditiveAnimBlueprint                                      = new ExternalOffset<UClass>(0x0018, true);                    // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offStateProcessorClass                                        = new ExternalOffset<UClass>(0x0020, true);                    // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FAnimationStateEntry>>       _offAnimationStates                                            = new ExternalOffset<TArray<FAnimationStateEntry>>(0x0028, false); // 0x0028(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public USkeleton                                           Skeleton                                                       => _offSkeleton.GetValue();
	public USkeletalMesh                                       SkeletalMesh                                                   => _offSkeletalMesh.GetValue();
	public UClass                                              BlendAnimBlueprint                                             => _offBlendAnimBlueprint.GetValue();
	public UClass                                              AdditiveAnimBlueprint                                          => _offAdditiveAnimBlueprint.GetValue();
	public UClass                                              StateProcessorClass                                            => _offStateProcessorClass.GetValue();
	public TArray<FAnimationStateEntry>                        AnimationStates                                                => _offAnimationStates.GetValue();
	#endregion

	public FPerSkeletonAnimationSharingSetup(USkeleton c_Skeleton, USkeletalMesh c_SkeletalMesh, UClass c_BlendAnimBlueprint, UClass c_AdditiveAnimBlueprint, UClass c_StateProcessorClass, TArray<FAnimationStateEntry> c_AnimationStates) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSkeleton.SetValue(c_Skeleton);
		_offSkeletalMesh.SetValue(c_SkeletalMesh);
		_offBlendAnimBlueprint.SetValue(c_BlendAnimBlueprint);
		_offAdditiveAnimBlueprint.SetValue(c_AdditiveAnimBlueprint);
		_offStateProcessorClass.SetValue(c_StateProcessorClass);
		_offAnimationStates.SetValue(c_AnimationStates);
	}
}
// ScriptStruct AnimationSharing.AnimationSharingScalability
// 0x0010
public class FAnimationSharingScalability : ExternalClass
{
	#region Offsets
	private ExternalOffset<FPerPlatformBool>                   _offUseBlendTransitions                                        = new ExternalOffset<FPerPlatformBool>(0x0000, false);         // 0x0000(0x0001) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FPerPlatformFloat>                  _offBlendSignificanceValue                                     = new ExternalOffset<FPerPlatformFloat>(0x0004, false);        // 0x0004(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FPerPlatformInt>                    _offMaximumNumberConcurrentBlends                              = new ExternalOffset<FPerPlatformInt>(0x0008, false);          // 0x0008(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FPerPlatformFloat>                  _offTickSignificanceValue                                      = new ExternalOffset<FPerPlatformFloat>(0x000C, false);        // 0x000C(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPerPlatformBool                                    UseBlendTransitions                                            => _offUseBlendTransitions.GetValue();
	public FPerPlatformFloat                                   BlendSignificanceValue                                         => _offBlendSignificanceValue.GetValue();
	public FPerPlatformInt                                     MaximumNumberConcurrentBlends                                  => _offMaximumNumberConcurrentBlends.GetValue();
	public FPerPlatformFloat                                   TickSignificanceValue                                          => _offTickSignificanceValue.GetValue();
	#endregion

	public FAnimationSharingScalability(FPerPlatformBool c_UseBlendTransitions, FPerPlatformFloat c_BlendSignificanceValue, FPerPlatformInt c_MaximumNumberConcurrentBlends, FPerPlatformFloat c_TickSignificanceValue) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offUseBlendTransitions.SetValue(c_UseBlendTransitions);
		_offBlendSignificanceValue.SetValue(c_BlendSignificanceValue);
		_offMaximumNumberConcurrentBlends.SetValue(c_MaximumNumberConcurrentBlends);
		_offTickSignificanceValue.SetValue(c_TickSignificanceValue);
	}
}
// ScriptStruct AnimationSharing.TickAnimationSharingFunction
// 0x0008 (0x0058 - 0x0050)
public class FTickAnimationSharingFunction : FTickFunction
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FTickAnimationSharingFunction() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}

}