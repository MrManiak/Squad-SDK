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

// BlueprintGeneratedClass BP_AAS_AttackMarker.BP_AAS_AttackMarker_C
// 0x000F (FullSize[0x0288] - InheritedSize[0x0279])
// LastOffsetWithSize(0x0279)
#define PADDING_04BF - 0x0000 // Minimum to subtract -> (0007)
class ABP_AAS_AttackMarker_C : public ASQMapMarker
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_04BF, class USceneComponent*,                                                DefaultSceneRoot);                                         // 0x0280(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AAS_AttackMarker.BP_AAS_AttackMarker_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
