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

// BlueprintGeneratedClass BP_Shockwave.BP_Shockwave_C
// 0x0038 (FullSize[0x0270] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_018E - 0x0000 // Minimum to subtract -> (0010)
class ABP_Shockwave_C : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_018E, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0248(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0018 PADDING_018E, class USceneComponent*,                                                ShockwaveRoot);                                            // 0x0250(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_018E, class UParticleSystem*,                                                Emitter_Being_Played);                                     // 0x0258(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_018E, int,                                                                   VerticalSteps);                                            // 0x0260(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002C PADDING_018E, int,                                                                   HorizontalSteps);                                          // 0x0264(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_018E, class UClass*,                                                         EffectsClass);                                             // 0x0268(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Shockwave.BP_Shockwave_C");
		return ptr;
	}


	void SpawnEmitterAtTraceIntersect(const struct FVector& StartTrace, const struct FVector& EndTrace, class AActor* Instigator);
	void ConvertStepsToLoops(int Steps, int* PositiveInt, int* NegativeInt);
	void Explode(class AActor* Instigator);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Shockwave(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
