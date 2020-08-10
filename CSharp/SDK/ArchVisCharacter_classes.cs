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

// Class ArchVisCharacter.ArchVisCharacter
// 0x0068 (0x06C0 - 0x0658)
public class AArchVisCharacter : ACharacter
{
	#region Offsets
	private ExternalOffset<FString>                           _offLookUpAxisName                                             = new ExternalOffset<FString>(0x0658, false);                  // 0x0658(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offLookUpAtRateAxisName                                       = new ExternalOffset<FString>(0x0668, false);                  // 0x0668(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offTurnAxisName                                               = new ExternalOffset<FString>(0x0678, false);                  // 0x0678(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offTurnAtRateAxisName                                         = new ExternalOffset<FString>(0x0688, false);                  // 0x0688(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offMoveForwardAxisName                                        = new ExternalOffset<FString>(0x0698, false);                  // 0x0698(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offMoveRightAxisName                                          = new ExternalOffset<FString>(0x06A8, false);                  // 0x06A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMouseSensitivityScale_Pitch                                = new ExternalOffset<float>(0x06B8);                           // 0x06B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMouseSensitivityScale_Yaw                                  = new ExternalOffset<float>(0x06BC);                           // 0x06BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                            LookUpAxisName                                                 => _offLookUpAxisName.GetValue();
	public FString                                            LookUpAtRateAxisName                                           => _offLookUpAtRateAxisName.GetValue();
	public FString                                            TurnAxisName                                                   => _offTurnAxisName.GetValue();
	public FString                                            TurnAtRateAxisName                                             => _offTurnAtRateAxisName.GetValue();
	public FString                                            MoveForwardAxisName                                            => _offMoveForwardAxisName.GetValue();
	public FString                                            MoveRightAxisName                                              => _offMoveRightAxisName.GetValue();
	public float                                              MouseSensitivityScale_Pitch                                    => _offMouseSensitivityScale_Pitch.GetValue();
	public float                                              MouseSensitivityScale_Yaw                                      => _offMouseSensitivityScale_Yaw.GetValue();
	#endregion


}

// Class ArchVisCharacter.ArchVisCharMovementComponent
// 0x005C (0x0768 - 0x070C)
public class UArchVisCharMovementComponent : UCharacterMovementComponent
{
	#region Offsets
	private ExternalOffset<FRotator>                          _offRotationalAcceleration                                     = new ExternalOffset<FRotator>(0x0730, false);                 // 0x0730(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotator>                          _offRotationalDeceleration                                     = new ExternalOffset<FRotator>(0x073C, false);                 // 0x073C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotator>                          _offMaxRotationalVelocity                                      = new ExternalOffset<FRotator>(0x0748, false);                 // 0x0748(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMinPitch                                                   = new ExternalOffset<float>(0x0754);                           // 0x0754(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxPitch                                                   = new ExternalOffset<float>(0x0758);                           // 0x0758(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offWalkingFriction                                            = new ExternalOffset<float>(0x075C);                           // 0x075C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offWalkingSpeed                                               = new ExternalOffset<float>(0x0760);                           // 0x0760(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offWalkingAcceleration                                        = new ExternalOffset<float>(0x0764);                           // 0x0764(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FRotator                                           RotationalAcceleration                                         => _offRotationalAcceleration.GetValue();
	public FRotator                                           RotationalDeceleration                                         => _offRotationalDeceleration.GetValue();
	public FRotator                                           MaxRotationalVelocity                                          => _offMaxRotationalVelocity.GetValue();
	public float                                              MinPitch                                                       => _offMinPitch.GetValue();
	public float                                              MaxPitch                                                       => _offMaxPitch.GetValue();
	public float                                              WalkingFriction                                                => _offWalkingFriction.GetValue();
	public float                                              WalkingSpeed                                                   => _offWalkingSpeed.GetValue();
	public float                                              WalkingAcceleration                                            => _offWalkingAcceleration.GetValue();
	#endregion


}


}