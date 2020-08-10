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

// BlueprintGeneratedClass BP_MarksmanAnimated.BP_MarksmanAnimated_C
// 0x0070 (FullSize[0x02F0] - InheritedSize[0x0280])
// LastOffsetWithSize(0x0280)
#define PADDING_0238 - 0x0000 // Minimum to subtract -> (0050)
class ABP_MarksmanAnimated_C : public ASkeletalMeshActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0238, class UStaticMeshComponent*,                                           StaticMesh2);                                              // 0x02D0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0238, class UStaticMeshComponent*,                                           StaticMesh1);                                              // 0x02D8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0238, class UStaticMeshComponent*,                                           StaticMesh);                                               // 0x02E0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0238, class USkeletalMeshComponent*,                                         SkeletalMesh);                                             // 0x02E8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MarksmanAnimated.BP_MarksmanAnimated_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
