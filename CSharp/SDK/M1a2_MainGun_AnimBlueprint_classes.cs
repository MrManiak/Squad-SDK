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

// AnimBlueprintGeneratedClass M1a2_MainGun_AnimBlueprint.M1a2_MainGun_AnimBlueprint_C
// 0x00A0 (0x0318 - 0x0278)
public class UM1a2_MainGun_AnimBlueprint_C : USQVehicleWeaponAnimInstance
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0280, false); // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<FAnimNode_Root>                    _offAnimGraphNode_Root_88A79DB74EE7932272752EB4E7082C0B        = new ExternalOffset<FAnimNode_Root>(0x0288, false);           // 0x0288(0x0030)
	private ExternalOffset<FAnimNode_RefPose>                 _offAnimGraphNode_LocalRefPose_4C5191EB44BBE1088C672CABB2F63CDB = new ExternalOffset<FAnimNode_RefPose>(0x02B8, false);        // 0x02B8(0x0018)
	private ExternalOffset<FAnimNode_Slot>                    _offAnimGraphNode_Slot_978E5E85481BAA341396688FD7EA943C        = new ExternalOffset<FAnimNode_Slot>(0x02D0, false);           // 0x02D0(0x0048)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public FAnimNode_Root                                     AnimGraphNode_Root_88A79DB74EE7932272752EB4E7082C0B            => _offAnimGraphNode_Root_88A79DB74EE7932272752EB4E7082C0B.GetValue();
	public FAnimNode_RefPose                                  AnimGraphNode_LocalRefPose_4C5191EB44BBE1088C672CABB2F63CDB    => _offAnimGraphNode_LocalRefPose_4C5191EB44BBE1088C672CABB2F63CDB.GetValue();
	public FAnimNode_Slot                                     AnimGraphNode_Slot_978E5E85481BAA341396688FD7EA943C            => _offAnimGraphNode_Slot_978E5E85481BAA341396688FD7EA943C.GetValue();
	#endregion


}


}