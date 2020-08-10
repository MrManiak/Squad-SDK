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

// AnimBlueprintGeneratedClass M240_Loaders_Turret_Skeleton_AnimBlueprint.M240_Loaders_Turret_Skeleton_AnimBlueprint_C
// 0x03C0 (0x0638 - 0x0278)
public class UM240_Loaders_Turret_Skeleton_AnimBlueprint_C : USQVehicleWeaponAnimInstance
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0280, false); // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<FAnimNode_Root>                    _offAnimGraphNode_Root_AFAB34B345748BE96EF43DAA9006E8F7        = new ExternalOffset<FAnimNode_Root>(0x0288, false);           // 0x0288(0x0030)
	private ExternalOffset<FAnimNode_Slot>                    _offAnimGraphNode_Slot_A41FB76A44ABB6B70D3D59AC32BD1BBA        = new ExternalOffset<FAnimNode_Slot>(0x02B8, false);           // 0x02B8(0x0048)
	private ExternalOffset<FAnimNode_RotationOffsetBlendSpace> _offAnimGraphNode_RotationOffsetBlendSpace_AC8BEF0D46115F187FA13C9B751893C3 = new ExternalOffset<FAnimNode_RotationOffsetBlendSpace>(0x0300, false); // 0x0300(0x0188)
	private ExternalOffset<FAnimNode_RefPose>                 _offAnimGraphNode_LocalRefPose_9C9E277246827689630F9CBC8D9CC15C = new ExternalOffset<FAnimNode_RefPose>(0x0488, false);        // 0x0488(0x0018)
	private ExternalOffset<FAnimNode_LayeredBoneBlend>        _offAnimGraphNode_LayeredBoneBlend_71859C4A4F8C578E356C898C70FFCD55 = new ExternalOffset<FAnimNode_LayeredBoneBlend>(0x04A0, false); // 0x04A0(0x00C0)
	private ExternalOffset<FAnimNode_SequenceEvaluator>       _offAnimGraphNode_SequenceEvaluator_1C73B3AA404A610D55EBF69C9823E35E = new ExternalOffset<FAnimNode_SequenceEvaluator>(0x0560, false); // 0x0560(0x0048)
	private ExternalOffset<FAnimNode_Slot>                    _offAnimGraphNode_Slot_D0063297446FD7552B435595FA071D93        = new ExternalOffset<FAnimNode_Slot>(0x05A8, false);           // 0x05A8(0x0048)
	private ExternalOffset<FAnimNode_Slot>                    _offAnimGraphNode_Slot_73FC41EA41ADF34AAE944AB7044AB401        = new ExternalOffset<FAnimNode_Slot>(0x05F0, false);           // 0x05F0(0x0048)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public FAnimNode_Root                                     AnimGraphNode_Root_AFAB34B345748BE96EF43DAA9006E8F7            => _offAnimGraphNode_Root_AFAB34B345748BE96EF43DAA9006E8F7.GetValue();
	public FAnimNode_Slot                                     AnimGraphNode_Slot_A41FB76A44ABB6B70D3D59AC32BD1BBA            => _offAnimGraphNode_Slot_A41FB76A44ABB6B70D3D59AC32BD1BBA.GetValue();
	public FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace_AC8BEF0D46115F187FA13C9B751893C3 => _offAnimGraphNode_RotationOffsetBlendSpace_AC8BEF0D46115F187FA13C9B751893C3.GetValue();
	public FAnimNode_RefPose                                  AnimGraphNode_LocalRefPose_9C9E277246827689630F9CBC8D9CC15C    => _offAnimGraphNode_LocalRefPose_9C9E277246827689630F9CBC8D9CC15C.GetValue();
	public FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend_71859C4A4F8C578E356C898C70FFCD55 => _offAnimGraphNode_LayeredBoneBlend_71859C4A4F8C578E356C898C70FFCD55.GetValue();
	public FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator_1C73B3AA404A610D55EBF69C9823E35E => _offAnimGraphNode_SequenceEvaluator_1C73B3AA404A610D55EBF69C9823E35E.GetValue();
	public FAnimNode_Slot                                     AnimGraphNode_Slot_D0063297446FD7552B435595FA071D93            => _offAnimGraphNode_Slot_D0063297446FD7552B435595FA071D93.GetValue();
	public FAnimNode_Slot                                     AnimGraphNode_Slot_73FC41EA41ADF34AAE944AB7044AB401            => _offAnimGraphNode_Slot_73FC41EA41ADF34AAE944AB7044AB401.GetValue();
	#endregion


}


}