#pragma once

// Name: S, Version: b


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
// 0x0028 (FullSize[0x0270] - InheritedSize[0x0248])
class ABP_Shockwave_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             ShockwaveRoot;                                             // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             Emitter_Being_Played;                                      // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                VerticalSteps;                                             // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HorizontalSteps;                                           // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      EffectsClass;                                              // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


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
