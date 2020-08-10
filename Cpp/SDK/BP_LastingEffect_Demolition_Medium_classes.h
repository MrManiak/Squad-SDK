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

// BlueprintGeneratedClass BP_LastingEffect_Demolition_Medium.BP_LastingEffect_Demolition_Medium_C
// 0x0020 (FullSize[0x02A8] - InheritedSize[0x0288])
// LastOffsetWithSize(0x0288)
#define PADDING_04BE - 0x0000 // Minimum to subtract -> (0018)
class ABP_LastingEffect_Demolition_Medium_C : public ASQLastingEffect
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0018 PADDING_04BE, class UAudioComponent*,                                                Audio1);                                                   // 0x02A0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LastingEffect_Demolition_Medium.BP_LastingEffect_Demolition_Medium_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
