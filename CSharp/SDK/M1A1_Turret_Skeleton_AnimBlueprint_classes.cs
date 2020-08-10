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

// AnimBlueprintGeneratedClass M1A1_Turret_Skeleton_AnimBlueprint.M1A1_Turret_Skeleton_AnimBlueprint_C
// 0x0D08 (0x0E88 - 0x0180)
public class UM1A1_Turret_Skeleton_AnimBlueprint_C : UAnimInstance
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0270, false); // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<FAnimNode_Root>                    _offAnimGraphNode_Root_AFD1383A4E131E0C73D0C792B78EBCC6        = new ExternalOffset<FAnimNode_Root>(0x0278, false);           // 0x0278(0x0030)
	private ExternalOffset<FAnimNode_UseCachedPose>           _offAnimGraphNode_UseCachedPose_63DE80DC48417095F0D0AC963DB2BEDB = new ExternalOffset<FAnimNode_UseCachedPose>(0x02A8, false);  // 0x02A8(0x0028)
	private ExternalOffset<FAnimNode_UseCachedPose>           _offAnimGraphNode_UseCachedPose_89083ACE49481CE136DFE5868F066DB7 = new ExternalOffset<FAnimNode_UseCachedPose>(0x02D0, false);  // 0x02D0(0x0028)
	private ExternalOffset<FAnimNode_Slot>                    _offAnimGraphNode_Slot_F9CA2269485A4165728625BA9B16B015        = new ExternalOffset<FAnimNode_Slot>(0x02F8, false);           // 0x02F8(0x0048)
	private ExternalOffset<FAnimNode_LayeredBoneBlend>        _offAnimGraphNode_LayeredBoneBlend_290511B643E553296AB1C8BB1E0FD85D = new ExternalOffset<FAnimNode_LayeredBoneBlend>(0x0340, false); // 0x0340(0x00C0)
	private ExternalOffset<FAnimNode_MeshSpaceRefPose>        _offAnimGraphNode_MeshRefPose_479BBDA441A3BAD2EF06F6A125C3DE00 = new ExternalOffset<FAnimNode_MeshSpaceRefPose>(0x0400, false); // 0x0400(0x0010)
	private ExternalOffset<FAnimNode_AnimDynamics>            _offAnimGraphNode_AnimDynamics_32796DF545C08636FECB9FA17AD7B05C = new ExternalOffset<FAnimNode_AnimDynamics>(0x0410, false);   // 0x0410(0x0440)
	private ExternalOffset<FAnimNode_AnimDynamics>            _offAnimGraphNode_AnimDynamics_1CB60B4B4ED3790A22954BAB19D277CC = new ExternalOffset<FAnimNode_AnimDynamics>(0x0850, false);   // 0x0850(0x0440)
	private ExternalOffset<FAnimNode_SaveCachedPose>          _offAnimGraphNode_SaveCachedPose_CDEEB92940ACF8EFCCA441BB606272B1 = new ExternalOffset<FAnimNode_SaveCachedPose>(0x0C90, false); // 0x0C90(0x00B8)
	private ExternalOffset<FAnimNode_SaveCachedPose>          _offAnimGraphNode_SaveCachedPose_5505CC2B4B00F8D27290548D3B859652 = new ExternalOffset<FAnimNode_SaveCachedPose>(0x0D48, false); // 0x0D48(0x00B8)
	private ExternalOffset<FAnimNode_ConvertComponentToLocalSpace> _offAnimGraphNode_ComponentToLocalSpace_6A12A6D44304A6D4DEE3CFBABF12C6A6 = new ExternalOffset<FAnimNode_ConvertComponentToLocalSpace>(0x0E00, false); // 0x0E00(0x0020)
	private ExternalOffset<FAnimNode_UseCachedPose>           _offAnimGraphNode_UseCachedPose_84A5ABF24AC4EEA6CB2370B6922B2FF5 = new ExternalOffset<FAnimNode_UseCachedPose>(0x0E20, false);  // 0x0E20(0x0028)
	private ExternalOffset<FAnimNode_ConvertLocalToComponentSpace> _offAnimGraphNode_LocalToComponentSpace_50A7E5CB415475BB167BD2AE3BDDF50F = new ExternalOffset<FAnimNode_ConvertLocalToComponentSpace>(0x0E48, false); // 0x0E48(0x0020)
	private ExternalOffset<FAnimNode_ConvertComponentToLocalSpace> _offAnimGraphNode_ComponentToLocalSpace_D8B2D3B64D6F13ED95828A9A70612ECB = new ExternalOffset<FAnimNode_ConvertComponentToLocalSpace>(0x0E68, false); // 0x0E68(0x0020)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public FAnimNode_Root                                     AnimGraphNode_Root_AFD1383A4E131E0C73D0C792B78EBCC6            => _offAnimGraphNode_Root_AFD1383A4E131E0C73D0C792B78EBCC6.GetValue();
	public FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose_63DE80DC48417095F0D0AC963DB2BEDB   => _offAnimGraphNode_UseCachedPose_63DE80DC48417095F0D0AC963DB2BEDB.GetValue();
	public FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose_89083ACE49481CE136DFE5868F066DB7   => _offAnimGraphNode_UseCachedPose_89083ACE49481CE136DFE5868F066DB7.GetValue();
	public FAnimNode_Slot                                     AnimGraphNode_Slot_F9CA2269485A4165728625BA9B16B015            => _offAnimGraphNode_Slot_F9CA2269485A4165728625BA9B16B015.GetValue();
	public FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend_290511B643E553296AB1C8BB1E0FD85D => _offAnimGraphNode_LayeredBoneBlend_290511B643E553296AB1C8BB1E0FD85D.GetValue();
	public FAnimNode_MeshSpaceRefPose                         AnimGraphNode_MeshRefPose_479BBDA441A3BAD2EF06F6A125C3DE00     => _offAnimGraphNode_MeshRefPose_479BBDA441A3BAD2EF06F6A125C3DE00.GetValue();
	public FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics_32796DF545C08636FECB9FA17AD7B05C    => _offAnimGraphNode_AnimDynamics_32796DF545C08636FECB9FA17AD7B05C.GetValue();
	public FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics_1CB60B4B4ED3790A22954BAB19D277CC    => _offAnimGraphNode_AnimDynamics_1CB60B4B4ED3790A22954BAB19D277CC.GetValue();
	public FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose_CDEEB92940ACF8EFCCA441BB606272B1  => _offAnimGraphNode_SaveCachedPose_CDEEB92940ACF8EFCCA441BB606272B1.GetValue();
	public FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose_5505CC2B4B00F8D27290548D3B859652  => _offAnimGraphNode_SaveCachedPose_5505CC2B4B00F8D27290548D3B859652.GetValue();
	public FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace_6A12A6D44304A6D4DEE3CFBABF12C6A6 => _offAnimGraphNode_ComponentToLocalSpace_6A12A6D44304A6D4DEE3CFBABF12C6A6.GetValue();
	public FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose_84A5ABF24AC4EEA6CB2370B6922B2FF5   => _offAnimGraphNode_UseCachedPose_84A5ABF24AC4EEA6CB2370B6922B2FF5.GetValue();
	public FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace_50A7E5CB415475BB167BD2AE3BDDF50F => _offAnimGraphNode_LocalToComponentSpace_50A7E5CB415475BB167BD2AE3BDDF50F.GetValue();
	public FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace_D8B2D3B64D6F13ED95828A9A70612ECB => _offAnimGraphNode_ComponentToLocalSpace_D8B2D3B64D6F13ED95828A9A70612ECB.GetValue();
	#endregion


}


}