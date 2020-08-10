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

// WidgetBlueprintGeneratedClass W_SQRoamingMap.W_SQRoamingMap_C
// 0x0040 (0x02F0 - 0x02B0)
public class UW_SQRoamingMap_C : UUMG_MenuBase_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02B0, false); // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offRoamingMapOpenCloseAnim                                    = new ExternalOffset<UWidgetAnimation>(0x02B8, true);          // 0x02B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offMainObject                                                 = new ExternalOffset<UOverlay>(0x02C0, true);                  // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_SQMapCore_C>                    _offMapCoreWidget                                              = new ExternalOffset<UW_SQMapCore_C>(0x02C8, true);            // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_GameTime_C>                     _offW_GameTime                                                 = new ExternalOffset<UW_GameTime_C>(0x02D0, true);             // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_PlayerPosition_C>               _offW_PlayerPosition                                           = new ExternalOffset<UW_PlayerPosition_C>(0x02D8, true);       // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_TeamTickets_C>                  _offW_TeamTickets                                              = new ExternalOffset<UW_TeamTickets_C>(0x02E0, true);          // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_TerritoryControl_Bar_C>         _offW_TerritoryControl_TugofWar                                = new ExternalOffset<UW_TerritoryControl_Bar_C>(0x02E8, true); // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   RoamingMapOpenCloseAnim                                        => _offRoamingMapOpenCloseAnim.GetValue();
	public UOverlay                                           MainObject                                                     => _offMainObject.GetValue();
	public UW_SQMapCore_C                                     MapCoreWidget                                                  => _offMapCoreWidget.GetValue();
	public UW_GameTime_C                                      W_GameTime                                                     => _offW_GameTime.GetValue();
	public UW_PlayerPosition_C                                W_PlayerPosition                                               => _offW_PlayerPosition.GetValue();
	public UW_TeamTickets_C                                   W_TeamTickets                                                  => _offW_TeamTickets.GetValue();
	public UW_TerritoryControl_Bar_C                          W_TerritoryControl_TugofWar                                    => _offW_TerritoryControl_TugofWar.GetValue();
	#endregion


}


}