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

// AnimBlueprintGeneratedClass M72A7_Skeleton_AnimBlueprint.M72A7_Skeleton_AnimBlueprint_C
// 0x0368 (FullSize[0x0618] - InheritedSize[0x02B0])
class UM72A7_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_AE13B2F040E71F49D77D46A569567D64;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7FF17B5346C322495714388DC17B9C84; // 0x02E8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_868D44D040DE66A171BF828DE548272D; // 0x03A8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_822278C540717052E069228E2FB05EE5;       // 0x0420(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_862635C3411FAFDE3B8AE69E160053E8;       // 0x0468(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_94DA38D34100202FF037FEAF90FF99F4; // 0x04B0(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_748AB4DA441263691C3706BA2A3566F5;       // 0x0570(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_14DDF007420CB05B1E41D1B6F2C4AC24; // 0x05B8(0x0018)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_4E4BC9104D30EC69E4BAFF9F5F4B1EC0; // 0x05D0(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M72A7_Skeleton_AnimBlueprint.M72A7_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M72A7_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
