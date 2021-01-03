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

// AnimBlueprintGeneratedClass rpg7v2_Skeleton_AnimBlueprint.rpg7v2_Skeleton_AnimBlueprint_C
// 0x0398 (FullSize[0x0648] - InheritedSize[0x02B0])
class Urpg7v2_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E0CECCFA49FE9389620AFE8D3096328E;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_F3B0CB6240CF145CB3E0BE937853E3AD; // 0x02E8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_67DD363640B34E8D000E98BD2431C216; // 0x03A8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A0CE83B64D9CC006683F4B9B1615EDF5;       // 0x0420(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F2287A36475278A64D137892E39E0493;       // 0x0468(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4228073E4B6CCBE278A3B4B0CEF1627B; // 0x04B0(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_508FF6F4463FDC4B045716A340994C73;       // 0x0570(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3B39F28040740C519198858DB53C82CB; // 0x05B8(0x0078)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_DE2CF9BC492E19C2B74239870FF78791; // 0x0630(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass rpg7v2_Skeleton_AnimBlueprint.rpg7v2_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_rpg7v2_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
