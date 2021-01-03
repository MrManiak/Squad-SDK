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

// AnimBlueprintGeneratedClass M4M203_Carryhandle_Skeleton_AnimBlueprint.M4M203_Carryhandle_Skeleton_AnimBlueprint_C
// 0x05F4 (FullSize[0x08A4] - InheritedSize[0x02B0])
class UM4M203_Carryhandle_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BDE1EE544F8916819737EF8129D9FA1D;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_878F702E4E159DBC7D6BF28B948E0737; // 0x02E8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_453B952A44CB9A0CAB9D888796C7D582; // 0x03A8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DD9766F64B96AB42BEE76AA81E7B6F81;       // 0x0420(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_90D8BF4D4D5A6E61188C07AD50DA7988;       // 0x0468(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_ACCF408E4AE15B7056E8439FA3D8529F;       // 0x04B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5160BECF4519C7149676B58A645142DE; // 0x04F8(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_0886B387432268103374128DADCEF80D; // 0x0570(0x00C0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_255B99E543E6D3B0793DD7B7EA2DD844; // 0x0630(0x0018)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D049EFB04855AA5EF0B738889D868A34; // 0x0648(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_10DA121F4751C4F8CEA6FFB0BA2458D8; // 0x0750(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8681A21B4F78142DC15D5E9E22581B7C; // 0x0770(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B2669F85444346146226F386963648A7; // 0x0790(0x0108)
	struct FVector                                     LadderScaleAds;                                            // 0x0898(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M4M203_Carryhandle_Skeleton_AnimBlueprint.M4M203_Carryhandle_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M4M203_Carryhandle_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
