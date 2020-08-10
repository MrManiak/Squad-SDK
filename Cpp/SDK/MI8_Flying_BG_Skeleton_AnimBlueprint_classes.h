#pragma once

// Name: Sq, Version: b21


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

// AnimBlueprintGeneratedClass MI8_Flying_BG_Skeleton_AnimBlueprint.MI8_Flying_BG_Skeleton_AnimBlueprint_C
// 0x01A0 (FullSize[0x0320] - InheritedSize[0x0180])
// LastOffsetWithSize(0x0180)
#define PADDING_0CA0 - 0x0000 // Minimum to subtract -> (00F0)
class UMI8_Flying_BG_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x00F0 PADDING_0CA0, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0270(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_0CA0, struct FAnimNode_Root,                                                 AnimGraphNode_Root_B1F4DAD649D7743AD4D3EFBD691ACD70);      // 0x0278(0x0030) 
		DEFINE_MEMBER_NNN(0x0128 PADDING_0CA0, struct FAnimNode_SequencePlayer,                                       AnimGraphNode_SequencePlayer_4EBA176241FDAC687E5221B8E83C525F); // 0x02A8(0x0078) 
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MI8_Flying_BG_Skeleton_AnimBlueprint.MI8_Flying_BG_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_MI8_Flying_BG_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
