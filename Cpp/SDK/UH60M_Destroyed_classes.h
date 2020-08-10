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

// BlueprintGeneratedClass UH60M_Destroyed.UH60M_Destroyed_C
// 0x0048 (FullSize[0x0370] - InheritedSize[0x0328])
// LastOffsetWithSize(0x0328)
#define PADDING_0141 - 0x0000 // Minimum to subtract -> (0000)
class AUH60M_Destroyed_C : public ABP_GenericHelicopterWreck_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0141, class UParticleSystemComponent*,                                       Fire);                                                     // 0x0328(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0141, class UParticleSystemComponent*,                                       ParticleSystem2);                                          // 0x0330(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0141, class UParticleSystemComponent*,                                       ParticleSystem1);                                          // 0x0338(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0141, class UParticleSystemComponent*,                                       ParticleSystem);                                           // 0x0340(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0141, class UParticleSystemComponent*,                                       GlassExp);                                                 // 0x0348(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0141, class UStaticMeshComponent*,                                           CollisionMesh);                                            // 0x0350(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0141, class UAudioComponent*,                                                FlamesAudio);                                              // 0x0358(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0141, class UParticleSystemComponent*,                                       Wreck_Pieces);                                             // 0x0360(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0141, class UParticleSystemComponent*,                                       explosion);                                                // 0x0368(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UH60M_Destroyed.UH60M_Destroyed_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
