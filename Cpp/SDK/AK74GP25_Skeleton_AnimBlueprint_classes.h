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

// AnimBlueprintGeneratedClass AK74GP25_Skeleton_AnimBlueprint.AK74GP25_Skeleton_AnimBlueprint_C
// 0x03C8 (FullSize[0x0678] - InheritedSize[0x02B0])
class UAK74GP25_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DB8541964BD8693C6A9EE29B968E2E7E;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_056725A145C3A633CDDDA2809A20EF64; // 0x02E8(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_80B2654E49E74054EEB42D9F7A72A707;       // 0x03A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6A7290AA41579C4942FD49B07CD52D8C;       // 0x03F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CEA31C31408BD3D6710D7685B523FCF4; // 0x0438(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_13142A3F46DEBC3355E6C5BCDDF8BC3B;       // 0x04B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_31EFDE5C4490D099E0C0B4803287FCCB; // 0x04F8(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_74E29BCB4628460CF6451EB7AD02388C; // 0x0570(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_761FC29B41EF535FB2C591B7FE699905; // 0x0630(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AK74GP25_Skeleton_AnimBlueprint.AK74GP25_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AK74GP25_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
