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

// AnimBlueprintGeneratedClass minsk_animbp.minsk_animbp_C
// 0x1908 (FullSize[0x2290] - InheritedSize[0x0988])
// LastOffsetWithSize(0x0988)
#define PADDING_0245 - 0x0000 // Minimum to subtract -> (0008)
class Uminsk_animbp_C : public USQVehicleAnimInstance
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0245, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0990(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0245, struct FAnimNode_Root,                                                 AnimGraphNode_Root_DABAD6604F1FC73641C40CBDC17FAF10);      // 0x0998(0x0030) 
		DEFINE_MEMBER_NNN(0x0040 PADDING_0245, struct FAnimNode_MeshSpaceRefPose,                                     AnimGraphNode_MeshRefPose_507BFAD54E77B03A8742D4A883733896); // 0x09C8(0x0010) 
		DEFINE_MEMBER_NNN(0x0050 PADDING_0245, struct FAnimNode_WheelHandler,                                         AnimGraphNode_WheelHandler_C20FE90743CE90AC066F53B3447316EF); // 0x09D8(0x00E0) 
		DEFINE_MEMBER_NNN(0x0130 PADDING_0245, struct FAnimNode_ConvertComponentToLocalSpace,                         AnimGraphNode_ComponentToLocalSpace_93AA864049FB436324C6C29A89EC19C0); // 0x0AB8(0x0020) 
		DEFINE_MEMBER_NNN(0x0150 PADDING_0245, struct FAnimNode_BoneDrivenController,                                 AnimGraphNode_BoneDrivenController_229486A0444E1B2F48F9A2AF0BD328BC); // 0x0AD8(0x0118) 
		DEFINE_MEMBER_NNN(0x0268 PADDING_0245, struct FAnimNode_LookAt,                                               AnimGraphNode_LookAt_483A6CE04811BDD29E9B91A1DB0E8676);    // 0x0BF0(0x01B0) 
		DEFINE_MEMBER_NNN(0x0418 PADDING_0245, struct FAnimNode_LookAt,                                               AnimGraphNode_LookAt_BA2E71C14D545D94D610A6831721B515);    // 0x0DA0(0x01B0) 
		DEFINE_MEMBER_NNN(0x05C8 PADDING_0245, struct FAnimNode_CopyBone,                                             AnimGraphNode_CopyBone_5247A903480FBDC7692982A116DFA70F);  // 0x0F50(0x00F0) 
		DEFINE_MEMBER_NNN(0x06B8 PADDING_0245, struct FAnimNode_CopyBone,                                             AnimGraphNode_CopyBone_2ABCC7504BFA3D322127B883B276DC6F);  // 0x1040(0x00F0) 
		DEFINE_MEMBER_NNN(0x07A8 PADDING_0245, struct FAnimNode_CopyBone,                                             AnimGraphNode_CopyBone_46CD80184006482048751699761E22A5);  // 0x1130(0x00F0) 
		DEFINE_MEMBER_NNN(0x0898 PADDING_0245, struct FAnimNode_LookAt,                                               AnimGraphNode_LookAt_DEC6F772454EEC9F9B4885864CADD428);    // 0x1220(0x01B0) 
		DEFINE_MEMBER_NNN(0x0A48 PADDING_0245, struct FAnimNode_BoneDrivenController,                                 AnimGraphNode_BoneDrivenController_8DCD47F949AA5F5B7E887194A2A2536B); // 0x13D0(0x0118) 
		DEFINE_MEMBER_NNN(0x0B60 PADDING_0245, struct FAnimNode_ModifyBone,                                           AnimGraphNode_ModifyBone_D2052DCE4D0EE4C737037CBC72A14193); // 0x14E8(0x0108) 
		DEFINE_MEMBER_NNN(0x0C68 PADDING_0245, struct FAnimNode_LookAt,                                               AnimGraphNode_LookAt_C18E2E3A44D798C2B295199F4CE78131);    // 0x15F0(0x01B0) 
		DEFINE_MEMBER_NNN(0x0E18 PADDING_0245, struct FAnimNode_BoneDrivenController,                                 AnimGraphNode_BoneDrivenController_360BEFAB451FDBB238513A8CE7EFFB19); // 0x17A0(0x0118) 
		DEFINE_MEMBER_NNN(0x0F30 PADDING_0245, struct FAnimNode_SaveCachedPose,                                       AnimGraphNode_SaveCachedPose_33C132EF4E353FAE430C14A18135D6AD); // 0x18B8(0x00B8) 
		DEFINE_MEMBER_NNN(0x0FE8 PADDING_0245, struct FAnimNode_UseCachedPose,                                        AnimGraphNode_UseCachedPose_054CF9454BADE67F9CC811BFD9AEC080); // 0x1970(0x0028) 
		DEFINE_MEMBER_NNN(0x1010 PADDING_0245, struct FAnimNode_UseCachedPose,                                        AnimGraphNode_UseCachedPose_F3172D2941BEDEFC7FE5BBA994A73EDF); // 0x1998(0x0028) 
		DEFINE_MEMBER_NNN(0x1038 PADDING_0245, struct FAnimNode_LayeredBoneBlend,                                     AnimGraphNode_LayeredBoneBlend_1032C0A44FECDDACF413D392253908B6); // 0x19C0(0x00C0) 
		DEFINE_MEMBER_NNN(0x10F8 PADDING_0245, struct FAnimNode_Slot,                                                 AnimGraphNode_Slot_265A6C72465E7E3564D06CAB9A58CFD1);      // 0x1A80(0x0048) 
		DEFINE_MEMBER_NNN(0x1140 PADDING_0245, struct FAnimNode_ModifyBone,                                           AnimGraphNode_ModifyBone_5837095749B83F46AA539994724488C9); // 0x1AC8(0x0108) 
		DEFINE_MEMBER_NNN(0x1248 PADDING_0245, struct FAnimNode_ModifyBone,                                           AnimGraphNode_ModifyBone_8ABB52E44A9D2D0999644A86B8CB0813); // 0x1BD0(0x0108) 
		DEFINE_MEMBER_NNN(0x1350 PADDING_0245, struct FAnimNode_BlendListByBool,                                      AnimGraphNode_BlendListByBool_4DBB991D45AEB9A39B9F23AEFCEC516A); // 0x1CD8(0x00A0) 
		DEFINE_MEMBER_NNN(0x13F0 PADDING_0245, struct FAnimNode_ConvertComponentToLocalSpace,                         AnimGraphNode_ComponentToLocalSpace_306394124D11EDB274C0959B93200409); // 0x1D78(0x0020) 
		DEFINE_MEMBER_NNN(0x1410 PADDING_0245, struct FAnimNode_SaveCachedPose,                                       AnimGraphNode_SaveCachedPose_8F695C65460E5D29144BB1B65C708423); // 0x1D98(0x00B8) 
		DEFINE_MEMBER_NNN(0x14C8 PADDING_0245, struct FAnimNode_UseCachedPose,                                        AnimGraphNode_UseCachedPose_D550718546796C345593A09060F9C178); // 0x1E50(0x0028) 
		DEFINE_MEMBER_NNN(0x14F0 PADDING_0245, struct FAnimNode_ConvertLocalToComponentSpace,                         AnimGraphNode_LocalToComponentSpace_E8BC65404B4F0E84B35EA6824D4B1F3C); // 0x1E78(0x0020) 
		DEFINE_MEMBER_NNN(0x1510 PADDING_0245, struct FAnimNode_ConvertComponentToLocalSpace,                         AnimGraphNode_ComponentToLocalSpace_B09F0B2C4DE880E4BBF3F7B9E3A07507); // 0x1E98(0x0020) 
		DEFINE_MEMBER_NNN(0x1530 PADDING_0245, struct FAnimNode_ConvertLocalToComponentSpace,                         AnimGraphNode_LocalToComponentSpace_7F3B0752468E5D1D681202B40409940E); // 0x1EB8(0x0020) 
		DEFINE_MEMBER_NNN(0x1550 PADDING_0245, struct FAnimNode_ModifyBone,                                           AnimGraphNode_ModifyBone_AAEE91B14AF8EB566E0E319EE7D8A28F); // 0x1ED8(0x0108) 
		DEFINE_MEMBER_NNN(0x1658 PADDING_0245, struct FAnimNode_UseCachedPose,                                        AnimGraphNode_UseCachedPose_46A6FB8447BDE9A68A1429A2AE89B1F2); // 0x1FE0(0x0028) 
		DEFINE_MEMBER_NNN(0x1680 PADDING_0245, struct FAnimNode_ConvertLocalToComponentSpace,                         AnimGraphNode_LocalToComponentSpace_B58BAED049B22F4A86F69D84BA0EBB07); // 0x2008(0x0020) 
		DEFINE_MEMBER_NNN(0x16A0 PADDING_0245, struct FAnimNode_ConvertComponentToLocalSpace,                         AnimGraphNode_ComponentToLocalSpace_66B0447941A817ABD4E66C80DF7C9326); // 0x2028(0x0020) 
		DEFINE_MEMBER_NNN(0x16C0 PADDING_0245, struct FAnimNode_BoneDrivenController,                                 AnimGraphNode_BoneDrivenController_3676C5284C5901616ACCCEB8D0C71CDA); // 0x2048(0x0118) 
		DEFINE_MEMBER_NNN(0x17D8 PADDING_0245, struct FAnimNode_BoneDrivenController,                                 AnimGraphNode_BoneDrivenController_2781633541A0B672AF974F912002822E); // 0x2160(0x0118) 
		DEFINE_MEMBER_NNN(0x18F0 PADDING_0245, struct FVector,                                                        Wheel_Front_Scale);                                        // 0x2278(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x18FC PADDING_0245, struct FVector,                                                        Wheel_Rear_Scale);                                         // 0x2284(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass minsk_animbp.minsk_animbp_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_minsk_animbp(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
