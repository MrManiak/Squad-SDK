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

// BlueprintGeneratedClass BP_FlyingDrone.BP_FlyingDrone_C
// 0x00F8 (FullSize[0x0750] - InheritedSize[0x0658])
// LastOffsetWithSize(0x0658)
#define PADDING_0416 - 0x0000 // Minimum to subtract -> (0008)
class ABP_FlyingDrone_C : public ACharacter
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0416, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0660(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0416, class UStaticMeshComponent*,                                           HitBox);                                                   // 0x0668(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0416, class UAudioComponent*,                                                SC_QuadcoptersAudio);                                      // 0x0670(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0416, class UCameraComponent*,                                               Camera);                                                   // 0x0678(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0416, class USQMapIconComponent*,                                            SQMapIcon);                                                // 0x0680(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0416, class USQCoreStateComponent*,                                          SQCoreState);                                              // 0x0688(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0416, class UStaticMeshComponent*,                                           Blade4);                                                   // 0x0690(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0416, class UStaticMeshComponent*,                                           Blade3);                                                   // 0x0698(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0416, class UStaticMeshComponent*,                                           Blade2);                                                   // 0x06A0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0416, class UStaticMeshComponent*,                                           Blade);                                                    // 0x06A8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0416, class UHealthComponent_C*,                                             HealthComponent);                                          // 0x06B0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0416, class UStaticMeshComponent*,                                           Body);                                                     // 0x06B8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0416, class ASQPlayerController*,                                            SQ_PC);                                                    // 0x06C0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0416, bool,                                                                  Dead);                                                     // 0x06C8(0x0001)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0416, class UParticleSystem*,                                                Explode_Effect);                                           // 0x06D0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0416, class USoundBase*,                                                     Explode_Sound);                                            // 0x06D8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0416, bool,                                                                  Can_Possess);                                              // 0x06E0(0x0001)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0416, class UClass*,                                                         Command_Action);                                           // 0x06E8(0x0008)  (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0416, float,                                                                 CrashVelocity);                                            // 0x06F0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x009C PADDING_0416, float,                                                                 Max_Fly_Height);                                           // 0x06F4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0416, bool,                                                                  Can_Increase_Altitude);                                    // 0x06F8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0416, struct FTimerHandle,                                                   Altitude_Timer);                                           // 0x0700(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0416, int,                                                                   Zoom_Level);                                               // 0x0708(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B4 PADDING_0416, float,                                                                 Desired_Zoom);                                             // 0x070C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0416, TArray<float>,                                                         Zoom_Levels);                                              // 0x0710(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_0416, class UClass*,                                                         FPV_Item_Class);                                           // 0x0720(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0416, float,                                                                 BankAngleLimit);                                           // 0x0728(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_0416, struct FDebugFloatHistory,                                             DebugFloatHistory);                                        // 0x0730(0x0020)  (Edit, BlueprintVisible, DisableEditOnInstance)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FlyingDrone.BP_FlyingDrone_C");
		return ptr;
	}


	void Check_Owner_Death();
	void Update_Zoom();
	void Add_Zoom_Delta();
	void Set_Can_Increase_Altitude();
	void Update_Relative_Rotation();
	void InpActEvt_Interact_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_LeanLeft_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpAxisEvt_MoveAileron_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_HelicopterRight_K2Node_InputAxisEvent_3(float AxisValue);
	void InpAxisEvt_HelicopterUp_K2Node_InputAxisEvent_4(float AxisValue);
	void InpAxisEvt_MoveElevator_K2Node_InputAxisEvent_5(float AxisValue);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_Health_Zero__DelegateSignature();
	void Multicast_Destroy();
	void InpAxisEvt_AircraftUp_K2Node_InputAxisEvent_1(float AxisValue);
	void Server_Die();
	void End_Flight();
	void Server_Unpossess(bool Remove);
	void ReceivePossessed(class AController* NewController);
	void On_Possess(const struct FRotator& NewRotation);
	void ReceiveUnpossessed(class AController* OldController);
	void On_Depossess();
	void Kit_Changed(class USQRoleSettings* CurrentRole);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_FlyingDrone(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
