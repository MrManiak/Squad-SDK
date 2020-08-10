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

// AnimBlueprintGeneratedClass crows_M2_Skeleton_AnimBlueprint.crows_M2_Skeleton_AnimBlueprint_C
// 0x0228 (0x04A0 - 0x0278)
public class Ucrows_M2_Skeleton_AnimBlueprint_C : USQVehicleWeaponAnimInstance
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0280, false); // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<FAnimNode_Root>                    _offAnimGraphNode_Root_DE826B39496E9048782B64BE72432D1A        = new ExternalOffset<FAnimNode_Root>(0x0288, false);           // 0x0288(0x0030)
	private ExternalOffset<FAnimNode_Slot>                    _offAnimGraphNode_Slot_F7BA92BA426480485959F180314EE360        = new ExternalOffset<FAnimNode_Slot>(0x02B8, false);           // 0x02B8(0x0048)
	private ExternalOffset<FAnimNode_RefPose>                 _offAnimGraphNode_LocalRefPose_366B55754A15A74F0CA0488DC1C85453 = new ExternalOffset<FAnimNode_RefPose>(0x0300, false);        // 0x0300(0x0018)
	private ExternalOffset<FAnimNode_RotationOffsetBlendSpace> _offAnimGraphNode_RotationOffsetBlendSpace_E01159C844524B11CFE5B0882850F32E = new ExternalOffset<FAnimNode_RotationOffsetBlendSpace>(0x0318, false); // 0x0318(0x0188)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public FAnimNode_Root                                     AnimGraphNode_Root_DE826B39496E9048782B64BE72432D1A            => _offAnimGraphNode_Root_DE826B39496E9048782B64BE72432D1A.GetValue();
	public FAnimNode_Slot                                     AnimGraphNode_Slot_F7BA92BA426480485959F180314EE360            => _offAnimGraphNode_Slot_F7BA92BA426480485959F180314EE360.GetValue();
	public FAnimNode_RefPose                                  AnimGraphNode_LocalRefPose_366B55754A15A74F0CA0488DC1C85453    => _offAnimGraphNode_LocalRefPose_366B55754A15A74F0CA0488DC1C85453.GetValue();
	public FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace_E01159C844524B11CFE5B0882850F32E => _offAnimGraphNode_RotationOffsetBlendSpace_E01159C844524B11CFE5B0882850F32E.GetValue();
	#endregion


}


}