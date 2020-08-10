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

// AnimBlueprintGeneratedClass minsk_animbp.minsk_animbp_C
// 0x1908 (0x2290 - 0x0988)
public class Uminsk_animbp_C : USQVehicleAnimInstance
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0990, false); // 0x0990(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<FAnimNode_Root>                    _offAnimGraphNode_Root_DABAD6604F1FC73641C40CBDC17FAF10        = new ExternalOffset<FAnimNode_Root>(0x0998, false);           // 0x0998(0x0030)
	private ExternalOffset<FAnimNode_MeshSpaceRefPose>        _offAnimGraphNode_MeshRefPose_507BFAD54E77B03A8742D4A883733896 = new ExternalOffset<FAnimNode_MeshSpaceRefPose>(0x09C8, false); // 0x09C8(0x0010)
	private ExternalOffset<FAnimNode_WheelHandler>            _offAnimGraphNode_WheelHandler_C20FE90743CE90AC066F53B3447316EF = new ExternalOffset<FAnimNode_WheelHandler>(0x09D8, false);   // 0x09D8(0x00E0)
	private ExternalOffset<FAnimNode_ConvertComponentToLocalSpace> _offAnimGraphNode_ComponentToLocalSpace_93AA864049FB436324C6C29A89EC19C0 = new ExternalOffset<FAnimNode_ConvertComponentToLocalSpace>(0x0AB8, false); // 0x0AB8(0x0020)
	private ExternalOffset<FAnimNode_BoneDrivenController>    _offAnimGraphNode_BoneDrivenController_229486A0444E1B2F48F9A2AF0BD328BC = new ExternalOffset<FAnimNode_BoneDrivenController>(0x0AD8, false); // 0x0AD8(0x0118)
	private ExternalOffset<FAnimNode_LookAt>                  _offAnimGraphNode_LookAt_483A6CE04811BDD29E9B91A1DB0E8676      = new ExternalOffset<FAnimNode_LookAt>(0x0BF0, false);         // 0x0BF0(0x01B0)
	private ExternalOffset<FAnimNode_LookAt>                  _offAnimGraphNode_LookAt_BA2E71C14D545D94D610A6831721B515      = new ExternalOffset<FAnimNode_LookAt>(0x0DA0, false);         // 0x0DA0(0x01B0)
	private ExternalOffset<FAnimNode_CopyBone>                _offAnimGraphNode_CopyBone_5247A903480FBDC7692982A116DFA70F    = new ExternalOffset<FAnimNode_CopyBone>(0x0F50, false);       // 0x0F50(0x00F0)
	private ExternalOffset<FAnimNode_CopyBone>                _offAnimGraphNode_CopyBone_2ABCC7504BFA3D322127B883B276DC6F    = new ExternalOffset<FAnimNode_CopyBone>(0x1040, false);       // 0x1040(0x00F0)
	private ExternalOffset<FAnimNode_CopyBone>                _offAnimGraphNode_CopyBone_46CD80184006482048751699761E22A5    = new ExternalOffset<FAnimNode_CopyBone>(0x1130, false);       // 0x1130(0x00F0)
	private ExternalOffset<FAnimNode_LookAt>                  _offAnimGraphNode_LookAt_DEC6F772454EEC9F9B4885864CADD428      = new ExternalOffset<FAnimNode_LookAt>(0x1220, false);         // 0x1220(0x01B0)
	private ExternalOffset<FAnimNode_BoneDrivenController>    _offAnimGraphNode_BoneDrivenController_8DCD47F949AA5F5B7E887194A2A2536B = new ExternalOffset<FAnimNode_BoneDrivenController>(0x13D0, false); // 0x13D0(0x0118)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_D2052DCE4D0EE4C737037CBC72A14193  = new ExternalOffset<FAnimNode_ModifyBone>(0x14E8, false);     // 0x14E8(0x0108)
	private ExternalOffset<FAnimNode_LookAt>                  _offAnimGraphNode_LookAt_C18E2E3A44D798C2B295199F4CE78131      = new ExternalOffset<FAnimNode_LookAt>(0x15F0, false);         // 0x15F0(0x01B0)
	private ExternalOffset<FAnimNode_BoneDrivenController>    _offAnimGraphNode_BoneDrivenController_360BEFAB451FDBB238513A8CE7EFFB19 = new ExternalOffset<FAnimNode_BoneDrivenController>(0x17A0, false); // 0x17A0(0x0118)
	private ExternalOffset<FAnimNode_SaveCachedPose>          _offAnimGraphNode_SaveCachedPose_33C132EF4E353FAE430C14A18135D6AD = new ExternalOffset<FAnimNode_SaveCachedPose>(0x18B8, false); // 0x18B8(0x00B8)
	private ExternalOffset<FAnimNode_UseCachedPose>           _offAnimGraphNode_UseCachedPose_054CF9454BADE67F9CC811BFD9AEC080 = new ExternalOffset<FAnimNode_UseCachedPose>(0x1970, false);  // 0x1970(0x0028)
	private ExternalOffset<FAnimNode_UseCachedPose>           _offAnimGraphNode_UseCachedPose_F3172D2941BEDEFC7FE5BBA994A73EDF = new ExternalOffset<FAnimNode_UseCachedPose>(0x1998, false);  // 0x1998(0x0028)
	private ExternalOffset<FAnimNode_LayeredBoneBlend>        _offAnimGraphNode_LayeredBoneBlend_1032C0A44FECDDACF413D392253908B6 = new ExternalOffset<FAnimNode_LayeredBoneBlend>(0x19C0, false); // 0x19C0(0x00C0)
	private ExternalOffset<FAnimNode_Slot>                    _offAnimGraphNode_Slot_265A6C72465E7E3564D06CAB9A58CFD1        = new ExternalOffset<FAnimNode_Slot>(0x1A80, false);           // 0x1A80(0x0048)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_5837095749B83F46AA539994724488C9  = new ExternalOffset<FAnimNode_ModifyBone>(0x1AC8, false);     // 0x1AC8(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_8ABB52E44A9D2D0999644A86B8CB0813  = new ExternalOffset<FAnimNode_ModifyBone>(0x1BD0, false);     // 0x1BD0(0x0108)
	private ExternalOffset<FAnimNode_BlendListByBool>         _offAnimGraphNode_BlendListByBool_4DBB991D45AEB9A39B9F23AEFCEC516A = new ExternalOffset<FAnimNode_BlendListByBool>(0x1CD8, false); // 0x1CD8(0x00A0)
	private ExternalOffset<FAnimNode_ConvertComponentToLocalSpace> _offAnimGraphNode_ComponentToLocalSpace_306394124D11EDB274C0959B93200409 = new ExternalOffset<FAnimNode_ConvertComponentToLocalSpace>(0x1D78, false); // 0x1D78(0x0020)
	private ExternalOffset<FAnimNode_SaveCachedPose>          _offAnimGraphNode_SaveCachedPose_8F695C65460E5D29144BB1B65C708423 = new ExternalOffset<FAnimNode_SaveCachedPose>(0x1D98, false); // 0x1D98(0x00B8)
	private ExternalOffset<FAnimNode_UseCachedPose>           _offAnimGraphNode_UseCachedPose_D550718546796C345593A09060F9C178 = new ExternalOffset<FAnimNode_UseCachedPose>(0x1E50, false);  // 0x1E50(0x0028)
	private ExternalOffset<FAnimNode_ConvertLocalToComponentSpace> _offAnimGraphNode_LocalToComponentSpace_E8BC65404B4F0E84B35EA6824D4B1F3C = new ExternalOffset<FAnimNode_ConvertLocalToComponentSpace>(0x1E78, false); // 0x1E78(0x0020)
	private ExternalOffset<FAnimNode_ConvertComponentToLocalSpace> _offAnimGraphNode_ComponentToLocalSpace_B09F0B2C4DE880E4BBF3F7B9E3A07507 = new ExternalOffset<FAnimNode_ConvertComponentToLocalSpace>(0x1E98, false); // 0x1E98(0x0020)
	private ExternalOffset<FAnimNode_ConvertLocalToComponentSpace> _offAnimGraphNode_LocalToComponentSpace_7F3B0752468E5D1D681202B40409940E = new ExternalOffset<FAnimNode_ConvertLocalToComponentSpace>(0x1EB8, false); // 0x1EB8(0x0020)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_AAEE91B14AF8EB566E0E319EE7D8A28F  = new ExternalOffset<FAnimNode_ModifyBone>(0x1ED8, false);     // 0x1ED8(0x0108)
	private ExternalOffset<FAnimNode_UseCachedPose>           _offAnimGraphNode_UseCachedPose_46A6FB8447BDE9A68A1429A2AE89B1F2 = new ExternalOffset<FAnimNode_UseCachedPose>(0x1FE0, false);  // 0x1FE0(0x0028)
	private ExternalOffset<FAnimNode_ConvertLocalToComponentSpace> _offAnimGraphNode_LocalToComponentSpace_B58BAED049B22F4A86F69D84BA0EBB07 = new ExternalOffset<FAnimNode_ConvertLocalToComponentSpace>(0x2008, false); // 0x2008(0x0020)
	private ExternalOffset<FAnimNode_ConvertComponentToLocalSpace> _offAnimGraphNode_ComponentToLocalSpace_66B0447941A817ABD4E66C80DF7C9326 = new ExternalOffset<FAnimNode_ConvertComponentToLocalSpace>(0x2028, false); // 0x2028(0x0020)
	private ExternalOffset<FAnimNode_BoneDrivenController>    _offAnimGraphNode_BoneDrivenController_3676C5284C5901616ACCCEB8D0C71CDA = new ExternalOffset<FAnimNode_BoneDrivenController>(0x2048, false); // 0x2048(0x0118)
	private ExternalOffset<FAnimNode_BoneDrivenController>    _offAnimGraphNode_BoneDrivenController_2781633541A0B672AF974F912002822E = new ExternalOffset<FAnimNode_BoneDrivenController>(0x2160, false); // 0x2160(0x0118)
	private ExternalOffset<FVector>                           _offWheel_Front_Scale                                          = new ExternalOffset<FVector>(0x2278, false);                  // 0x2278(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FVector>                           _offWheel_Rear_Scale                                           = new ExternalOffset<FVector>(0x2284, false);                  // 0x2284(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public FAnimNode_Root                                     AnimGraphNode_Root_DABAD6604F1FC73641C40CBDC17FAF10            => _offAnimGraphNode_Root_DABAD6604F1FC73641C40CBDC17FAF10.GetValue();
	public FAnimNode_MeshSpaceRefPose                         AnimGraphNode_MeshRefPose_507BFAD54E77B03A8742D4A883733896     => _offAnimGraphNode_MeshRefPose_507BFAD54E77B03A8742D4A883733896.GetValue();
	public FAnimNode_WheelHandler                             AnimGraphNode_WheelHandler_C20FE90743CE90AC066F53B3447316EF    => _offAnimGraphNode_WheelHandler_C20FE90743CE90AC066F53B3447316EF.GetValue();
	public FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace_93AA864049FB436324C6C29A89EC19C0 => _offAnimGraphNode_ComponentToLocalSpace_93AA864049FB436324C6C29A89EC19C0.GetValue();
	public FAnimNode_BoneDrivenController                     AnimGraphNode_BoneDrivenController_229486A0444E1B2F48F9A2AF0BD328BC => _offAnimGraphNode_BoneDrivenController_229486A0444E1B2F48F9A2AF0BD328BC.GetValue();
	public FAnimNode_LookAt                                   AnimGraphNode_LookAt_483A6CE04811BDD29E9B91A1DB0E8676          => _offAnimGraphNode_LookAt_483A6CE04811BDD29E9B91A1DB0E8676.GetValue();
	public FAnimNode_LookAt                                   AnimGraphNode_LookAt_BA2E71C14D545D94D610A6831721B515          => _offAnimGraphNode_LookAt_BA2E71C14D545D94D610A6831721B515.GetValue();
	public FAnimNode_CopyBone                                 AnimGraphNode_CopyBone_5247A903480FBDC7692982A116DFA70F        => _offAnimGraphNode_CopyBone_5247A903480FBDC7692982A116DFA70F.GetValue();
	public FAnimNode_CopyBone                                 AnimGraphNode_CopyBone_2ABCC7504BFA3D322127B883B276DC6F        => _offAnimGraphNode_CopyBone_2ABCC7504BFA3D322127B883B276DC6F.GetValue();
	public FAnimNode_CopyBone                                 AnimGraphNode_CopyBone_46CD80184006482048751699761E22A5        => _offAnimGraphNode_CopyBone_46CD80184006482048751699761E22A5.GetValue();
	public FAnimNode_LookAt                                   AnimGraphNode_LookAt_DEC6F772454EEC9F9B4885864CADD428          => _offAnimGraphNode_LookAt_DEC6F772454EEC9F9B4885864CADD428.GetValue();
	public FAnimNode_BoneDrivenController                     AnimGraphNode_BoneDrivenController_8DCD47F949AA5F5B7E887194A2A2536B => _offAnimGraphNode_BoneDrivenController_8DCD47F949AA5F5B7E887194A2A2536B.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_D2052DCE4D0EE4C737037CBC72A14193      => _offAnimGraphNode_ModifyBone_D2052DCE4D0EE4C737037CBC72A14193.GetValue();
	public FAnimNode_LookAt                                   AnimGraphNode_LookAt_C18E2E3A44D798C2B295199F4CE78131          => _offAnimGraphNode_LookAt_C18E2E3A44D798C2B295199F4CE78131.GetValue();
	public FAnimNode_BoneDrivenController                     AnimGraphNode_BoneDrivenController_360BEFAB451FDBB238513A8CE7EFFB19 => _offAnimGraphNode_BoneDrivenController_360BEFAB451FDBB238513A8CE7EFFB19.GetValue();
	public FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose_33C132EF4E353FAE430C14A18135D6AD  => _offAnimGraphNode_SaveCachedPose_33C132EF4E353FAE430C14A18135D6AD.GetValue();
	public FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose_054CF9454BADE67F9CC811BFD9AEC080   => _offAnimGraphNode_UseCachedPose_054CF9454BADE67F9CC811BFD9AEC080.GetValue();
	public FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose_F3172D2941BEDEFC7FE5BBA994A73EDF   => _offAnimGraphNode_UseCachedPose_F3172D2941BEDEFC7FE5BBA994A73EDF.GetValue();
	public FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend_1032C0A44FECDDACF413D392253908B6 => _offAnimGraphNode_LayeredBoneBlend_1032C0A44FECDDACF413D392253908B6.GetValue();
	public FAnimNode_Slot                                     AnimGraphNode_Slot_265A6C72465E7E3564D06CAB9A58CFD1            => _offAnimGraphNode_Slot_265A6C72465E7E3564D06CAB9A58CFD1.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_5837095749B83F46AA539994724488C9      => _offAnimGraphNode_ModifyBone_5837095749B83F46AA539994724488C9.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_8ABB52E44A9D2D0999644A86B8CB0813      => _offAnimGraphNode_ModifyBone_8ABB52E44A9D2D0999644A86B8CB0813.GetValue();
	public FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool_4DBB991D45AEB9A39B9F23AEFCEC516A => _offAnimGraphNode_BlendListByBool_4DBB991D45AEB9A39B9F23AEFCEC516A.GetValue();
	public FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace_306394124D11EDB274C0959B93200409 => _offAnimGraphNode_ComponentToLocalSpace_306394124D11EDB274C0959B93200409.GetValue();
	public FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose_8F695C65460E5D29144BB1B65C708423  => _offAnimGraphNode_SaveCachedPose_8F695C65460E5D29144BB1B65C708423.GetValue();
	public FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose_D550718546796C345593A09060F9C178   => _offAnimGraphNode_UseCachedPose_D550718546796C345593A09060F9C178.GetValue();
	public FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace_E8BC65404B4F0E84B35EA6824D4B1F3C => _offAnimGraphNode_LocalToComponentSpace_E8BC65404B4F0E84B35EA6824D4B1F3C.GetValue();
	public FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace_B09F0B2C4DE880E4BBF3F7B9E3A07507 => _offAnimGraphNode_ComponentToLocalSpace_B09F0B2C4DE880E4BBF3F7B9E3A07507.GetValue();
	public FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace_7F3B0752468E5D1D681202B40409940E => _offAnimGraphNode_LocalToComponentSpace_7F3B0752468E5D1D681202B40409940E.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_AAEE91B14AF8EB566E0E319EE7D8A28F      => _offAnimGraphNode_ModifyBone_AAEE91B14AF8EB566E0E319EE7D8A28F.GetValue();
	public FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose_46A6FB8447BDE9A68A1429A2AE89B1F2   => _offAnimGraphNode_UseCachedPose_46A6FB8447BDE9A68A1429A2AE89B1F2.GetValue();
	public FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace_B58BAED049B22F4A86F69D84BA0EBB07 => _offAnimGraphNode_LocalToComponentSpace_B58BAED049B22F4A86F69D84BA0EBB07.GetValue();
	public FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace_66B0447941A817ABD4E66C80DF7C9326 => _offAnimGraphNode_ComponentToLocalSpace_66B0447941A817ABD4E66C80DF7C9326.GetValue();
	public FAnimNode_BoneDrivenController                     AnimGraphNode_BoneDrivenController_3676C5284C5901616ACCCEB8D0C71CDA => _offAnimGraphNode_BoneDrivenController_3676C5284C5901616ACCCEB8D0C71CDA.GetValue();
	public FAnimNode_BoneDrivenController                     AnimGraphNode_BoneDrivenController_2781633541A0B672AF974F912002822E => _offAnimGraphNode_BoneDrivenController_2781633541A0B672AF974F912002822E.GetValue();
	public FVector                                            Wheel_Front_Scale                                              => _offWheel_Front_Scale.GetValue();
	public FVector                                            Wheel_Rear_Scale                                               => _offWheel_Rear_Scale.GetValue();
	#endregion


}


}