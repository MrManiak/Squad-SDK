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

// AnimBlueprintGeneratedClass M1A1_AnimBP.M1A1_AnimBP_C
// 0x154A (0x1ED2 - 0x0988)
public class UM1A1_AnimBP_C : USQVehicleAnimInstance
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0990, false); // 0x0990(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<FAnimNode_Root>                    _offAnimGraphNode_Root_1DDFC8404FBDBE573EB121BD242B1803        = new ExternalOffset<FAnimNode_Root>(0x0998, false);           // 0x0998(0x0030)
	private ExternalOffset<FAnimNode_WheelHandler>            _offAnimGraphNode_WheelHandler_328601DE4BD4C9FEEBCC64B412F3BC4D = new ExternalOffset<FAnimNode_WheelHandler>(0x09C8, false);   // 0x09C8(0x00E0)
	private ExternalOffset<FAnimNode_MeshSpaceRefPose>        _offAnimGraphNode_MeshRefPose_F998ED394FB7A18D4B060899B3F95188 = new ExternalOffset<FAnimNode_MeshSpaceRefPose>(0x0AA8, false); // 0x0AA8(0x0010)
	private ExternalOffset<FAnimNode_ConvertComponentToLocalSpace> _offAnimGraphNode_ComponentToLocalSpace_28290E254575D26D58CC85B771B0A607 = new ExternalOffset<FAnimNode_ConvertComponentToLocalSpace>(0x0AB8, false); // 0x0AB8(0x0020)
	private ExternalOffset<FAnimNode_BoneDrivenController>    _offAnimGraphNode_BoneDrivenController_E291110147EF2B41346E789802DA18D8 = new ExternalOffset<FAnimNode_BoneDrivenController>(0x0AD8, false); // 0x0AD8(0x0118)
	private ExternalOffset<FAnimNode_BoneDrivenController>    _offAnimGraphNode_BoneDrivenController_AAF8216147A0E7F149E3BB8E2FE8B3C7 = new ExternalOffset<FAnimNode_BoneDrivenController>(0x0BF0, false); // 0x0BF0(0x0118)
	private ExternalOffset<FAnimNode_BoneDrivenController>    _offAnimGraphNode_BoneDrivenController_AFAD7D7F4417A90BACB7349497B2D8E9 = new ExternalOffset<FAnimNode_BoneDrivenController>(0x0D08, false); // 0x0D08(0x0118)
	private ExternalOffset<FAnimNode_BoneDrivenController>    _offAnimGraphNode_BoneDrivenController_D0F5B8F74FC0BDF899D88FA7C70B3415 = new ExternalOffset<FAnimNode_BoneDrivenController>(0x0E20, false); // 0x0E20(0x0118)
	private ExternalOffset<FAnimNode_BoneDrivenController>    _offAnimGraphNode_BoneDrivenController_40161CA742AD3DD73C0623B0C6133CD4 = new ExternalOffset<FAnimNode_BoneDrivenController>(0x0F38, false); // 0x0F38(0x0118)
	private ExternalOffset<FAnimNode_BoneDrivenController>    _offAnimGraphNode_BoneDrivenController_AED9CBAE49F16BB0E699478BC20471FB = new ExternalOffset<FAnimNode_BoneDrivenController>(0x1050, false); // 0x1050(0x0118)
	private ExternalOffset<FAnimNode_BoneDrivenController>    _offAnimGraphNode_BoneDrivenController_01A373324CF36A91B51635AF71FCF5B5 = new ExternalOffset<FAnimNode_BoneDrivenController>(0x1168, false); // 0x1168(0x0118)
	private ExternalOffset<FAnimNode_BoneDrivenController>    _offAnimGraphNode_BoneDrivenController_1A2B1FF3440D581AFF1772BDE55FF20C = new ExternalOffset<FAnimNode_BoneDrivenController>(0x1280, false); // 0x1280(0x0118)
	private ExternalOffset<FAnimNode_BoneDrivenController>    _offAnimGraphNode_BoneDrivenController_3462E73E44FBDF87AECF6891B93A1525 = new ExternalOffset<FAnimNode_BoneDrivenController>(0x1398, false); // 0x1398(0x0118)
	private ExternalOffset<FAnimNode_BoneDrivenController>    _offAnimGraphNode_BoneDrivenController_F072F9E34B1840D0BBC9918BA1AB0F32 = new ExternalOffset<FAnimNode_BoneDrivenController>(0x14B0, false); // 0x14B0(0x0118)
	private ExternalOffset<FAnimNode_BoneDrivenController>    _offAnimGraphNode_BoneDrivenController_DD47FE5047B980A9B75670B0FF62821D = new ExternalOffset<FAnimNode_BoneDrivenController>(0x15C8, false); // 0x15C8(0x0118)
	private ExternalOffset<FAnimNode_BoneDrivenController>    _offAnimGraphNode_BoneDrivenController_4E0453704FB95A8D8CAB90ABDE885FD8 = new ExternalOffset<FAnimNode_BoneDrivenController>(0x16E0, false); // 0x16E0(0x0118)
	private ExternalOffset<FAnimNode_BoneDrivenController>    _offAnimGraphNode_BoneDrivenController_3E73DD244B1EDB53A0ECBE85BA6B4BF1 = new ExternalOffset<FAnimNode_BoneDrivenController>(0x17F8, false); // 0x17F8(0x0118)
	private ExternalOffset<FAnimNode_BoneDrivenController>    _offAnimGraphNode_BoneDrivenController_5CB4E0A54F4962F7BBE9FB8E32A71782 = new ExternalOffset<FAnimNode_BoneDrivenController>(0x1910, false); // 0x1910(0x0118)
	private ExternalOffset<FAnimNode_SaveCachedPose>          _offAnimGraphNode_SaveCachedPose_069840BC433FD37BF5BE429D46CF877F = new ExternalOffset<FAnimNode_SaveCachedPose>(0x1A28, false); // 0x1A28(0x00B8)
	private ExternalOffset<FAnimNode_UseCachedPose>           _offAnimGraphNode_UseCachedPose_103AA448455B9E3EB03A8F894EBA6500 = new ExternalOffset<FAnimNode_UseCachedPose>(0x1AE0, false);  // 0x1AE0(0x0028)
	private ExternalOffset<FAnimNode_UseCachedPose>           _offAnimGraphNode_UseCachedPose_7D3434C842CE742E7E7388882BAC59C2 = new ExternalOffset<FAnimNode_UseCachedPose>(0x1B08, false);  // 0x1B08(0x0028)
	private ExternalOffset<FAnimNode_LayeredBoneBlend>        _offAnimGraphNode_LayeredBoneBlend_A9FD870446FB9ECA7416F6BFFFCF8ADD = new ExternalOffset<FAnimNode_LayeredBoneBlend>(0x1B30, false); // 0x1B30(0x00C0)
	private ExternalOffset<FAnimNode_Slot>                    _offAnimGraphNode_Slot_09748F6547AC9B68846525A10F8B0219        = new ExternalOffset<FAnimNode_Slot>(0x1BF0, false);           // 0x1BF0(0x0048)
	private ExternalOffset<FAnimNode_ApplyAdditive>           _offAnimGraphNode_ApplyAdditive_66B43D6441FE56877A9140A0507726E5 = new ExternalOffset<FAnimNode_ApplyAdditive>(0x1C38, false);  // 0x1C38(0x00C8)
	private ExternalOffset<FAnimNode_ApplyAdditive>           _offAnimGraphNode_ApplyAdditive_36280DF34AFC9AEA457E0484B284524B = new ExternalOffset<FAnimNode_ApplyAdditive>(0x1D00, false);  // 0x1D00(0x00C8)
	private ExternalOffset<FAnimNode_SequencePlayer>          _offAnimGraphNode_SequencePlayer_CE63A79746DD33D249E92F8FD72A672A = new ExternalOffset<FAnimNode_SequencePlayer>(0x1DC8, false); // 0x1DC8(0x0078)
	private ExternalOffset<FAnimNode_SequencePlayer>          _offAnimGraphNode_SequencePlayer_141C9EA6477D7BF2DCB2FB88F0203D11 = new ExternalOffset<FAnimNode_SequencePlayer>(0x1E40, false); // 0x1E40(0x0078)
	private ExternalOffset<FRotator>                          _offWheelR9_Rot                                                = new ExternalOffset<FRotator>(0x1EB8, false);                 // 0x1EB8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FRotator>                          _offWheelL9_Rot                                                = new ExternalOffset<FRotator>(0x1EC4, false);                 // 0x1EC4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsTrackLeftDestroyed                                      = new ExternalOffset<byte/*(bool)*/>(0x1ED0);                  // 0x1ED0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsTrackRightDestroyed                                     = new ExternalOffset<byte/*(bool)*/>(0x1ED1);                  // 0x1ED1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public FAnimNode_Root                                     AnimGraphNode_Root_1DDFC8404FBDBE573EB121BD242B1803            => _offAnimGraphNode_Root_1DDFC8404FBDBE573EB121BD242B1803.GetValue();
	public FAnimNode_WheelHandler                             AnimGraphNode_WheelHandler_328601DE4BD4C9FEEBCC64B412F3BC4D    => _offAnimGraphNode_WheelHandler_328601DE4BD4C9FEEBCC64B412F3BC4D.GetValue();
	public FAnimNode_MeshSpaceRefPose                         AnimGraphNode_MeshRefPose_F998ED394FB7A18D4B060899B3F95188     => _offAnimGraphNode_MeshRefPose_F998ED394FB7A18D4B060899B3F95188.GetValue();
	public FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace_28290E254575D26D58CC85B771B0A607 => _offAnimGraphNode_ComponentToLocalSpace_28290E254575D26D58CC85B771B0A607.GetValue();
	public FAnimNode_BoneDrivenController                     AnimGraphNode_BoneDrivenController_E291110147EF2B41346E789802DA18D8 => _offAnimGraphNode_BoneDrivenController_E291110147EF2B41346E789802DA18D8.GetValue();
	public FAnimNode_BoneDrivenController                     AnimGraphNode_BoneDrivenController_AAF8216147A0E7F149E3BB8E2FE8B3C7 => _offAnimGraphNode_BoneDrivenController_AAF8216147A0E7F149E3BB8E2FE8B3C7.GetValue();
	public FAnimNode_BoneDrivenController                     AnimGraphNode_BoneDrivenController_AFAD7D7F4417A90BACB7349497B2D8E9 => _offAnimGraphNode_BoneDrivenController_AFAD7D7F4417A90BACB7349497B2D8E9.GetValue();
	public FAnimNode_BoneDrivenController                     AnimGraphNode_BoneDrivenController_D0F5B8F74FC0BDF899D88FA7C70B3415 => _offAnimGraphNode_BoneDrivenController_D0F5B8F74FC0BDF899D88FA7C70B3415.GetValue();
	public FAnimNode_BoneDrivenController                     AnimGraphNode_BoneDrivenController_40161CA742AD3DD73C0623B0C6133CD4 => _offAnimGraphNode_BoneDrivenController_40161CA742AD3DD73C0623B0C6133CD4.GetValue();
	public FAnimNode_BoneDrivenController                     AnimGraphNode_BoneDrivenController_AED9CBAE49F16BB0E699478BC20471FB => _offAnimGraphNode_BoneDrivenController_AED9CBAE49F16BB0E699478BC20471FB.GetValue();
	public FAnimNode_BoneDrivenController                     AnimGraphNode_BoneDrivenController_01A373324CF36A91B51635AF71FCF5B5 => _offAnimGraphNode_BoneDrivenController_01A373324CF36A91B51635AF71FCF5B5.GetValue();
	public FAnimNode_BoneDrivenController                     AnimGraphNode_BoneDrivenController_1A2B1FF3440D581AFF1772BDE55FF20C => _offAnimGraphNode_BoneDrivenController_1A2B1FF3440D581AFF1772BDE55FF20C.GetValue();
	public FAnimNode_BoneDrivenController                     AnimGraphNode_BoneDrivenController_3462E73E44FBDF87AECF6891B93A1525 => _offAnimGraphNode_BoneDrivenController_3462E73E44FBDF87AECF6891B93A1525.GetValue();
	public FAnimNode_BoneDrivenController                     AnimGraphNode_BoneDrivenController_F072F9E34B1840D0BBC9918BA1AB0F32 => _offAnimGraphNode_BoneDrivenController_F072F9E34B1840D0BBC9918BA1AB0F32.GetValue();
	public FAnimNode_BoneDrivenController                     AnimGraphNode_BoneDrivenController_DD47FE5047B980A9B75670B0FF62821D => _offAnimGraphNode_BoneDrivenController_DD47FE5047B980A9B75670B0FF62821D.GetValue();
	public FAnimNode_BoneDrivenController                     AnimGraphNode_BoneDrivenController_4E0453704FB95A8D8CAB90ABDE885FD8 => _offAnimGraphNode_BoneDrivenController_4E0453704FB95A8D8CAB90ABDE885FD8.GetValue();
	public FAnimNode_BoneDrivenController                     AnimGraphNode_BoneDrivenController_3E73DD244B1EDB53A0ECBE85BA6B4BF1 => _offAnimGraphNode_BoneDrivenController_3E73DD244B1EDB53A0ECBE85BA6B4BF1.GetValue();
	public FAnimNode_BoneDrivenController                     AnimGraphNode_BoneDrivenController_5CB4E0A54F4962F7BBE9FB8E32A71782 => _offAnimGraphNode_BoneDrivenController_5CB4E0A54F4962F7BBE9FB8E32A71782.GetValue();
	public FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose_069840BC433FD37BF5BE429D46CF877F  => _offAnimGraphNode_SaveCachedPose_069840BC433FD37BF5BE429D46CF877F.GetValue();
	public FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose_103AA448455B9E3EB03A8F894EBA6500   => _offAnimGraphNode_UseCachedPose_103AA448455B9E3EB03A8F894EBA6500.GetValue();
	public FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose_7D3434C842CE742E7E7388882BAC59C2   => _offAnimGraphNode_UseCachedPose_7D3434C842CE742E7E7388882BAC59C2.GetValue();
	public FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend_A9FD870446FB9ECA7416F6BFFFCF8ADD => _offAnimGraphNode_LayeredBoneBlend_A9FD870446FB9ECA7416F6BFFFCF8ADD.GetValue();
	public FAnimNode_Slot                                     AnimGraphNode_Slot_09748F6547AC9B68846525A10F8B0219            => _offAnimGraphNode_Slot_09748F6547AC9B68846525A10F8B0219.GetValue();
	public FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive_66B43D6441FE56877A9140A0507726E5   => _offAnimGraphNode_ApplyAdditive_66B43D6441FE56877A9140A0507726E5.GetValue();
	public FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive_36280DF34AFC9AEA457E0484B284524B   => _offAnimGraphNode_ApplyAdditive_36280DF34AFC9AEA457E0484B284524B.GetValue();
	public FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer_CE63A79746DD33D249E92F8FD72A672A  => _offAnimGraphNode_SequencePlayer_CE63A79746DD33D249E92F8FD72A672A.GetValue();
	public FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer_141C9EA6477D7BF2DCB2FB88F0203D11  => _offAnimGraphNode_SequencePlayer_141C9EA6477D7BF2DCB2FB88F0203D11.GetValue();
	public FRotator                                           WheelR9_Rot                                                    => _offWheelR9_Rot.GetValue();
	public FRotator                                           WheelL9_Rot                                                    => _offWheelL9_Rot.GetValue();
	public byte/*(bool)*/                                     bIsTrackLeftDestroyed                                          => _offbIsTrackLeftDestroyed.GetValue();
	public byte/*(bool)*/                                     bIsTrackRightDestroyed                                         => _offbIsTrackRightDestroyed.GetValue();
	#endregion


}


}