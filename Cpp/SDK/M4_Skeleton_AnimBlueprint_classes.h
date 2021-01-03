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

// AnimBlueprintGeneratedClass M4_Skeleton_AnimBlueprint.M4_Skeleton_AnimBlueprint_C
// 0x09F8 (FullSize[0x0CA8] - InheritedSize[0x02B0])
class UM4_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4136E2114573D91EF6AD3BA1AB5C101C;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_04976B224AB9E867E56882809065D5A8; // 0x02E8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A308368548A80EEC8E7AF5B49CA45883; // 0x03A8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_93DA30564D7FC3A0A729498FA0227F0D;       // 0x0420(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5D7FE9164BED39B4B000E8B4CDA1A1BF;       // 0x0468(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4F714EED40D6EF2E742D3893876618FE;       // 0x04B0(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_CE504B634E54B3B14B5F30969F1111F7; // 0x04F8(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2DA60691488E6DF154FD3788C73994E6; // 0x0510(0x00C0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_75FF0A0F40C67CA270DF58A10E5B3869; // 0x05D0(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F037B8134954E52D7FE1E9B7E033561F; // 0x06D8(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7703DDA140F04C06466B7B84DB44EEEF; // 0x06F8(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E075DB674D7B6B554DC33D8651A68456; // 0x0740(0x0440)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D610FA8D4282C3DB890A77AE3050B487; // 0x0B80(0x0020)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B99C6768407C6F7B2170B39FC1BB764E; // 0x0BA0(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_60FD65CC40A067B70770749F56CD7860; // 0x0C60(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M4_Skeleton_AnimBlueprint.M4_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M4_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
