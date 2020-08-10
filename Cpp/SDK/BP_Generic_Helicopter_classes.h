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

// BlueprintGeneratedClass BP_Generic_Helicopter.BP_Generic_Helicopter_C
// 0x0440 (FullSize[0x0CB8] - InheritedSize[0x0878])
// LastOffsetWithSize(0x0878)
#define PADDING_0334 - 0x0000 // Minimum to subtract -> (0008)
class ABP_Generic_Helicopter_C : public ASQHelicopter2
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0334, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0880(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0334, class UDecalComponent*,                                                Warning_Decal_04);                                         // 0x0888(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0334, class UDecalComponent*,                                                Warning_Decal_03);                                         // 0x0890(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0334, class UDecalComponent*,                                                Warning_Decal_02);                                         // 0x0898(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0334, class UDecalComponent*,                                                Warning_Decal_01);                                         // 0x08A0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0334, class UAudioComponent*,                                                WarningAudio);                                             // 0x08A8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0334, class UPointLightComponent*,                                           PointLight3);                                              // 0x08B0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0334, class UPointLightComponent*,                                           PointLight2);                                              // 0x08B8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0334, class UPointLightComponent*,                                           PointLight1);                                              // 0x08C0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0334, class UPointLightComponent*,                                           PointLight);                                               // 0x08C8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0334, class USceneComponent*,                                                Warning_Parent);                                           // 0x08D0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0334, class UStaticMeshComponent*,                                           LandingMarker);                                            // 0x08D8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0334, class UCameraComponent*,                                               LandingCamera);                                            // 0x08E0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0334, class USQVehicleBurningComponent*,                                     VehicleBurning);                                           // 0x08E8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0334, class UBPComponent_RadialModel_C*,                                     BPComponent_RadialModel);                                  // 0x08F0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0334, class UParticleSystemComponent*,                                       GroundEffect);                                             // 0x08F8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0334, class UStaticMeshComponent*,                                           CollisionMesh);                                            // 0x0900(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0334, class USQVehicleExitPointComponent*,                                   SQVehicleExitPoint1);                                      // 0x0908(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0334, class USQVehicleExitPointComponent*,                                   SQVehicleExitPoint);                                       // 0x0910(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0334, class UCameraComponent*,                                               PilotCamera);                                              // 0x0918(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0334, class USpringArmComponent*,                                            PilotSpringArm);                                           // 0x0920(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0334, class UArrowComponent*,                                                LandingArrowStabilizer);                                   // 0x0928(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0334, class UArrowComponent*,                                                LandingArrowBottomRight);                                  // 0x0930(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0334, class UArrowComponent*,                                                LandingArrowTopRight);                                     // 0x0938(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_0334, class UArrowComponent*,                                                LandingArrowBottomLeft);                                   // 0x0940(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0334, class UArrowComponent*,                                                LandingArrowTopLeft);                                      // 0x0948(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_0334, TEnumAsByte<ETimelineDirection>,                                       Warning_Light_Animation__Direction_BED4FDDF4B03AF41E9D22382105F3A83); // 0x0950(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_0334, class UTimelineComponent*,                                             Warning_Light_Animation);                                  // 0x0958(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_0334, float,                                                                 Timeline_2_Default_Power_079618E342F7064103BFCC9F05CBEF12); // 0x0960(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00EC PADDING_0334, TEnumAsByte<ETimelineDirection>,                                       Timeline_2__Direction_079618E342F7064103BFCC9F05CBEF12);   // 0x0964(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_0334, class UTimelineComponent*,                                             Timeline_3);                                               // 0x0968(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_0334, bool,                                                                  Physics_IsLanded_);                                        // 0x0970(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
		DEFINE_MEMBER_NNN(0x00FC PADDING_0334, float,                                                                 Physics_DefaultThrust);                                    // 0x0974(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0100 PADDING_0334, bool,                                                                  Physics_IsReadyToLand_);                                   // 0x0978(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0104 PADDING_0334, float,                                                                 Physics_StrafePassiveInterp);                              // 0x097C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0108 PADDING_0334, float,                                                                 Physics_BaseDeltaSpeed);                                   // 0x0980(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x010C PADDING_0334, float,                                                                 Physics_AntiThrustPower);                                  // 0x0984(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0110 PADDING_0334, float,                                                                 Physics_AddVelocityFromRotation);                          // 0x0988(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0114 PADDING_0334, float,                                                                 Physics_StrafeOnRollInterp);                               // 0x098C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0118 PADDING_0334, float,                                                                 Physics_ThrustPower);                                      // 0x0990(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x011C PADDING_0334, float,                                                                 Physics_PitchSpeedMultiplier);                             // 0x0994(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0120 PADDING_0334, float,                                                                 Physics_BaseMaxFlySpeed);                                  // 0x0998(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0124 PADDING_0334, float,                                                                 Physics_ReservedAcceleration);                             // 0x099C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0128 PADDING_0334, float,                                                                 Physics_AccelerationByPitchCutoff);                        // 0x09A0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x012C PADDING_0334, float,                                                                 Physics_MaxFlySpeed);                                      // 0x09A4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0130 PADDING_0334, float,                                                                 Physics_CollisionMinSpeed);                                // 0x09A8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0134 PADDING_0334, float,                                                                 Physics_MaxDeltaSpeed);                                    // 0x09AC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0138 PADDING_0334, float,                                                                 RotorAccelerationScale);                                   // 0x09B0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x013C PADDING_0334, float,                                                                 Game_DeltaSeconds);                                        // 0x09B4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0140 PADDING_0334, class AController*,                                                    Controller_ServerController);                              // 0x09B8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0148 PADDING_0334, bool,                                                                  Controller_IsPossessed_);                                  // 0x09C0(0x0001)  (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0150 PADDING_0334, class APlayerController*,                                              Controller_PlayerController);                              // 0x09C8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0158 PADDING_0334, struct FRotator,                                                       Controller_CurrentRotation);                               // 0x09D0(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0164 PADDING_0334, struct FRotator,                                                       Controller_PreviousRotation);                              // 0x09DC(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0170 PADDING_0334, bool,                                                                  Game_BegunPlay_);                                          // 0x09E8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0174 PADDING_0334, float,                                                                 LandingDistance);                                          // 0x09EC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0178 PADDING_0334, float,                                                                 MaxVelocityToLand);                                        // 0x09F0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x017C PADDING_0334, bool,                                                                  Collision_GotCollisionHit_);                               // 0x09F4(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0180 PADDING_0334, float,                                                                 StrafePassive);                                            // 0x09F8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0184 PADDING_0334, float,                                                                 Twitchiness);                                              // 0x09FC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0188 PADDING_0334, float,                                                                 StrafeOnRoll);                                             // 0x0A00(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x018C PADDING_0334, float,                                                                 StrafeOnRollSpeed);                                        // 0x0A04(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0190 PADDING_0334, float,                                                                 RotorLiftMin);                                             // 0x0A08(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0194 PADDING_0334, float,                                                                 RotorLiftMax);                                             // 0x0A0C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0198 PADDING_0334, float,                                                                 Gravity);                                                  // 0x0A10(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x019C PADDING_0334, float,                                                                 AirFriction);                                              // 0x0A14(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01A0 PADDING_0334, float,                                                                 Friction);                                                 // 0x0A18(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01A8 PADDING_0334, class UCurveFloat*,                                                    FrictionByPitch);                                          // 0x0A20(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01B0 PADDING_0334, class UCurveFloat*,                                                    BrakeByPitch);                                             // 0x0A28(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01B8 PADDING_0334, class UCurveVector*,                                                   AccelerationInterpolationSpeed);                           // 0x0A30(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01C0 PADDING_0334, class UCurveVector*,                                                   UpDirectionByPitch);                                       // 0x0A38(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01C8 PADDING_0334, class UCurveFloat*,                                                    ForwardDirectionByPitch);                                  // 0x0A40(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01D0 PADDING_0334, class UCurveFloat*,                                                    RightDirectionByRoll);                                     // 0x0A48(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01D8 PADDING_0334, class UCurveVector*,                                                   TurnByRollOnSpeed);                                        // 0x0A50(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01E0 PADDING_0334, float,                                                                 MaximumSpeed);                                             // 0x0A58(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01E4 PADDING_0334, float,                                                                 AverageSpeedPercent);                                      // 0x0A5C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01E8 PADDING_0334, float,                                                                 RotorStrength);                                            // 0x0A60(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01EC PADDING_0334, float,                                                                 RotorStrengthMultiplier);                                  // 0x0A64(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01F0 PADDING_0334, float,                                                                 CollisionMinSpeed);                                        // 0x0A68(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01F4 PADDING_0334, float,                                                                 FrictionMultiplier);                                       // 0x0A6C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01F8 PADDING_0334, bool,                                                                  Debug_IsDebugging_);                                       // 0x0A70(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x01FC PADDING_0334, float,                                                                 YawInputInterpt);                                          // 0x0A74(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0200 PADDING_0334, float,                                                                 YawResistenceFromPitchStart);                              // 0x0A78(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0204 PADDING_0334, float,                                                                 YawResistenceFromPitchMax);                                // 0x0A7C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0208 PADDING_0334, float,                                                                 YawResistenceFromVelocityMinSpeed);                        // 0x0A80(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x020C PADDING_0334, float,                                                                 YawResistenceFromVelocityInputMul);                        // 0x0A84(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0210 PADDING_0334, float,                                                                 BrakeByYawMinSpeed);                                       // 0x0A88(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0214 PADDING_0334, float,                                                                 BrakeByYawSpeedCutOff);                                    // 0x0A8C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0218 PADDING_0334, bool,                                                                  IsBrakeByYawInputSmooth_);                                 // 0x0A90(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x021C PADDING_0334, float,                                                                 RollDumpSpeed);                                            // 0x0A94(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0220 PADDING_0334, float,                                                                 RollDumpFactor);                                           // 0x0A98(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0224 PADDING_0334, float,                                                                 RollPushTime);                                             // 0x0A9C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0228 PADDING_0334, bool,                                                                  IsRollStabilizationEnabled_);                              // 0x0AA0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0230 PADDING_0334, class UCurveFloat*,                                                    RollStabilization);                                        // 0x0AA8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0238 PADDING_0334, bool,                                                                  IsPitchStabilizationEnabled_);                             // 0x0AB0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x023C PADDING_0334, float,                                                                 Input_Pitch);                                              // 0x0AB4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0240 PADDING_0334, float,                                                                 Input_PitchSensitivityScale);                              // 0x0AB8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0244 PADDING_0334, float,                                                                 Input_PitchBounce);                                        // 0x0ABC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0248 PADDING_0334, float,                                                                 Input_PitchAxisValue);                                     // 0x0AC0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x024C PADDING_0334, float,                                                                 Input_PitchBounceSecond);                                  // 0x0AC4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0250 PADDING_0334, float,                                                                 Input_PitchRemaining);                                     // 0x0AC8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0254 PADDING_0334, float,                                                                 Input_Yaw);                                                // 0x0ACC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0258 PADDING_0334, float,                                                                 Input_YawAxisValue);                                       // 0x0AD0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x025C PADDING_0334, float,                                                                 Input_YawResistenceFromVelocity);                          // 0x0AD4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0260 PADDING_0334, float,                                                                 Input_YawRemaining);                                       // 0x0AD8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0264 PADDING_0334, float,                                                                 Input_Roll);                                               // 0x0ADC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0268 PADDING_0334, float,                                                                 Input_RollPushValue);                                      // 0x0AE0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x026C PADDING_0334, float,                                                                 Input_RollSensitivityScale);                               // 0x0AE4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0270 PADDING_0334, float,                                                                 Input_RolltoYawInterp);                                    // 0x0AE8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0274 PADDING_0334, float,                                                                 Input_RollAxisValue);                                      // 0x0AEC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0278 PADDING_0334, float,                                                                 Input_RollRemaining);                                      // 0x0AF0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x027C PADDING_0334, float,                                                                 Input_BrakeByYawVelocityCut);                              // 0x0AF4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0280 PADDING_0334, float,                                                                 Input_BrakeByYawInputMultiplier);                          // 0x0AF8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0284 PADDING_0334, float,                                                                 Input_AccelerationInputTime);                              // 0x0AFC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0288 PADDING_0334, bool,                                                                  Input_IsAccelerating_);                                    // 0x0B00(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0289 PADDING_0334, bool,                                                                  Input_IsDownPressed_);                                     // 0x0B01(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x028A PADDING_0334, bool,                                                                  Input_IsYawBraking_);                                      // 0x0B02(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x028C PADDING_0334, struct FVector,                                                        Velocity_CurrentWorldOffset);                              // 0x0B04(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0298 PADDING_0334, struct FVector,                                                        Velocity_CurrentLocalOffset);                              // 0x0B10(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x02A4 PADDING_0334, struct FVector,                                                        Velocity_PreviousWorldOffset);                             // 0x0B1C(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x02B0 PADDING_0334, struct FVector,                                                        Velocity_PreviousLocalOffset);                             // 0x0B28(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x02C0 PADDING_0334, struct FTimerHandle,                                                   Timer_CheckIfLiftOff);                                     // 0x0B38(0x0008)  (Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x02C8 PADDING_0334, float,                                                                 Input_RawInputRudder);                                     // 0x0B40(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x02CC PADDING_0334, float,                                                                 RollInputInterpt);                                         // 0x0B44(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x02D0 PADDING_0334, float,                                                                 PitchInputInterpt);                                        // 0x0B48(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x02D8 PADDING_0334, class UCurveFloat*,                                                    PitchStabilization);                                       // 0x0B50(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x02E0 PADDING_0334, float,                                                                 RollPushStrength);                                         // 0x0B58(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x02E4 PADDING_0334, float,                                                                 RollSensitivityScaleLow);                                  // 0x0B5C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x02E8 PADDING_0334, float,                                                                 RollSensitivityScaleMiddle);                               // 0x0B60(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x02EC PADDING_0334, float,                                                                 RollSensitivityScaleMax);                                  // 0x0B64(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x02F0 PADDING_0334, class UCurveFloat*,                                                    RollInputScale);                                           // 0x0B68(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x02F8 PADDING_0334, float,                                                                 PitchSensitivityScaleLow);                                 // 0x0B70(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x02FC PADDING_0334, float,                                                                 PitchSensitivityScaleMiddle);                              // 0x0B74(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0300 PADDING_0334, float,                                                                 PitchSensitivityScaleMax);                                 // 0x0B78(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0308 PADDING_0334, class UCurveFloat*,                                                    PitchInputScale);                                          // 0x0B80(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0310 PADDING_0334, float,                                                                 YawSensitivity__user_);                                    // 0x0B88(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0314 PADDING_0334, float,                                                                 YawSensitivity);                                           // 0x0B8C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0318 PADDING_0334, float,                                                                 YawSpeed);                                                 // 0x0B90(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x031C PADDING_0334, float,                                                                 RollSensitivity__user_);                                   // 0x0B94(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0320 PADDING_0334, float,                                                                 RollSensitivity);                                          // 0x0B98(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0324 PADDING_0334, float,                                                                 RollAxisInputClamp);                                       // 0x0B9C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0328 PADDING_0334, float,                                                                 PitchSensitivity__user_);                                  // 0x0BA0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x032C PADDING_0334, float,                                                                 PitchSensitivity);                                         // 0x0BA4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0330 PADDING_0334, float,                                                                 PitchAxisInputClamp);                                      // 0x0BA8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0334 PADDING_0334, bool,                                                                  IsAddingYawWhenRolling_);                                  // 0x0BAC(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0338 PADDING_0334, float,                                                                 PitchToYawAngleThreshold);                                 // 0x0BB0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x033C PADDING_0334, float,                                                                 PitchToYawScale);                                          // 0x0BB4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0340 PADDING_0334, int,                                                                   MainRotorMaxRPM);                                          // 0x0BB8(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0344 PADDING_0334, int,                                                                   TailRotorMaxRPM);                                          // 0x0BBC(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0348 PADDING_0334, bool,                                                                  MainRotorCCW);                                             // 0x0BC0(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0349 PADDING_0334, bool,                                                                  TailRotorCCW);                                             // 0x0BC1(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x034C PADDING_0334, float,                                                                 BladesBlurMaxRPM);                                         // 0x0BC4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0350 PADDING_0334, float,                                                                 BladesBlurMinRPM);                                         // 0x0BC8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0354 PADDING_0334, float,                                                                 GroundEffectMaxDistanceMeters);                            // 0x0BCC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0358 PADDING_0334, class UCurveFloat*,                                                    VerticalStabilizerAngleMultiplier);                        // 0x0BD0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0360 PADDING_0334, class UCurveVector*,                                                   StabilizerCorrectionBySpeed);                              // 0x0BD8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0368 PADDING_0334, struct FRotator,                                                       Pilot_InitialCameraRotation);                              // 0x0BE0(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0378 PADDING_0334, class USQPhysicalMaterial*,                                            Effects_PrevPhysMat);                                      // 0x0BF0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0380 PADDING_0334, class UCurveFloat*,                                                    HorizontalStabilizerAngleMultiplier);                      // 0x0BF8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0388 PADDING_0334, struct FRotator,                                                       Pilot_ZoomCameraRotation);                                 // 0x0C00(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0394 PADDING_0334, float,                                                                 Instruments_AltitudeMeters);                               // 0x0C0C(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0398 PADDING_0334, struct FTransform,                                                     Debug_ServerTransformLocation);                            // 0x0C10(0x0030)  (Edit, BlueprintVisible, Net, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x03C8 PADDING_0334, float,                                                                 Physics_MaxAltitude);                                      // 0x0C40(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x03CC PADDING_0334, struct FRotator,                                                       Target_Landing_Camera_Rotation);                           // 0x0C44(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x03D8 PADDING_0334, bool,                                                                  Warning_On);                                               // 0x0C50(0x0001)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
		DEFINE_MEMBER_NNN(0x03DC PADDING_0334, float,                                                                 Physics_MainRotorRotationalForce);                         // 0x0C54(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x03E0 PADDING_0334, float,                                                                 Physics_PreventTailRotorLossEffectTime);                   // 0x0C58(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x03E4 PADDING_0334, bool,                                                                  Engine_IsActive);                                          // 0x0C5C(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x03E8 PADDING_0334, float,                                                                 MaxTailRotorLossSpinForce);                                // 0x0C60(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x03EC PADDING_0334, float,                                                                 Physics_FlipOverSpeedTailLoss);                            // 0x0C64(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x03F0 PADDING_0334, float,                                                                 HullWarningThreshold);                                     // 0x0C68(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x03F4 PADDING_0334, float,                                                                 EngineWarningThreshold);                                   // 0x0C6C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x03F8 PADDING_0334, float,                                                                 MainRotorWarningThreshold);                                // 0x0C70(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x03FC PADDING_0334, float,                                                                 TailRotorWarningThreshold);                                // 0x0C74(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0400 PADDING_0334, bool,                                                                  DebugMovement);                                            // 0x0C78(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0404 PADDING_0334, struct FVector,                                                        Debug_True_Velocity);                                      // 0x0C7C(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0410 PADDING_0334, struct FVector,                                                        Debug_Previous_Frame_True_Velocity);                       // 0x0C88(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x041C PADDING_0334, struct FVector,                                                        Debug_Previous_Frame_location);                            // 0x0C94(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0428 PADDING_0334, struct FVector,                                                        Debug_True_Acceleration);                                  // 0x0CA0(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0434 PADDING_0334, struct FVector,                                                        Debug_Previous_Frame_Acceleration);                        // 0x0CAC(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Generic_Helicopter.BP_Generic_Helicopter_C");
		return ptr;
	}


	void Is_Using_Landing_Camera(bool* Using_Landing_Camera);
	void Get_UI_Tint(struct FLinearColor* Color);
	float GetThrottle();
	void GetVisualCollective(float* Collectives);
	float GetMainRotorThrust();
	float GetTailRotorThrust();
	void Set_UI_Enabled(bool Enable_UI);
	void DoRotors();
	void OnRep_Warning_On();
	void DoRotationFromRoll();
	void DebugVectorToString(const struct FVector& Vector, int digits, struct FString* String);
	void Manage_Landing_Camera();
	void DrawDebugLocation();
	void GetEngineThrust(float* EngineThrust);
	void CheckPhysics();
	bool IsLanded();
	void DoStabilizers();
	void PilotZoom(float InputPin);
	void GetThrustPower(float* Thrust);
	void DebugVariablesMap(TMap<struct FString, struct FString> Map, const struct FColor& Color);
	void GetRotationDiff(struct FRotator* NewParam);
	void DrawDebug(bool Draw);
	void SetGroundEffect(float* Height);
	void ResetMovementState();
	void ResetState();
	int GetMaxRPM();
	void EnablePhysics(bool bEnable);
	void PolishPitchInput();
	void GetDistanceFromTheGround(float TraceSize, float* distance, bool* GotDistance);
	void PolishRollInput();
	void GetGradualRotationIncrement(float* Roll, float* Pitch);
	void DoRollToYawTransfer();
	void DoPushAndBounce();
	void AddRoll(float Roll_);
	void AddPitch(float Pitch);
	void AddYaw(float Yaw);
	void CalcBrakebyYaw();
	void CalcYawResistances();
	void GetVelocityLength(float* NewParam);
	void GetRollNormalized(float* NewParam);
	void GetPitchNormalized(float* NewParam);
	void CanLand(bool* CanLand_);
	void CalcCustomVelocity(struct FVector* Velocity);
	void AddAcceleration();
	void UserConstructionScript();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Warning_Light_Animation__FinishedFunc();
	void Warning_Light_Animation__UpdateFunc();
	void Warning_Light_Animation__LightOff__EventFunc();
	void Warning_Light_Animation__LightOn__EventFunc();
	void InpActEvt_ToggleView_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_VehicleToggleCamera_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Y_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void LandVehicle();
	void MC_SetLandingState(bool NewIsLandedState);
	void CheckLiftOff();
	void StartCheckLiftOff();
	void ROS_UpdateLandingState(bool IsLanded_);
	void HandleInput_Acceleration(float AxisInput);
	void Acceleration_ModifySensitivity();
	void HandleInput_Yaw(float AxisValue);
	void HandleInput_Roll(float AxisValue);
	void HandleInput_Pitch(float AxisValue);
	void InpAxisEvt_HelicopterUp_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_HelicopterRight_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_MoveAileron_K2Node_InputAxisEvent_3(float AxisValue);
	void InpAxisEvt_MoveElevator_K2Node_InputAxisEvent_4(float AxisValue);
	void ReceiveBeginPlay();
	void ReceivePossessed(class AController* NewController);
	void ROC_VehiclePosessed();
	void ReceiveUnpossessed(class AController* OldController);
	void MC_VehicleUnpossessed();
	void TurnOnPhysics(bool IgnoreLandingCheck, const struct FVector& NewLinearVelocity, const struct FVector& NewAngularVelocity);
	void ReceiveTick(float DeltaSeconds);
	void BeginPlay_Landing();
	void CheckIfCanLandVehicle();
	void OnEngineActive(bool bActive);
	void BndEvt__VehicleMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void InpAxisEvt_VehicleZoom_K2Node_InputAxisEvent_9(float AxisValue);
	void TickGroundEffect();
	void EnteredVehicle(class ASQSoldier* Soldier, class USQVehicleSeatComponent* NewSeat);
	void SwitchedSeat(class ASQSoldier* Soldier, class USQVehicleSeatComponent* PreviousSeat, class USQVehicleSeatComponent* NewSeat);
	void OnPhysicsReplicated();
	void Toggle_Landing_Camera(bool Condition);
	void LeftVehicle(class ASQSoldier* Soldier, class USQVehicleSeatComponent* PreviousSeat);
	void Warning_Light_Anim();
	void ReceiveDestroyed();
	void Start_Warning_Anim();
	void Stop_Warning_Anim();
	void On_Entered_Bounds();
	void On_Out_of_Bounds();
	void Evaluate_Warning();
	void Set_Landing_Camera(bool Active);
	void OnFDMImpact(const struct FHitResult& HitResult, float TimeSlice, const struct FVector& MoveDelta);
	void ExecuteUbergraph_BP_Generic_Helicopter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
