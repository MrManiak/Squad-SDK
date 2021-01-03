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

// AnimBlueprintGeneratedClass Arbalet_Kord_AnimBP.Arbalet_Kord_AnimBP_C
// 0x0370 (FullSize[0x05F0] - InheritedSize[0x0280])
class UArbalet_Kord_AnimBP_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A8887C7843EDD553BD044A82E02A2439;       // 0x0288(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E33C152F4FCBDE013E9FD38BF62880F0;       // 0x02B8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_D8529353449FD1F8038A78A8FA19C65E; // 0x0300(0x0018)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_2FD208BD44CEEE22C409468316C3951E; // 0x0318(0x0188)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4E970E004439CC2CF4EDEB953556BECF; // 0x04A0(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_F7C0ACA04AC4BD7E41FC54AA11E37CF9; // 0x0560(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4F181F5D41172F00CB047AA0ED6903EF;       // 0x05A8(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Arbalet_Kord_AnimBP.Arbalet_Kord_AnimBP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Arbalet_Kord_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
