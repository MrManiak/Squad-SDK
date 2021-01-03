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

// AnimBlueprintGeneratedClass M2_Emplaced_Base_Skeleton_AnimBlueprint.M2_Emplaced_Base_Skeleton_AnimBlueprint_C
// 0x03B8 (FullSize[0x0638] - InheritedSize[0x0280])
class UM2_Emplaced_Base_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C9EE1071422F3D2DA4180EBF9790B197;       // 0x0288(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DE79F49E4DC230EF1FF5F2BC196F136E;       // 0x02B8(0x0048)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_820D035A4204102B869FDB8BB66BBF0C; // 0x0300(0x0188)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_FDD6390043E75410DE8E60A9DDF25AF9; // 0x0488(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_95B0421347130D19EC1085ADEF99C76D; // 0x04A0(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_3A19BECE49165A36C8F46EAB986645C0; // 0x0560(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AC57FEB649AC033240D833B33FFEC64A;       // 0x05A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9A0356494D065E4D61ECDD992214013C;       // 0x05F0(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M2_Emplaced_Base_Skeleton_AnimBlueprint.M2_Emplaced_Base_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M2_Emplaced_Base_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
