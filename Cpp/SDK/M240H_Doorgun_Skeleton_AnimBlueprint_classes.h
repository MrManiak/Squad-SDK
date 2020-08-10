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

// AnimBlueprintGeneratedClass M240H_Doorgun_Skeleton_AnimBlueprint.M240H_Doorgun_Skeleton_AnimBlueprint_C
// 0x03C0 (FullSize[0x0638] - InheritedSize[0x0278])
// LastOffsetWithSize(0x0278)
#define PADDING_0128 - 0x0000 // Minimum to subtract -> (0008)
class UM240H_Doorgun_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0128, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0280(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0128, struct FAnimNode_Root,                                                 AnimGraphNode_Root_D6FB5E414E639BDD138DFE9683EDEAF8);      // 0x0288(0x0030) 
		DEFINE_MEMBER_NNN(0x0040 PADDING_0128, struct FAnimNode_Slot,                                                 AnimGraphNode_Slot_A610281843C52E35D5A52BA35FBC0366);      // 0x02B8(0x0048) 
		DEFINE_MEMBER_NNN(0x0088 PADDING_0128, struct FAnimNode_RotationOffsetBlendSpace,                             AnimGraphNode_RotationOffsetBlendSpace_047505CB4F1F8389A5F970B371518604); // 0x0300(0x0188) 
		DEFINE_MEMBER_NNN(0x0210 PADDING_0128, struct FAnimNode_RefPose,                                              AnimGraphNode_LocalRefPose_7473891F46268678BA6490BD511FD4BA); // 0x0488(0x0018) 
		DEFINE_MEMBER_NNN(0x0228 PADDING_0128, struct FAnimNode_LayeredBoneBlend,                                     AnimGraphNode_LayeredBoneBlend_71EE508C4B1A8EC1DF4D27893A938C96); // 0x04A0(0x00C0) 
		DEFINE_MEMBER_NNN(0x02E8 PADDING_0128, struct FAnimNode_SequenceEvaluator,                                    AnimGraphNode_SequenceEvaluator_38F030F946D3576CC1C1BAAF08BC1DD8); // 0x0560(0x0048) 
		DEFINE_MEMBER_NNN(0x0330 PADDING_0128, struct FAnimNode_Slot,                                                 AnimGraphNode_Slot_B303C3AC422D0B41F5EC17BF874AB24B);      // 0x05A8(0x0048) 
		DEFINE_MEMBER_NNN(0x0378 PADDING_0128, struct FAnimNode_Slot,                                                 AnimGraphNode_Slot_B4ACDE8C421008BB55B09CB5AEFAE0D4);      // 0x05F0(0x0048) 
	};

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
