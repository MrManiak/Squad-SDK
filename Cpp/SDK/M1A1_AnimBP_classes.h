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

// AnimBlueprintGeneratedClass M1A1_AnimBP.M1A1_AnimBP_C
// 0x1542 (FullSize[0x1ED2] - InheritedSize[0x0990])
class UM1A1_AnimBP_C : public USQVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0990(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1DDFC8404FBDBE573EB121BD242B1803;       // 0x0998(0x0030)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_328601DE4BD4C9FEEBCC64B412F3BC4D; // 0x09C8(0x00E0)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_F998ED394FB7A18D4B060899B3F95188; // 0x0AA8(0x0010)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_28290E254575D26D58CC85B771B0A607; // 0x0AB8(0x0020)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_E291110147EF2B41346E789802DA18D8; // 0x0AD8(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_AAF8216147A0E7F149E3BB8E2FE8B3C7; // 0x0BF0(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_AFAD7D7F4417A90BACB7349497B2D8E9; // 0x0D08(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_D0F5B8F74FC0BDF899D88FA7C70B3415; // 0x0E20(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_40161CA742AD3DD73C0623B0C6133CD4; // 0x0F38(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_AED9CBAE49F16BB0E699478BC20471FB; // 0x1050(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_01A373324CF36A91B51635AF71FCF5B5; // 0x1168(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_1A2B1FF3440D581AFF1772BDE55FF20C; // 0x1280(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_3462E73E44FBDF87AECF6891B93A1525; // 0x1398(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_F072F9E34B1840D0BBC9918BA1AB0F32; // 0x14B0(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_DD47FE5047B980A9B75670B0FF62821D; // 0x15C8(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_4E0453704FB95A8D8CAB90ABDE885FD8; // 0x16E0(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_3E73DD244B1EDB53A0ECBE85BA6B4BF1; // 0x17F8(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_5CB4E0A54F4962F7BBE9FB8E32A71782; // 0x1910(0x0118)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_069840BC433FD37BF5BE429D46CF877F; // 0x1A28(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_103AA448455B9E3EB03A8F894EBA6500; // 0x1AE0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7D3434C842CE742E7E7388882BAC59C2; // 0x1B08(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_A9FD870446FB9ECA7416F6BFFFCF8ADD; // 0x1B30(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_09748F6547AC9B68846525A10F8B0219;       // 0x1BF0(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_66B43D6441FE56877A9140A0507726E5; // 0x1C38(0x00C8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_36280DF34AFC9AEA457E0484B284524B; // 0x1D00(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CE63A79746DD33D249E92F8FD72A672A; // 0x1DC8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_141C9EA6477D7BF2DCB2FB88F0203D11; // 0x1E40(0x0078)
	struct FRotator                                    WheelR9_Rot;                                               // 0x1EB8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    WheelL9_Rot;                                               // 0x1EC4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsTrackLeftDestroyed;                                     // 0x1ED0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsTrackRightDestroyed;                                    // 0x1ED1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M1A1_AnimBP.M1A1_AnimBP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M1A1_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
