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

// AnimBlueprintGeneratedClass M1a2_MainGun_AnimBlueprint.M1a2_MainGun_AnimBlueprint_C
// 0x0098 (FullSize[0x0318] - InheritedSize[0x0280])
class UM1a2_MainGun_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_88A79DB74EE7932272752EB4E7082C0B;       // 0x0288(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_4C5191EB44BBE1088C672CABB2F63CDB; // 0x02B8(0x0018)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_978E5E85481BAA341396688FD7EA943C;       // 0x02D0(0x0048)


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
