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

// AnimBlueprintGeneratedClass AKS74U_Skeleton_AnimBlueprint.AKS74U_Skeleton_AnimBlueprint_C
// 0x0320 (FullSize[0x05D0] - InheritedSize[0x02B0])
class UAKS74U_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C80011B44665BFC85CC89C907405BC3F;       // 0x02B8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D91EF01D4F09CB2BF7719594C62E8F5B;       // 0x02E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1C771B1C42926A8083F82691D7EC067C; // 0x0330(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_A1841B0C4308566854D478B5770E4BF6; // 0x03A8(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4D56A36D4C965770826C1A93AA6C7851;       // 0x0468(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_5D5DC0764FC8BD37707B1D8D28EB36CC; // 0x04B0(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_CA75C91C4A0694E077F2ECAAB5AF6180; // 0x04C8(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_FB23507B455E8749703A54911185E083; // 0x0588(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AKS74U_Skeleton_AnimBlueprint.AKS74U_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AKS74U_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
