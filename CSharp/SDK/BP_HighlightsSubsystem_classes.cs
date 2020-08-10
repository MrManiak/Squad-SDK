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

// BlueprintGeneratedClass BP_HighlightsSubsystem.BP_HighlightsSubsystem_C
// 0x0128 (0x0168 - 0x0040)
public class UBP_HighlightsSubsystem_C : USQBaseGameSubsystem
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0040, false); // 0x0040(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<byte/*(bool)*/>                    _offHighlightsInitialized                                      = new ExternalOffset<byte/*(bool)*/>(0x0048);                  // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FGfeSDKHighlightOpenGroupParams>   _offHighlightOpenGroupParams                                   = new ExternalOffset<FGfeSDKHighlightOpenGroupParams>(0x0050, false); // 0x0050(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<FGfeSDKHighlightSummaryParams>     _offHighlightsSummaryParams                                    = new ExternalOffset<FGfeSDKHighlightSummaryParams>(0x00B0, false); // 0x00B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<FGfeSDKHighlightConfigParams>      _offHighlightsConfigParams                                     = new ExternalOffset<FGfeSDKHighlightConfigParams>(0x00C0, false); // 0x00C0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<int>                               _offActiveGroupId                                              = new ExternalOffset<int>(0x00E0);                             // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offDestroyHighlights                                          = new ExternalOffset<byte/*(bool)*/>(0x00E4);                  // 0x00E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FHighlightEventStruct>             _offVehicleDestroyedEventParams                                = new ExternalOffset<FHighlightEventStruct>(0x00E8, false);    // 0x00E8(0x0028) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	private ExternalOffset<FHighlightEventStruct>             _offPlayerKilledEventParams                                    = new ExternalOffset<FHighlightEventStruct>(0x0110, false);    // 0x0110(0x0028) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	private ExternalOffset<FHighlightEventStruct>             _offIED_DetonatedEventParams                                   = new ExternalOffset<FHighlightEventStruct>(0x0138, false);    // 0x0138(0x0028) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	private ExternalOffset<EGfeSDKHighlightSignificance>      _offEventSignificance                                          = new ExternalOffset<EGfeSDKHighlightSignificance>(0x0160, false); // 0x0160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<EGfeSDKHighlightType>              _offHighlightType                                              = new ExternalOffset<EGfeSDKHighlightType>(0x0161, false);     // 0x0161(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offNumberOfHighlights                                         = new ExternalOffset<int>(0x0164);                             // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public byte/*(bool)*/                                     HighlightsInitialized                                          => _offHighlightsInitialized.GetValue();
	public FGfeSDKHighlightOpenGroupParams                    HighlightOpenGroupParams                                       => _offHighlightOpenGroupParams.GetValue();
	public FGfeSDKHighlightSummaryParams                      HighlightsSummaryParams                                        => _offHighlightsSummaryParams.GetValue();
	public FGfeSDKHighlightConfigParams                       HighlightsConfigParams                                         => _offHighlightsConfigParams.GetValue();
	public int                                                ActiveGroupId                                                  => _offActiveGroupId.GetValue();
	public byte/*(bool)*/                                     DestroyHighlights                                              => _offDestroyHighlights.GetValue();
	public FHighlightEventStruct                              VehicleDestroyedEventParams                                    => _offVehicleDestroyedEventParams.GetValue();
	public FHighlightEventStruct                              PlayerKilledEventParams                                        => _offPlayerKilledEventParams.GetValue();
	public FHighlightEventStruct                              IED_DetonatedEventParams                                       => _offIED_DetonatedEventParams.GetValue();
	public EGfeSDKHighlightSignificance                       EventSignificance                                              => _offEventSignificance.GetValue();
	public EGfeSDKHighlightType                               HighlightType                                                  => _offHighlightType.GetValue();
	public int                                                NumberOfHighlights                                             => _offNumberOfHighlights.GetValue();
	#endregion


}


}