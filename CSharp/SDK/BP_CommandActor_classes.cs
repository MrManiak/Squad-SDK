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

// BlueprintGeneratedClass BP_CommandActor.BP_CommandActor_C
// 0x002C (0x0288 - 0x025C)
public class ABP_CommandActor_C : ASQCommandActor
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0268, false); // 0x0268(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UArrowComponent>                   _offArrow                                                      = new ExternalOffset<UArrowComponent>(0x0270, true);           // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USceneComponent>                   _offDefaultSceneRoot                                           = new ExternalOffset<USceneComponent>(0x0278, true);           // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offAction_Destroyed                                           = new ExternalOffset<byte/*(bool)*/>(0x0280);                  // 0x0280(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offDestroy_Delay_after_Action_Destroyed                       = new ExternalOffset<float>(0x0284);                           // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UArrowComponent                                    Arrow                                                          => _offArrow.GetValue();
	public USceneComponent                                    DefaultSceneRoot                                               => _offDefaultSceneRoot.GetValue();
	public byte/*(bool)*/                                     Action_Destroyed                                               => _offAction_Destroyed.GetValue();
	public float                                              Destroy_Delay_after_Action_Destroyed                           => _offDestroy_Delay_after_Action_Destroyed.GetValue();
	#endregion


}


}