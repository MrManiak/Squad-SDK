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

// BlueprintGeneratedClass BP_LastingEffect_Demolition_Wreck.BP_LastingEffect_Demolition_Wreck_C
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
class ABP_LastingEffect_Demolition_Wreck_C : public ABP_LastingEffect_Demolition_Medium_C
{
public:
	class UParticleSystemComponent*                    MetalPieces;                                               // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LastingEffect_Demolition_Wreck.BP_LastingEffect_Demolition_Wreck_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
