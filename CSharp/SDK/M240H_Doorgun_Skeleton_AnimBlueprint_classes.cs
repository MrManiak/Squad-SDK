// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass M240H_Doorgun_Skeleton_AnimBlueprint.M240H_Doorgun_Skeleton_AnimBlueprint_C
// 0x03C0 (0x0638 - 0x0278)
public class UM240H_Doorgun_Skeleton_AnimBlueprint_C : USQVehicleWeaponAnimInstance
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0280, false); // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<FAnimNode_Root>                    _offAnimGraphNode_Root_D6FB5E414E639BDD138DFE9683EDEAF8        = new ExternalOffset<FAnimNode_Root>(0x0288, false);           // 0x0288(0x0030)
	private ExternalOffset<FAnimNode_Slot>                    _offAnimGraphNode_Slot_A610281843C52E35D5A52BA35FBC0366        = new ExternalOffset<FAnimNode_Slot>(0x02B8, false);           // 0x02B8(0x0048)
	private ExternalOffset<FAnimNode_RotationOffsetBlendSpace> _offAnimGraphNode_RotationOffsetBlendSpace_047505CB4F1F8389A5F970B371518604 = new ExternalOffset<FAnimNode_RotationOffsetBlendSpace>(0x0300, false); // 0x0300(0x0188)
	private ExternalOffset<FAnimNode_RefPose>                 _offAnimGraphNode_LocalRefPose_7473891F46268678BA6490BD511FD4BA = new ExternalOffset<FAnimNode_RefPose>(0x0488, false);        // 0x0488(0x0018)
	private ExternalOffset<FAnimNode_LayeredBoneBlend>        _offAnimGraphNode_LayeredBoneBlend_71EE508C4B1A8EC1DF4D27893A938C96 = new ExternalOffset<FAnimNode_LayeredBoneBlend>(0x04A0, false); // 0x04A0(0x00C0)
	private ExternalOffset<FAnimNode_SequenceEvaluator>       _offAnimGraphNode_SequenceEvaluator_38F030F946D3576CC1C1BAAF08BC1DD8 = new ExternalOffset<FAnimNode_SequenceEvaluator>(0x0560, false); // 0x0560(0x0048)
	private ExternalOffset<FAnimNode_Slot>                    _offAnimGraphNode_Slot_B303C3AC422D0B41F5EC17BF874AB24B        = new ExternalOffset<FAnimNode_Slot>(0x05A8, false);           // 0x05A8(0x0048)
	private ExternalOffset<FAnimNode_Slot>                    _offAnimGraphNode_Slot_B4ACDE8C421008BB55B09CB5AEFAE0D4        = new ExternalOffset<FAnimNode_Slot>(0x05F0, false);           // 0x05F0(0x0048)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public FAnimNode_Root                                     AnimGraphNode_Root_D6FB5E414E639BDD138DFE9683EDEAF8            => _offAnimGraphNode_Root_D6FB5E414E639BDD138DFE9683EDEAF8.GetValue();
	public FAnimNode_Slot                                     AnimGraphNode_Slot_A610281843C52E35D5A52BA35FBC0366            => _offAnimGraphNode_Slot_A610281843C52E35D5A52BA35FBC0366.GetValue();
	public FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace_047505CB4F1F8389A5F970B371518604 => _offAnimGraphNode_RotationOffsetBlendSpace_047505CB4F1F8389A5F970B371518604.GetValue();
	public FAnimNode_RefPose                                  AnimGraphNode_LocalRefPose_7473891F46268678BA6490BD511FD4BA    => _offAnimGraphNode_LocalRefPose_7473891F46268678BA6490BD511FD4BA.GetValue();
	public FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend_71EE508C4B1A8EC1DF4D27893A938C96 => _offAnimGraphNode_LayeredBoneBlend_71EE508C4B1A8EC1DF4D27893A938C96.GetValue();
	public FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator_38F030F946D3576CC1C1BAAF08BC1DD8 => _offAnimGraphNode_SequenceEvaluator_38F030F946D3576CC1C1BAAF08BC1DD8.GetValue();
	public FAnimNode_Slot                                     AnimGraphNode_Slot_B303C3AC422D0B41F5EC17BF874AB24B            => _offAnimGraphNode_Slot_B303C3AC422D0B41F5EC17BF874AB24B.GetValue();
	public FAnimNode_Slot                                     AnimGraphNode_Slot_B4ACDE8C421008BB55B09CB5AEFAE0D4            => _offAnimGraphNode_Slot_B4ACDE8C421008BB55B09CB5AEFAE0D4.GetValue();
	#endregion


}


}