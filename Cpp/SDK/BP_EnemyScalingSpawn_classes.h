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

// BlueprintGeneratedClass BP_EnemyScalingSpawn.BP_EnemyScalingSpawn_C
// 0x0020 (FullSize[0x03FC] - InheritedSize[0x03DC])
// LastOffsetWithSize(0x03DC)
#define PADDING_001A - 0x0000 // Minimum to subtract -> (0004)
class ABP_EnemyScalingSpawn_C : public ASQGameSpawn
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_001A, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x03E0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000C PADDING_001A, class USphereComponent*,                                               EnemyDetectionRadius);                                     // 0x03E8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0014 PADDING_001A, int,                                                                   EnemiesInRadius);                                          // 0x03F0(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_001A, float,                                                                 RespawnDelayPerPerson);                                    // 0x03F4(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001C PADDING_001A, int,                                                                   NumEnemiesToDisable);                                      // 0x03F8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EnemyScalingSpawn.BP_EnemyScalingSpawn_C");
		return ptr;
	}


	bool IsSameTeam(class UObject* Object);
	void OnEnemiesInRadiusChanged();
	float GetRespawnDelay();
	void BndEvt__EnemyDetectionRadius_K2Node_ComponentBoundEvent_327_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__EnemyDetectionRadius_K2Node_ComponentBoundEvent_351_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ExecuteUbergraph_BP_EnemyScalingSpawn(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
