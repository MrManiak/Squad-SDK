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

// AnimBlueprintGeneratedClass AK74GP25_UGL_Skeleton_AnimBlueprint.AK74GP25_UGL_Skeleton_AnimBlueprint_C
// 0x0368 (FullSize[0x0618] - InheritedSize[0x02B0])
class UAK74GP25_UGL_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2717030B48BA522BE72A1895002E18E4;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_0C1CF6474C909D49F8DCA7B75FCEBA30; // 0x02E8(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6A1ADD9D41DEB14EFF829D9C1F9BCE62;       // 0x03A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7A240C39418EA94DA763BFADD147FBB4;       // 0x03F0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DFEF34044C4E88CB20FAE4AB7F965846;       // 0x0438(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D7E83CB64AF7D3A9E305669818225FE5; // 0x0480(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3D4E609C4B8F6B0FCE7C409148CFF6DF; // 0x04F8(0x00C0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_7A628039422676C64C46CCB4C5C72D52; // 0x05B8(0x0018)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_EF3D8E94493768E2355645A514D16B5D; // 0x05D0(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AK74GP25_UGL_Skeleton_AnimBlueprint.AK74GP25_UGL_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AK74GP25_UGL_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
