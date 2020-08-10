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

// AnimBlueprintGeneratedClass M2_Emplaced_Base_Skeleton_AnimBlueprint.M2_Emplaced_Base_Skeleton_AnimBlueprint_C
// 0x03C0 (0x0638 - 0x0278)
public class UM2_Emplaced_Base_Skeleton_AnimBlueprint_C : USQVehicleWeaponAnimInstance
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0280, false); // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<FAnimNode_Root>                    _offAnimGraphNode_Root_C9EE1071422F3D2DA4180EBF9790B197        = new ExternalOffset<FAnimNode_Root>(0x0288, false);           // 0x0288(0x0030)
	private ExternalOffset<FAnimNode_Slot>                    _offAnimGraphNode_Slot_DE79F49E4DC230EF1FF5F2BC196F136E        = new ExternalOffset<FAnimNode_Slot>(0x02B8, false);           // 0x02B8(0x0048)
	private ExternalOffset<FAnimNode_RotationOffsetBlendSpace> _offAnimGraphNode_RotationOffsetBlendSpace_820D035A4204102B869FDB8BB66BBF0C = new ExternalOffset<FAnimNode_RotationOffsetBlendSpace>(0x0300, false); // 0x0300(0x0188)
	private ExternalOffset<FAnimNode_RefPose>                 _offAnimGraphNode_LocalRefPose_FDD6390043E75410DE8E60A9DDF25AF9 = new ExternalOffset<FAnimNode_RefPose>(0x0488, false);        // 0x0488(0x0018)
	private ExternalOffset<FAnimNode_LayeredBoneBlend>        _offAnimGraphNode_LayeredBoneBlend_95B0421347130D19EC1085ADEF99C76D = new ExternalOffset<FAnimNode_LayeredBoneBlend>(0x04A0, false); // 0x04A0(0x00C0)
	private ExternalOffset<FAnimNode_SequenceEvaluator>       _offAnimGraphNode_SequenceEvaluator_3A19BECE49165A36C8F46EAB986645C0 = new ExternalOffset<FAnimNode_SequenceEvaluator>(0x0560, false); // 0x0560(0x0048)
	private ExternalOffset<FAnimNode_Slot>                    _offAnimGraphNode_Slot_AC57FEB649AC033240D833B33FFEC64A        = new ExternalOffset<FAnimNode_Slot>(0x05A8, false);           // 0x05A8(0x0048)
	private ExternalOffset<FAnimNode_Slot>                    _offAnimGraphNode_Slot_9A0356494D065E4D61ECDD992214013C        = new ExternalOffset<FAnimNode_Slot>(0x05F0, false);           // 0x05F0(0x0048)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public FAnimNode_Root                                     AnimGraphNode_Root_C9EE1071422F3D2DA4180EBF9790B197            => _offAnimGraphNode_Root_C9EE1071422F3D2DA4180EBF9790B197.GetValue();
	public FAnimNode_Slot                                     AnimGraphNode_Slot_DE79F49E4DC230EF1FF5F2BC196F136E            => _offAnimGraphNode_Slot_DE79F49E4DC230EF1FF5F2BC196F136E.GetValue();
	public FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace_820D035A4204102B869FDB8BB66BBF0C => _offAnimGraphNode_RotationOffsetBlendSpace_820D035A4204102B869FDB8BB66BBF0C.GetValue();
	public FAnimNode_RefPose                                  AnimGraphNode_LocalRefPose_FDD6390043E75410DE8E60A9DDF25AF9    => _offAnimGraphNode_LocalRefPose_FDD6390043E75410DE8E60A9DDF25AF9.GetValue();
	public FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend_95B0421347130D19EC1085ADEF99C76D => _offAnimGraphNode_LayeredBoneBlend_95B0421347130D19EC1085ADEF99C76D.GetValue();
	public FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator_3A19BECE49165A36C8F46EAB986645C0 => _offAnimGraphNode_SequenceEvaluator_3A19BECE49165A36C8F46EAB986645C0.GetValue();
	public FAnimNode_Slot                                     AnimGraphNode_Slot_AC57FEB649AC033240D833B33FFEC64A            => _offAnimGraphNode_Slot_AC57FEB649AC033240D833B33FFEC64A.GetValue();
	public FAnimNode_Slot                                     AnimGraphNode_Slot_9A0356494D065E4D61ECDD992214013C            => _offAnimGraphNode_Slot_9A0356494D065E4D61ECDD992214013C.GetValue();
	#endregion


}


}