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

// BlueprintGeneratedClass VoiceAction_Component.VoiceAction_Component_C
// 0x0030 (0x00F8 - 0x00C8)
public class UVoiceAction_Component_C : UActorComponent
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x00D8, false); // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<float>                             _offLast_Voice_Time                                            = new ExternalOffset<float>(0x00E0);                           // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offCurrent_Voice_Delay                                        = new ExternalOffset<float>(0x00E4);                           // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offAdditional_Voice_Delay                                     = new ExternalOffset<float>(0x00E8);                           // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FVector>                           _offSound_Local_Offset                                         = new ExternalOffset<FVector>(0x00EC, false);                  // 0x00EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public float                                              Last_Voice_Time                                                => _offLast_Voice_Time.GetValue();
	public float                                              Current_Voice_Delay                                            => _offCurrent_Voice_Delay.GetValue();
	public float                                              Additional_Voice_Delay                                         => _offAdditional_Voice_Delay.GetValue();
	public FVector                                            Sound_Local_Offset                                             => _offSound_Local_Offset.GetValue();
	#endregion


}


}