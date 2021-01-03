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

// AnimBlueprintGeneratedClass AK74M_Skeleton_AnimBlueprint.AK74M_Skeleton_AnimBlueprint_C
// 0x0320 (FullSize[0x05D0] - InheritedSize[0x02B0])
class UAK74M_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_53045A3D481E9BCD744378950CF2F784;       // 0x02B8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B5DC3B564C87BDB0145E61AEC640C19D;       // 0x02E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7B34720F433C890EADEDB39B7AB8A2F5; // 0x0330(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7443B5984913D8A6F3EA3BA3CAAB00A0; // 0x03A8(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CF85BB6A46D7213AA31533BCEFE0F78F;       // 0x0468(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_B86637DB4524ACCCB3E0E389D4346D87; // 0x04B0(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B4F00A10437E73764F34B1A493BE99C3; // 0x04C8(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_6074C4954FD40735219BE68D510946DF; // 0x0588(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AK74M_Skeleton_AnimBlueprint.AK74M_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AK74M_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
