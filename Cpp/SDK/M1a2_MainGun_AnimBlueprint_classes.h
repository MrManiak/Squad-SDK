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

// AnimBlueprintGeneratedClass M1a2_MainGun_AnimBlueprint.M1a2_MainGun_AnimBlueprint_C
// 0x00A0 (FullSize[0x0318] - InheritedSize[0x0278])
// LastOffsetWithSize(0x0278)
#define PADDING_038A - 0x0000 // Minimum to subtract -> (0008)
class UM1a2_MainGun_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_038A, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0280(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0010 PADDING_038A, struct FAnimNode_Root,                                                 AnimGraphNode_Root_88A79DB74EE7932272752EB4E7082C0B);      // 0x0288(0x0030) 
		DEFINE_MEMBER_NNN(0x0040 PADDING_038A, struct FAnimNode_RefPose,                                              AnimGraphNode_LocalRefPose_4C5191EB44BBE1088C672CABB2F63CDB); // 0x02B8(0x0018) 
		DEFINE_MEMBER_NNN(0x0058 PADDING_038A, struct FAnimNode_Slot,                                                 AnimGraphNode_Slot_978E5E85481BAA341396688FD7EA943C);      // 0x02D0(0x0048) 
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M1a2_MainGun_AnimBlueprint.M1a2_MainGun_AnimBlueprint_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M1a2_MainGun_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
