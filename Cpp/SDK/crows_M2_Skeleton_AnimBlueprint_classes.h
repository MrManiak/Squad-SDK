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

// AnimBlueprintGeneratedClass crows_M2_Skeleton_AnimBlueprint.crows_M2_Skeleton_AnimBlueprint_C
// 0x0228 (FullSize[0x04A0] - InheritedSize[0x0278])
// LastOffsetWithSize(0x0278)
#define PADDING_02F5 - 0x0000 // Minimum to subtract -> (0008)
class Ucrows_M2_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_02F5, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0280(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0010 PADDING_02F5, struct FAnimNode_Root,                                                 AnimGraphNode_Root_DE826B39496E9048782B64BE72432D1A);      // 0x0288(0x0030) 
		DEFINE_MEMBER_NNN(0x0040 PADDING_02F5, struct FAnimNode_Slot,                                                 AnimGraphNode_Slot_F7BA92BA426480485959F180314EE360);      // 0x02B8(0x0048) 
		DEFINE_MEMBER_NNN(0x0088 PADDING_02F5, struct FAnimNode_RefPose,                                              AnimGraphNode_LocalRefPose_366B55754A15A74F0CA0488DC1C85453); // 0x0300(0x0018) 
		DEFINE_MEMBER_NNN(0x00A0 PADDING_02F5, struct FAnimNode_RotationOffsetBlendSpace,                             AnimGraphNode_RotationOffsetBlendSpace_E01159C844524B11CFE5B0882850F32E); // 0x0318(0x0188) 
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass crows_M2_Skeleton_AnimBlueprint.crows_M2_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_crows_M2_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
