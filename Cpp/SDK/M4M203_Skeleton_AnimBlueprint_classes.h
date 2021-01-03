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

// AnimBlueprintGeneratedClass M4M203_Skeleton_AnimBlueprint.M4M203_Skeleton_AnimBlueprint_C
// 0x06FC (FullSize[0x09AC] - InheritedSize[0x02B0])
class UM4M203_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3627E3D5486F04AA38AA4B8C766C8BD8;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_15CFBAC7497005D8596A0AAAC39F85D4; // 0x02E8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_268573CE41CEE78662001E89A8DD012B; // 0x03A8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9A240A4745DD4DFD819ADC92DF738370;       // 0x0420(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D81A3FD840E7B7326A003589436EFEB8;       // 0x0468(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D316B62C4A633DD7AEEE08A0CBD99F0C;       // 0x04B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5E06D0C844B713729CFEFC8DD7576BD5; // 0x04F8(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_BE9707734B8B29AAB8795B85A2534510; // 0x0570(0x00C0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_892407B5453A0BA3CCF190AB56FC6EC1; // 0x0630(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8FD9CB30473F303BC10ADD85359415DE; // 0x0648(0x00C0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4B92330C43A64B233804C98448E9D80C; // 0x0708(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C40A21674CA47855605D75B6B3FF8E85; // 0x0810(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9881EF2746DBC2CEE37099AF24B09104; // 0x0830(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_B025CD7B4785343033202D89978BA013; // 0x0850(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DA251E29438C7126BB78B1AA03ADD1C9; // 0x0898(0x0108)
	struct FVector                                     LadderScaleAds;                                            // 0x09A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M4M203_Skeleton_AnimBlueprint.M4M203_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M4M203_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
