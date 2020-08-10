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

// BlueprintGeneratedClass BP_LastingEffect_Demolition_Wreck.BP_LastingEffect_Demolition_Wreck_C
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
// LastOffsetWithSize(0x02A8)
#define PADDING_023A - 0x0000 // Minimum to subtract -> (0000)
class ABP_LastingEffect_Demolition_Wreck_C : public ABP_LastingEffect_Demolition_Medium_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_023A, class UParticleSystemComponent*,                                       MetalPieces);                                              // 0x02A8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	};

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
