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

// BlueprintGeneratedClass BP_Projectile_Green.BP_Projectile_Green_C
// 0x0008 (FullSize[0x04A8] - InheritedSize[0x04A0])
class ABP_Projectile_Green_C : public ABP_Projectile_C
{
public:
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_Green.BP_Projectile_Green_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
