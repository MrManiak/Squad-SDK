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

// BlueprintGeneratedClass BP_Projectile_Red50.BP_Projectile_Red50_C
// 0x0008 (FullSize[0x0498] - InheritedSize[0x0490])
// LastOffsetWithSize(0x0490)
#define PADDING_0103 - 0x0000 // Minimum to subtract -> (0000)
class ABP_Projectile_Red50_C : public ABP_Projectile_50cal_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0103, class UParticleSystemComponent*,                                       ParticleSystem_Red);                                       // 0x0490(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_Red50.BP_Projectile_Red50_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
