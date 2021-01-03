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

// AnimBlueprintGeneratedClass M240_Loaders_Turret_Skeleton_AnimBlueprint.M240_Loaders_Turret_Skeleton_AnimBlueprint_C
// 0x03B8 (FullSize[0x0638] - InheritedSize[0x0280])
class UM240_Loaders_Turret_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_AFAB34B345748BE96EF43DAA9006E8F7;       // 0x0288(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A41FB76A44ABB6B70D3D59AC32BD1BBA;       // 0x02B8(0x0048)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_AC8BEF0D46115F187FA13C9B751893C3; // 0x0300(0x0188)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_9C9E277246827689630F9CBC8D9CC15C; // 0x0488(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_71859C4A4F8C578E356C898C70FFCD55; // 0x04A0(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_1C73B3AA404A610D55EBF69C9823E35E; // 0x0560(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D0063297446FD7552B435595FA071D93;       // 0x05A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_73FC41EA41ADF34AAE944AB7044AB401;       // 0x05F0(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M240_Loaders_Turret_Skeleton_AnimBlueprint.M240_Loaders_Turret_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M240_Loaders_Turret_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
