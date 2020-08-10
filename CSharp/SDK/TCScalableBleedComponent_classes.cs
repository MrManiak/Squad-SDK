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

// BlueprintGeneratedClass TCScalableBleedComponent.TCScalableBleedComponent_C
// 0x00B0 (0x0178 - 0x00C8)
public class UTCScalableBleedComponent_C : UActorComponent
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x00D8, false); // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<TArray<float>>                     _offBleedThresholds                                            = new ExternalOffset<TArray<float>>(0x00E0, false);            // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<byte/*(bool)*/>                    _offbInterpolateBleedValues                                    = new ExternalOffset<byte/*(bool)*/>(0x00F0);                  // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
//	private TMap<float, int>                                  _offBleedScaleMap                                              = new ExternalOffset<TMap<int>>(0x00F8, false);                // 0x00F8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	private ExternalOffset<int>                               _offMinimum_of_Hexes_Required_for_Bleed                        = new ExternalOffset<int>(0x0148);                             // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<int>>                       _offCurrent_Bleed                                              = new ExternalOffset<TArray<int>>(0x0150, false);              // 0x0150(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor)
	private ExternalOffset<TArray<ATC_HexZone_C>>             _offAll_TC_Zones                                               = new ExternalOffset<TArray<ATC_HexZone_C>>(0x0160, false);    // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	private ExternalOffset<UCurveFloat>                       _offTicket_Bleed_Curve                                         = new ExternalOffset<UCurveFloat>(0x0170, true);               // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public TArray<float>                                      BleedThresholds                                                => _offBleedThresholds.GetValue();
	public byte/*(bool)*/                                     bInterpolateBleedValues                                        => _offbInterpolateBleedValues.GetValue();
	public int                                                Minimum_of_Hexes_Required_for_Bleed                            => _offMinimum_of_Hexes_Required_for_Bleed.GetValue();
	public TArray<int>                                        Current_Bleed                                                  => _offCurrent_Bleed.GetValue();
	public TArray<ATC_HexZone_C>                              All_TC_Zones                                                   => _offAll_TC_Zones.GetValue();
	public UCurveFloat                                        Ticket_Bleed_Curve                                             => _offTicket_Bleed_Curve.GetValue();
	#endregion


}


}