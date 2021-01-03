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

// BlueprintGeneratedClass SmokeGenerator_Tracked.SmokeGenerator_Tracked_C
// 0x0030 (FullSize[0x0A20] - InheritedSize[0x09F0])
class ASmokeGenerator_Tracked_C : public ASQVehicleSmokeGenerator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x09F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystem*                             SmokeEffect;                                               // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               WheelFxCachedBoneNames;                                    // 0x0A00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FParticleSysParam>                   WheelFxCachedParams;                                       // 0x0A10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SmokeGenerator_Tracked.SmokeGenerator_Tracked_C");
		return ptr;
	}



	void SetupParticleSystem(class AActor* OwnerActor);
	void ExecuteUbergraph_SmokeGenerator_Tracked(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
