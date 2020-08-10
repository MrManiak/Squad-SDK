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

// BlueprintGeneratedClass HealthComponent.HealthComponent_C
// 0x0060 (0x0128 - 0x00C8)
public class UHealthComponent_C : UActorComponent
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x00D8, false); // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<float>                             _offHealth                                                     = new ExternalOffset<float>(0x00E0);                           // 0x00E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMax_Health                                                 = new ExternalOffset<float>(0x00E4);                           // 0x00E4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offHealth_Gained                                              = new ExternalOffset<FScriptMulticastDelegate>(0x00E8, false); // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FScriptMulticastDelegate>          _offHealth_Lost                                                = new ExternalOffset<FScriptMulticastDelegate>(0x00F8, false); // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FScriptMulticastDelegate>          _offHealth_Zero                                                = new ExternalOffset<FScriptMulticastDelegate>(0x0108, false); // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FScriptMulticastDelegate>          _offHealth_Max                                                 = new ExternalOffset<FScriptMulticastDelegate>(0x0118, false); // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public float                                              Health                                                         => _offHealth.GetValue();
	public float                                              Max_Health                                                     => _offMax_Health.GetValue();
	public FScriptMulticastDelegate                           Health_Gained                                                  => _offHealth_Gained.GetValue();
	public FScriptMulticastDelegate                           Health_Lost                                                    => _offHealth_Lost.GetValue();
	public FScriptMulticastDelegate                           Health_Zero                                                    => _offHealth_Zero.GetValue();
	public FScriptMulticastDelegate                           Health_Max                                                     => _offHealth_Max.GetValue();
	#endregion


}


}