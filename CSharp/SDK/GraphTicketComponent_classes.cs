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

// BlueprintGeneratedClass GraphTicketComponent.GraphTicketComponent_C
// 0x0038 (0x0100 - 0x00C8)
public class UGraphTicketComponent_C : UActorComponent
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x00D8, false); // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<TArray<USQGraphNodeComponent>>     _offNewVar_1                                                   = new ExternalOffset<TArray<USQGraphNodeComponent>>(0x00E0, false); // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	private ExternalOffset<int>                               _offTicketLoss                                                 = new ExternalOffset<int>(0x00F0);                             // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offTicketGain                                                 = new ExternalOffset<int>(0x00F4);                             // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offInitialNeutralFlagTicketLoss                               = new ExternalOffset<int>(0x00F8);                             // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offInitialNeutralFlagTicketGain                               = new ExternalOffset<int>(0x00FC);                             // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public TArray<USQGraphNodeComponent>                      NewVar_1                                                       => _offNewVar_1.GetValue();
	public int                                                TicketLoss                                                     => _offTicketLoss.GetValue();
	public int                                                TicketGain                                                     => _offTicketGain.GetValue();
	public int                                                InitialNeutralFlagTicketLoss                                   => _offInitialNeutralFlagTicketLoss.GetValue();
	public int                                                InitialNeutralFlagTicketGain                                   => _offInitialNeutralFlagTicketGain.GetValue();
	#endregion


}


}