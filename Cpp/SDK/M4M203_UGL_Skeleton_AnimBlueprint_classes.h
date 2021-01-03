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

// AnimBlueprintGeneratedClass M4M203_UGL_Skeleton_AnimBlueprint.M4M203_UGL_Skeleton_AnimBlueprint_C
// 0x0408 (FullSize[0x06B8] - InheritedSize[0x02B0])
class UM4M203_UGL_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A5DA3A2D41272C408240AFBC21242F96;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_108AC6484E23052C43CD249C697A3716; // 0x02E8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_74B9493B4723CE0E7D775CB49FD1AAA9; // 0x03A8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EC71264B4935EBD7C7E5DCA4AF790395;       // 0x0420(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B749BD224A77ADFC8C342AA19B90E7CA;       // 0x0468(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_210093224A609FAE79ABAEAC97C1BE8B;       // 0x04B0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_316B4F6F41DF4916B94409B19664C5CB; // 0x04F8(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E604F74B4A72166BEE2328AA8FFA4285; // 0x0600(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D057CE2D40CA064150A19BB5F321B1AB; // 0x0620(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CF3F7B3742ED288361AC1B8BBE33CE17; // 0x0640(0x0078)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M4M203_UGL_Skeleton_AnimBlueprint.M4M203_UGL_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M4M203_UGL_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
