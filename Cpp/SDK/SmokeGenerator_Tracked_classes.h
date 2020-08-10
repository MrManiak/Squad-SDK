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

// BlueprintGeneratedClass SmokeGenerator_Tracked.SmokeGenerator_Tracked_C
// 0x0030 (FullSize[0x0A20] - InheritedSize[0x09F0])
// LastOffsetWithSize(0x09F0)
#define PADDING_024A - 0x0000 // Minimum to subtract -> (0000)
class ASmokeGenerator_Tracked_C : public ASQVehicleSmokeGenerator
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_024A, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x09F0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_024A, class UParticleSystem*,                                                SmokeEffect);                                              // 0x09F8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_024A, TArray<struct FName>,                                                  WheelFxCachedBoneNames);                                   // 0x0A00(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0020 PADDING_024A, TArray<struct FParticleSysParam>,                                      WheelFxCachedParams);                                      // 0x0A10(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	};

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
