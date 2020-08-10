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

// BlueprintGeneratedClass GraphMercyBleedComponent.GraphMercyBleedComponent_C
// 0x0044 (0x010C - 0x00C8)
public class UGraphMercyBleedComponent_C : UActorComponent
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x00D8, false); // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<int>                               _offTicketLoss                                                 = new ExternalOffset<int>(0x00E0);                             // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offTicketGain                                                 = new ExternalOffset<int>(0x00E4);                             // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<int>>                       _offCapturezonesByTeam                                         = new ExternalOffset<TArray<int>>(0x00E8, false);              // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<TArray<int>>                       _offCurrentLosers                                              = new ExternalOffset<TArray<int>>(0x00F8, false);              // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<float>                             _offTickFrequencyInSeconds                                     = new ExternalOffset<float>(0x0108);                           // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public int                                                TicketLoss                                                     => _offTicketLoss.GetValue();
	public int                                                TicketGain                                                     => _offTicketGain.GetValue();
	public TArray<int>                                        CapturezonesByTeam                                             => _offCapturezonesByTeam.GetValue();
	public TArray<int>                                        CurrentLosers                                                  => _offCurrentLosers.GetValue();
	public float                                              TickFrequencyInSeconds                                         => _offTickFrequencyInSeconds.GetValue();
	#endregion


}


}