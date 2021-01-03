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

// AnimBlueprintGeneratedClass rpg7_Skeleton_AnimBlueprint.rpg7_Skeleton_AnimBlueprint_C
// 0x0368 (FullSize[0x0618] - InheritedSize[0x02B0])
class Urpg7_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D3039831434C290B6E1745A3EB65C855;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C2EDF3F342118F92A296B694AAC1846E; // 0x02E8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5DBC40A34183D36062AAE3BBCECEBB78; // 0x03A8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6BFABE4C419A1B216FA277B5FBC640EF;       // 0x0420(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1D6B67FC40C9DEE889753D99C7E8A2F1;       // 0x0468(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8BD4EFC1442C3058A381FBA4B37A711E; // 0x04B0(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C7B8AB884297E29470433A9BF9E360E1;       // 0x0570(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_18A5BD6B46C2CCFBD3708B89E65A3478; // 0x05B8(0x0018)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_9F1F0D3147CAB8F0CA11B3A266C4CAF8; // 0x05D0(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass rpg7_Skeleton_AnimBlueprint.rpg7_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_rpg7_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
