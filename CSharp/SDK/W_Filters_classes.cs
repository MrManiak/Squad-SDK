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

// WidgetBlueprintGeneratedClass W_Filters.W_Filters_C
// 0x00C0 (0x02A0 - 0x01E0)
public class UW_Filters_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorder_Filters                                             = new ExternalOffset<UBorder>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offServerFilters                                              = new ExternalOffset<UVerticalBox>(0x0240, true);              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offSetting_Empty                                              = new ExternalOffset<USettingsItem_TickBox_C>(0x0248, true);   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offSetting_ModdedServers                                      = new ExternalOffset<USettingsItem_TickBox_C>(0x0250, true);   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offSetting_Queues                                             = new ExternalOffset<USettingsItem_TickBox_C>(0x0258, true);   // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offSetting_Reserved                                           = new ExternalOffset<USettingsItem_TickBox_C>(0x0260, true);   // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offSetting_ShowFull                                           = new ExternalOffset<USettingsItem_TickBox_C>(0x0268, true);   // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offSetting_Version                                            = new ExternalOffset<USettingsItem_TickBox_C>(0x0270, true);   // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offSettings_Favourites                                        = new ExternalOffset<USettingsItem_TickBox_C>(0x0278, true);   // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offVis_Button                                                 = new ExternalOffset<UMainMenu_Button_C>(0x0280, true);        // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USaveData_UI_C>                    _offSave_Data                                                  = new ExternalOffset<USaveData_UI_C>(0x0288, true);            // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offOption_Changed                                             = new ExternalOffset<FScriptMulticastDelegate>(0x0290, false); // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            Border_Filters                                                 => _offBorder_Filters.GetValue();
	public UVerticalBox                                       ServerFilters                                                  => _offServerFilters.GetValue();
	public USettingsItem_TickBox_C                            Setting_Empty                                                  => _offSetting_Empty.GetValue();
	public USettingsItem_TickBox_C                            Setting_ModdedServers                                          => _offSetting_ModdedServers.GetValue();
	public USettingsItem_TickBox_C                            Setting_Queues                                                 => _offSetting_Queues.GetValue();
	public USettingsItem_TickBox_C                            Setting_Reserved                                               => _offSetting_Reserved.GetValue();
	public USettingsItem_TickBox_C                            Setting_ShowFull                                               => _offSetting_ShowFull.GetValue();
	public USettingsItem_TickBox_C                            Setting_Version                                                => _offSetting_Version.GetValue();
	public USettingsItem_TickBox_C                            Settings_Favourites                                            => _offSettings_Favourites.GetValue();
	public UMainMenu_Button_C                                 Vis_Button                                                     => _offVis_Button.GetValue();
	public USaveData_UI_C                                     Save_Data                                                      => _offSave_Data.GetValue();
	public FScriptMulticastDelegate                           Option_Changed                                                 => _offOption_Changed.GetValue();
	#endregion


}


}