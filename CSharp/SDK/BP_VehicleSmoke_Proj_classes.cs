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

// BlueprintGeneratedClass BP_VehicleSmoke_Proj.BP_VehicleSmoke_Proj_C
// 0x0018 (0x0550 - 0x0538)
public class ABP_VehicleSmoke_Proj_C : ABP_40MM_Proj2_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0538, false); // 0x0538(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UParticleSystemComponent>          _offEffect                                                     = new ExternalOffset<UParticleSystemComponent>(0x0540, true);  // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystem>                   _offSmokeEffect                                                = new ExternalOffset<UParticleSystem>(0x0548, true);           // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UParticleSystemComponent                           Effect                                                         => _offEffect.GetValue();
	public UParticleSystem                                    SmokeEffect                                                    => _offSmokeEffect.GetValue();
	#endregion


}


}