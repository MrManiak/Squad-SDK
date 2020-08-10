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

// AnimBlueprintGeneratedClass AnimBP_UH60.AnimBP_UH60_C
// 0x20C8 (0x2A50 - 0x0988)
public class UAnimBP_UH60_C : USQVehicleAnimInstance
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0990, false); // 0x0990(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_0B89C3ED478CE36725111AA1826D4D75  = new ExternalOffset<FAnimNode_ModifyBone>(0x0998, false);     // 0x0998(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_6B62015349F6958948D1B6853DB4CBBD  = new ExternalOffset<FAnimNode_ModifyBone>(0x0AA0, false);     // 0x0AA0(0x0108)
	private ExternalOffset<FAnimNode_SequencePlayer>          _offAnimGraphNode_SequencePlayer_8C83D21E4801BB879CEB7FAC8BDD2952 = new ExternalOffset<FAnimNode_SequencePlayer>(0x0BA8, false); // 0x0BA8(0x0078)
	private ExternalOffset<FAnimNode_ConvertLocalToComponentSpace> _offAnimGraphNode_LocalToComponentSpace_411BBAB44C629E644D6B5088C4DC273E = new ExternalOffset<FAnimNode_ConvertLocalToComponentSpace>(0x0C20, false); // 0x0C20(0x0020)
	private ExternalOffset<FAnimNode_ConvertComponentToLocalSpace> _offAnimGraphNode_ComponentToLocalSpace_C4853A8B45CEAF11CAE721A2B818C18E = new ExternalOffset<FAnimNode_ConvertComponentToLocalSpace>(0x0C40, false); // 0x0C40(0x0020)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_AF9F74D24FCE040203E100ACB6E967AA  = new ExternalOffset<FAnimNode_ModifyBone>(0x0C60, false);     // 0x0C60(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_26FB62FF48438A6572303AA099A93BC3  = new ExternalOffset<FAnimNode_ModifyBone>(0x0D68, false);     // 0x0D68(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_CA316C2D446D983BEBCCAC9807264875  = new ExternalOffset<FAnimNode_ModifyBone>(0x0E70, false);     // 0x0E70(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_C208F1954495AE6E5D156DAB24111EE2  = new ExternalOffset<FAnimNode_ModifyBone>(0x0F78, false);     // 0x0F78(0x0108)
	private ExternalOffset<FAnimNode_SaveCachedPose>          _offAnimGraphNode_SaveCachedPose_F9A7931147F03E6D4EE0C489606FDCF0 = new ExternalOffset<FAnimNode_SaveCachedPose>(0x1080, false); // 0x1080(0x00B8)
	private ExternalOffset<FAnimNode_UseCachedPose>           _offAnimGraphNode_UseCachedPose_F476E50746C0AB8399714B981BE1F801 = new ExternalOffset<FAnimNode_UseCachedPose>(0x1138, false);  // 0x1138(0x0028)
	private ExternalOffset<FAnimNode_UseCachedPose>           _offAnimGraphNode_UseCachedPose_075C6181422C4A5DB2627383B7BFA479 = new ExternalOffset<FAnimNode_UseCachedPose>(0x1160, false);  // 0x1160(0x0028)
	private ExternalOffset<FAnimNode_LayeredBoneBlend>        _offAnimGraphNode_LayeredBoneBlend_B66DEA9544A7AB4ABE633A8B37C34596 = new ExternalOffset<FAnimNode_LayeredBoneBlend>(0x1188, false); // 0x1188(0x00C0)
	private ExternalOffset<FAnimNode_Slot>                    _offAnimGraphNode_Slot_E80906434577F718C95F928AC8E6FEAC        = new ExternalOffset<FAnimNode_Slot>(0x1248, false);           // 0x1248(0x0048)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_F42C14254B14CECE923A3C8F0BD0D252  = new ExternalOffset<FAnimNode_ModifyBone>(0x1290, false);     // 0x1290(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_EE21BCD240DE47825C75BD8A691404DD  = new ExternalOffset<FAnimNode_ModifyBone>(0x1398, false);     // 0x1398(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_DD93570A4DC10831EB13319EA8257DD7  = new ExternalOffset<FAnimNode_ModifyBone>(0x14A0, false);     // 0x14A0(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_416489DE42AA6D0829ACCF82385AC89C  = new ExternalOffset<FAnimNode_ModifyBone>(0x15A8, false);     // 0x15A8(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_12852A914585580C92E96CB848601B77  = new ExternalOffset<FAnimNode_ModifyBone>(0x16B0, false);     // 0x16B0(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_CE0A81EC4F204BC108FEA8BDF681D760  = new ExternalOffset<FAnimNode_ModifyBone>(0x17B8, false);     // 0x17B8(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_6BF6ACC24AF69C756FE4A39A78FEF585  = new ExternalOffset<FAnimNode_ModifyBone>(0x18C0, false);     // 0x18C0(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_73FD18FB4417455F9C4818973FF258D4  = new ExternalOffset<FAnimNode_ModifyBone>(0x19C8, false);     // 0x19C8(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_BA077BD04C12C00CE77DA589DE9DA6EF  = new ExternalOffset<FAnimNode_ModifyBone>(0x1AD0, false);     // 0x1AD0(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_A26C47974074EF085E7A2EA60437DAA1  = new ExternalOffset<FAnimNode_ModifyBone>(0x1BD8, false);     // 0x1BD8(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_58F5837146760DFFC158C19DA37A689D  = new ExternalOffset<FAnimNode_ModifyBone>(0x1CE0, false);     // 0x1CE0(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_EDDA9D5346A4EAB7C626A2AF8A1EC002  = new ExternalOffset<FAnimNode_ModifyBone>(0x1DE8, false);     // 0x1DE8(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_231A4A6B4EAA4F52AC1C2FBAAC4BA432  = new ExternalOffset<FAnimNode_ModifyBone>(0x1EF0, false);     // 0x1EF0(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_2AD1D9FF40642996A55FEF93F7CCA902  = new ExternalOffset<FAnimNode_ModifyBone>(0x1FF8, false);     // 0x1FF8(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_4163F5E24E1008689341AF839811A813  = new ExternalOffset<FAnimNode_ModifyBone>(0x2100, false);     // 0x2100(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_08DDA7B84FD340AA3E019F9642054F49  = new ExternalOffset<FAnimNode_ModifyBone>(0x2208, false);     // 0x2208(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_4E3761AB4ECEBAD4838D2BB477E1DE27  = new ExternalOffset<FAnimNode_ModifyBone>(0x2310, false);     // 0x2310(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_D60E29434A9FDE79337393B3C68BFC60  = new ExternalOffset<FAnimNode_ModifyBone>(0x2418, false);     // 0x2418(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_DE09DE5A477382860148B49C28B761D4  = new ExternalOffset<FAnimNode_ModifyBone>(0x2520, false);     // 0x2520(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_663988174A77B57BF1293BBEA5EBE3A0  = new ExternalOffset<FAnimNode_ModifyBone>(0x2628, false);     // 0x2628(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_AAA2B2E646C3B174E6655C9FF365EB4B  = new ExternalOffset<FAnimNode_ModifyBone>(0x2730, false);     // 0x2730(0x0108)
	private ExternalOffset<FAnimNode_ModifyBone>              _offAnimGraphNode_ModifyBone_D1AFB7D84DB8F845E04F8CB98D34CEA7  = new ExternalOffset<FAnimNode_ModifyBone>(0x2838, false);     // 0x2838(0x0108)
	private ExternalOffset<FAnimNode_Root>                    _offAnimGraphNode_Root_CB3C3A0940969B2768382C8126AB83D7        = new ExternalOffset<FAnimNode_Root>(0x2940, false);           // 0x2940(0x0030)
	private ExternalOffset<FRotator>                          _offMainRotorRotation                                          = new ExternalOffset<FRotator>(0x2970, false);                 // 0x2970(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FRotator>                          _offTailRotorRotation                                          = new ExternalOffset<FRotator>(0x297C, false);                 // 0x297C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FRotator>                          _offMainIncidence0                                             = new ExternalOffset<FRotator>(0x2988, false);                 // 0x2988(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FRotator>                          _offMainIncidence1                                             = new ExternalOffset<FRotator>(0x2994, false);                 // 0x2994(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offBladesLiftAlpha                                            = new ExternalOffset<float>(0x29A0);                           // 0x29A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FRotator>                          _offMainIncidence2                                             = new ExternalOffset<FRotator>(0x29A4, false);                 // 0x29A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FRotator>                          _offMainIncidence3                                             = new ExternalOffset<FRotator>(0x29B0, false);                 // 0x29B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offMaxLiftDegrees                                             = new ExternalOffset<float>(0x29BC);                           // 0x29BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FRotator>                          _offTailIncidence0                                             = new ExternalOffset<FRotator>(0x29C0, false);                 // 0x29C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FRotator>                          _offTailIncidence1                                             = new ExternalOffset<FRotator>(0x29CC, false);                 // 0x29CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FRotator>                          _offTailIncidence2                                             = new ExternalOffset<FRotator>(0x29D8, false);                 // 0x29D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FRotator>                          _offTailIncidence3                                             = new ExternalOffset<FRotator>(0x29E4, false);                 // 0x29E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FRotator>                          _offRearTailRot                                                = new ExternalOffset<FRotator>(0x29F0, false);                 // 0x29F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FRotator>                          _offControlStickRot                                            = new ExternalOffset<FRotator>(0x29FC, false);                 // 0x29FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FVector>                           _offMainBladesBlurScale                                        = new ExternalOffset<FVector>(0x2A08, false);                  // 0x2A08(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FVector>                           _offMainBladesScale                                            = new ExternalOffset<FVector>(0x2A14, false);                  // 0x2A14(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FVector>                           _offTailBladesBlurScale                                        = new ExternalOffset<FVector>(0x2A20, false);                  // 0x2A20(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FVector>                           _offTailBladesScale                                            = new ExternalOffset<FVector>(0x2A2C, false);                  // 0x2A2C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FVector>                           _offMainRotorScale                                             = new ExternalOffset<FVector>(0x2A38, false);                  // 0x2A38(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FVector>                           _offTailRotorScale                                             = new ExternalOffset<FVector>(0x2A44, false);                  // 0x2A44(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_0B89C3ED478CE36725111AA1826D4D75      => _offAnimGraphNode_ModifyBone_0B89C3ED478CE36725111AA1826D4D75.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_6B62015349F6958948D1B6853DB4CBBD      => _offAnimGraphNode_ModifyBone_6B62015349F6958948D1B6853DB4CBBD.GetValue();
	public FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer_8C83D21E4801BB879CEB7FAC8BDD2952  => _offAnimGraphNode_SequencePlayer_8C83D21E4801BB879CEB7FAC8BDD2952.GetValue();
	public FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace_411BBAB44C629E644D6B5088C4DC273E => _offAnimGraphNode_LocalToComponentSpace_411BBAB44C629E644D6B5088C4DC273E.GetValue();
	public FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace_C4853A8B45CEAF11CAE721A2B818C18E => _offAnimGraphNode_ComponentToLocalSpace_C4853A8B45CEAF11CAE721A2B818C18E.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_AF9F74D24FCE040203E100ACB6E967AA      => _offAnimGraphNode_ModifyBone_AF9F74D24FCE040203E100ACB6E967AA.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_26FB62FF48438A6572303AA099A93BC3      => _offAnimGraphNode_ModifyBone_26FB62FF48438A6572303AA099A93BC3.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_CA316C2D446D983BEBCCAC9807264875      => _offAnimGraphNode_ModifyBone_CA316C2D446D983BEBCCAC9807264875.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_C208F1954495AE6E5D156DAB24111EE2      => _offAnimGraphNode_ModifyBone_C208F1954495AE6E5D156DAB24111EE2.GetValue();
	public FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose_F9A7931147F03E6D4EE0C489606FDCF0  => _offAnimGraphNode_SaveCachedPose_F9A7931147F03E6D4EE0C489606FDCF0.GetValue();
	public FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose_F476E50746C0AB8399714B981BE1F801   => _offAnimGraphNode_UseCachedPose_F476E50746C0AB8399714B981BE1F801.GetValue();
	public FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose_075C6181422C4A5DB2627383B7BFA479   => _offAnimGraphNode_UseCachedPose_075C6181422C4A5DB2627383B7BFA479.GetValue();
	public FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend_B66DEA9544A7AB4ABE633A8B37C34596 => _offAnimGraphNode_LayeredBoneBlend_B66DEA9544A7AB4ABE633A8B37C34596.GetValue();
	public FAnimNode_Slot                                     AnimGraphNode_Slot_E80906434577F718C95F928AC8E6FEAC            => _offAnimGraphNode_Slot_E80906434577F718C95F928AC8E6FEAC.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_F42C14254B14CECE923A3C8F0BD0D252      => _offAnimGraphNode_ModifyBone_F42C14254B14CECE923A3C8F0BD0D252.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_EE21BCD240DE47825C75BD8A691404DD      => _offAnimGraphNode_ModifyBone_EE21BCD240DE47825C75BD8A691404DD.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_DD93570A4DC10831EB13319EA8257DD7      => _offAnimGraphNode_ModifyBone_DD93570A4DC10831EB13319EA8257DD7.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_416489DE42AA6D0829ACCF82385AC89C      => _offAnimGraphNode_ModifyBone_416489DE42AA6D0829ACCF82385AC89C.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_12852A914585580C92E96CB848601B77      => _offAnimGraphNode_ModifyBone_12852A914585580C92E96CB848601B77.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_CE0A81EC4F204BC108FEA8BDF681D760      => _offAnimGraphNode_ModifyBone_CE0A81EC4F204BC108FEA8BDF681D760.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_6BF6ACC24AF69C756FE4A39A78FEF585      => _offAnimGraphNode_ModifyBone_6BF6ACC24AF69C756FE4A39A78FEF585.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_73FD18FB4417455F9C4818973FF258D4      => _offAnimGraphNode_ModifyBone_73FD18FB4417455F9C4818973FF258D4.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_BA077BD04C12C00CE77DA589DE9DA6EF      => _offAnimGraphNode_ModifyBone_BA077BD04C12C00CE77DA589DE9DA6EF.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_A26C47974074EF085E7A2EA60437DAA1      => _offAnimGraphNode_ModifyBone_A26C47974074EF085E7A2EA60437DAA1.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_58F5837146760DFFC158C19DA37A689D      => _offAnimGraphNode_ModifyBone_58F5837146760DFFC158C19DA37A689D.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_EDDA9D5346A4EAB7C626A2AF8A1EC002      => _offAnimGraphNode_ModifyBone_EDDA9D5346A4EAB7C626A2AF8A1EC002.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_231A4A6B4EAA4F52AC1C2FBAAC4BA432      => _offAnimGraphNode_ModifyBone_231A4A6B4EAA4F52AC1C2FBAAC4BA432.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_2AD1D9FF40642996A55FEF93F7CCA902      => _offAnimGraphNode_ModifyBone_2AD1D9FF40642996A55FEF93F7CCA902.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_4163F5E24E1008689341AF839811A813      => _offAnimGraphNode_ModifyBone_4163F5E24E1008689341AF839811A813.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_08DDA7B84FD340AA3E019F9642054F49      => _offAnimGraphNode_ModifyBone_08DDA7B84FD340AA3E019F9642054F49.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_4E3761AB4ECEBAD4838D2BB477E1DE27      => _offAnimGraphNode_ModifyBone_4E3761AB4ECEBAD4838D2BB477E1DE27.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_D60E29434A9FDE79337393B3C68BFC60      => _offAnimGraphNode_ModifyBone_D60E29434A9FDE79337393B3C68BFC60.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_DE09DE5A477382860148B49C28B761D4      => _offAnimGraphNode_ModifyBone_DE09DE5A477382860148B49C28B761D4.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_663988174A77B57BF1293BBEA5EBE3A0      => _offAnimGraphNode_ModifyBone_663988174A77B57BF1293BBEA5EBE3A0.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_AAA2B2E646C3B174E6655C9FF365EB4B      => _offAnimGraphNode_ModifyBone_AAA2B2E646C3B174E6655C9FF365EB4B.GetValue();
	public FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone_D1AFB7D84DB8F845E04F8CB98D34CEA7      => _offAnimGraphNode_ModifyBone_D1AFB7D84DB8F845E04F8CB98D34CEA7.GetValue();
	public FAnimNode_Root                                     AnimGraphNode_Root_CB3C3A0940969B2768382C8126AB83D7            => _offAnimGraphNode_Root_CB3C3A0940969B2768382C8126AB83D7.GetValue();
	public FRotator                                           MainRotorRotation                                              => _offMainRotorRotation.GetValue();
	public FRotator                                           TailRotorRotation                                              => _offTailRotorRotation.GetValue();
	public FRotator                                           MainIncidence0                                                 => _offMainIncidence0.GetValue();
	public FRotator                                           MainIncidence1                                                 => _offMainIncidence1.GetValue();
	public float                                              BladesLiftAlpha                                                => _offBladesLiftAlpha.GetValue();
	public FRotator                                           MainIncidence2                                                 => _offMainIncidence2.GetValue();
	public FRotator                                           MainIncidence3                                                 => _offMainIncidence3.GetValue();
	public float                                              MaxLiftDegrees                                                 => _offMaxLiftDegrees.GetValue();
	public FRotator                                           TailIncidence0                                                 => _offTailIncidence0.GetValue();
	public FRotator                                           TailIncidence1                                                 => _offTailIncidence1.GetValue();
	public FRotator                                           TailIncidence2                                                 => _offTailIncidence2.GetValue();
	public FRotator                                           TailIncidence3                                                 => _offTailIncidence3.GetValue();
	public FRotator                                           RearTailRot                                                    => _offRearTailRot.GetValue();
	public FRotator                                           ControlStickRot                                                => _offControlStickRot.GetValue();
	public FVector                                            MainBladesBlurScale                                            => _offMainBladesBlurScale.GetValue();
	public FVector                                            MainBladesScale                                                => _offMainBladesScale.GetValue();
	public FVector                                            TailBladesBlurScale                                            => _offTailBladesBlurScale.GetValue();
	public FVector                                            TailBladesScale                                                => _offTailBladesScale.GetValue();
	public FVector                                            MainRotorScale                                                 => _offMainRotorScale.GetValue();
	public FVector                                            TailRotorScale                                                 => _offTailRotorScale.GetValue();
	#endregion


}


}