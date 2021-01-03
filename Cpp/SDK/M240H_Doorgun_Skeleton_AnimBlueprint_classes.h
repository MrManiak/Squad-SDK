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

// AnimBlueprintGeneratedClass M240H_Doorgun_Skeleton_AnimBlueprint.M240H_Doorgun_Skeleton_AnimBlueprint_C
// 0x03B8 (FullSize[0x0638] - InheritedSize[0x0280])
class UM240H_Doorgun_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D6FB5E414E639BDD138DFE9683EDEAF8;       // 0x0288(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A610281843C52E35D5A52BA35FBC0366;       // 0x02B8(0x0048)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_047505CB4F1F8389A5F970B371518604; // 0x0300(0x0188)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_7473891F46268678BA6490BD511FD4BA; // 0x0488(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_71EE508C4B1A8EC1DF4D27893A938C96; // 0x04A0(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_38F030F946D3576CC1C1BAAF08BC1DD8; // 0x0560(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B303C3AC422D0B41F5EC17BF874AB24B;       // 0x05A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B4ACDE8C421008BB55B09CB5AEFAE0D4;       // 0x05F0(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M240H_Doorgun_Skeleton_AnimBlueprint.M240H_Doorgun_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M240H_Doorgun_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
