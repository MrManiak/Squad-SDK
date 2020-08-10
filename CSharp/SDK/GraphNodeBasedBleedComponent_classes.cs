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

// BlueprintGeneratedClass GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C
// 0x007C (0x0144 - 0x00C8)
public class UGraphNodeBasedBleedComponent_C : UActorComponent
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x00D8, false); // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<TArray<USQGraphNodeComponent>>     _offGraphNodes                                                 = new ExternalOffset<TArray<USQGraphNodeComponent>>(0x00E0, false); // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	private ExternalOffset<TArray<int>>                       _offCapturezonesByTeam                                         = new ExternalOffset<TArray<int>>(0x00F0, false);              // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<TArray<int>>                       _offCurrentLosers                                              = new ExternalOffset<TArray<int>>(0x0100, false);              // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<int>                               _offCurrentWinner                                              = new ExternalOffset<int>(0x0110);                             // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offCountNeutralizedCP_asLost                                  = new ExternalOffset<byte/*(bool)*/>(0x0114);                  // 0x0114(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<int>                               _offTicketBleedPerLostCPPerTick                                = new ExternalOffset<int>(0x0118);                             // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offBleedTickFrequencyInSeconds                                = new ExternalOffset<float>(0x011C);                           // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offBleedOverUnevenCaptureZone                                 = new ExternalOffset<byte/*(bool)*/>(0x0120);                  // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<TArray<int>>                       _offCachedBleedByTeam                                          = new ExternalOffset<TArray<int>>(0x0128, false);              // 0x0128(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<int>                               _offMercyBleedValuePerTick                                     = new ExternalOffset<int>(0x0138);                             // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsMercyBleedActive                                        = new ExternalOffset<byte/*(bool)*/>(0x013C);                  // 0x013C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offEnableMercyBleedFeature                                    = new ExternalOffset<byte/*(bool)*/>(0x013D);                  // 0x013D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offMercyBleedTickFrequencyInSeconds                           = new ExternalOffset<float>(0x0140);                           // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public TArray<USQGraphNodeComponent>                      GraphNodes                                                     => _offGraphNodes.GetValue();
	public TArray<int>                                        CapturezonesByTeam                                             => _offCapturezonesByTeam.GetValue();
	public TArray<int>                                        CurrentLosers                                                  => _offCurrentLosers.GetValue();
	public int                                                CurrentWinner                                                  => _offCurrentWinner.GetValue();
	public byte/*(bool)*/                                     CountNeutralizedCP_asLost                                      => _offCountNeutralizedCP_asLost.GetValue();
	public int                                                TicketBleedPerLostCPPerTick                                    => _offTicketBleedPerLostCPPerTick.GetValue();
	public float                                              BleedTickFrequencyInSeconds                                    => _offBleedTickFrequencyInSeconds.GetValue();
	public byte/*(bool)*/                                     BleedOverUnevenCaptureZone                                     => _offBleedOverUnevenCaptureZone.GetValue();
	public TArray<int>                                        CachedBleedByTeam                                              => _offCachedBleedByTeam.GetValue();
	public int                                                MercyBleedValuePerTick                                         => _offMercyBleedValuePerTick.GetValue();
	public byte/*(bool)*/                                     bIsMercyBleedActive                                            => _offbIsMercyBleedActive.GetValue();
	public byte/*(bool)*/                                     EnableMercyBleedFeature                                        => _offEnableMercyBleedFeature.GetValue();
	public float                                              MercyBleedTickFrequencyInSeconds                               => _offMercyBleedTickFrequencyInSeconds.GetValue();
	#endregion


}


}