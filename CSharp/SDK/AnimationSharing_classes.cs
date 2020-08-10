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

// Class AnimationSharing.AnimSharingStateInstance
// 0x0108 (0x0288 - 0x0180)
public class UAnimSharingStateInstance : UAnimInstance
{
	#region Offsets
	private ExternalOffset<UAnimSequence>                     _offAnimationToPlay                                            = new ExternalOffset<UAnimSequence>(0x0268, true);             // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offPermutationTimeOffset                                      = new ExternalOffset<float>(0x0270);                           // 0x0270(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offPlayRate                                                   = new ExternalOffset<float>(0x0274);                           // 0x0274(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbStateBool                                                 = new ExternalOffset<byte/*(bool)*/>(0x0278);                  // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UAnimSharingInstance>              _offinstance                                                   = new ExternalOffset<UAnimSharingInstance>(0x0280, true);      // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UAnimSequence                                      AnimationToPlay                                                => _offAnimationToPlay.GetValue();
	public float                                              PermutationTimeOffset                                          => _offPermutationTimeOffset.GetValue();
	public float                                              PlayRate                                                       => _offPlayRate.GetValue();
	public byte/*(bool)*/                                     bStateBool                                                     => _offbStateBool.GetValue();
	public UAnimSharingInstance                               instance                                                       => _offinstance.GetValue();
	#endregion


}

// Class AnimationSharing.AnimSharingTransitionInstance
// 0x00FD (0x027D - 0x0180)
public class UAnimSharingTransitionInstance : UAnimInstance
{
	#region Offsets
	private ExternalOffset<TWeakObjectPtr<USkeletalMeshComponent>> _offFromComponent                                              = new ExternalOffset<TWeakObjectPtr<USkeletalMeshComponent>>(0x0268, false); // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TWeakObjectPtr<USkeletalMeshComponent>> _offToComponent                                                = new ExternalOffset<TWeakObjectPtr<USkeletalMeshComponent>>(0x0270, false); // 0x0270(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offBlendTime                                                  = new ExternalOffset<float>(0x0278);                           // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbBlendBool                                                 = new ExternalOffset<byte/*(bool)*/>(0x027C);                  // 0x027C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TWeakObjectPtr<USkeletalMeshComponent>             FromComponent                                                  => _offFromComponent.GetValue();
	public TWeakObjectPtr<USkeletalMeshComponent>             ToComponent                                                    => _offToComponent.GetValue();
	public float                                              BlendTime                                                      => _offBlendTime.GetValue();
	public byte/*(bool)*/                                     bBlendBool                                                     => _offbBlendBool.GetValue();
	#endregion


}

// Class AnimationSharing.AnimSharingAdditiveInstance
// 0x00FD (0x027D - 0x0180)
public class UAnimSharingAdditiveInstance : UAnimInstance
{
	#region Offsets
	private ExternalOffset<TWeakObjectPtr<USkeletalMeshComponent>> _offBaseComponent                                              = new ExternalOffset<TWeakObjectPtr<USkeletalMeshComponent>>(0x0268, false); // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TWeakObjectPtr<UAnimSequence>>     _offAdditiveAnimation                                          = new ExternalOffset<TWeakObjectPtr<UAnimSequence>>(0x0270, false); // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offAlpha                                                      = new ExternalOffset<float>(0x0278);                           // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbStateBool                                                 = new ExternalOffset<byte/*(bool)*/>(0x027C);                  // 0x027C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TWeakObjectPtr<USkeletalMeshComponent>             BaseComponent                                                  => _offBaseComponent.GetValue();
	public TWeakObjectPtr<UAnimSequence>                      AdditiveAnimation                                              => _offAdditiveAnimation.GetValue();
	public float                                              Alpha                                                          => _offAlpha.GetValue();
	public byte/*(bool)*/                                     bStateBool                                                     => _offbStateBool.GetValue();
	#endregion


}

// Class AnimationSharing.AnimSharingInstance
// 0x00F0 (0x0118 - 0x0028)
public class UAnimSharingInstance : UObject
{
	#region Offsets
	private ExternalOffset<TArray<AActor>>                    _offRegisteredActors                                           = new ExternalOffset<TArray<AActor>>(0x0028, false);           // 0x0028(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimationSharingStateProcessor>   _offStateProcessor                                             = new ExternalOffset<UAnimationSharingStateProcessor>(0x00A8, true); // 0x00A8(0x0008) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UAnimSequence>>             _offUsedAnimationSequences                                     = new ExternalOffset<TArray<UAnimSequence>>(0x00E8, false);    // 0x00E8(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	private ExternalOffset<UEnum>                             _offStateEnum                                                  = new ExternalOffset<UEnum>(0x0108, true);                     // 0x0108(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AActor>                            _offSharingActor                                               = new ExternalOffset<AActor>(0x0110, true);                    // 0x0110(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<AActor>                                     RegisteredActors                                               => _offRegisteredActors.GetValue();
	public UAnimationSharingStateProcessor                    StateProcessor                                                 => _offStateProcessor.GetValue();
	public TArray<UAnimSequence>                              UsedAnimationSequences                                         => _offUsedAnimationSequences.GetValue();
	public UEnum                                              StateEnum                                                      => _offStateEnum.GetValue();
	public AActor                                             SharingActor                                                   => _offSharingActor.GetValue();
	#endregion


}

// Class AnimationSharing.AnimationSharingManager
// 0x0020 (0x0048 - 0x0028)
public class UAnimationSharingManager : UObject
{
	#region Offsets
	private ExternalOffset<TArray<USkeleton>>                 _offSkeletons                                                  = new ExternalOffset<TArray<USkeleton>>(0x0028, false);        // 0x0028(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UAnimSharingInstance>>      _offPerSkeletonData                                            = new ExternalOffset<TArray<UAnimSharingInstance>>(0x0038, false); // 0x0038(0x0010) (Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<USkeleton>                                  Skeletons                                                      => _offSkeletons.GetValue();
	public TArray<UAnimSharingInstance>                       PerSkeletonData                                                => _offPerSkeletonData.GetValue();
	#endregion


}

// Class AnimationSharing.AnimationSharingSetup
// 0x0020 (0x0048 - 0x0028)
public class UAnimationSharingSetup : UObject
{
	#region Offsets
	private ExternalOffset<TArray<FPerSkeletonAnimationSharingSetup>> _offSkeletonSetups                                             = new ExternalOffset<TArray<FPerSkeletonAnimationSharingSetup>>(0x0028, false); // 0x0028(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	private ExternalOffset<FAnimationSharingScalability>      _offScalabilitySettings                                        = new ExternalOffset<FAnimationSharingScalability>(0x0038, false); // 0x0038(0x0010) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FPerSkeletonAnimationSharingSetup>          SkeletonSetups                                                 => _offSkeletonSetups.GetValue();
	public FAnimationSharingScalability                       ScalabilitySettings                                            => _offScalabilitySettings.GetValue();
	#endregion


}

// Class AnimationSharing.AnimationSharingStateProcessor
// 0x0000 (0x0028 - 0x0028)
public class UAnimationSharingStateProcessor : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}


}