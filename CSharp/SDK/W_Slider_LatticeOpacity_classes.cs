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

// WidgetBlueprintGeneratedClass W_Slider_LatticeOpacity.W_Slider_LatticeOpacity_C
// 0x0081 (0x0261 - 0x01E0)
public class UW_Slider_LatticeOpacity_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<USettingsItem_Slider_C>            _offSettingsItem_Slider                                        = new ExternalOffset<USettingsItem_Slider_C>(0x0238, true);    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerState>                    _offMy_PS                                                      = new ExternalOffset<ASQPlayerState>(0x0240, true);            // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQTeamState>                      _offCurrent_Team                                               = new ExternalOffset<ASQTeamState>(0x0248, true);              // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offCached_Scale                                               = new ExternalOffset<float>(0x0250);                           // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USaveData_UI_C>                    _offSave                                                       = new ExternalOffset<USaveData_UI_C>(0x0258, true);            // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offRemove_after_interact                                      = new ExternalOffset<byte/*(bool)*/>(0x0260);                  // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public USettingsItem_Slider_C                             SettingsItem_Slider                                            => _offSettingsItem_Slider.GetValue();
	public ASQPlayerState                                     My_PS                                                          => _offMy_PS.GetValue();
	public ASQTeamState                                       Current_Team                                                   => _offCurrent_Team.GetValue();
	public float                                              Cached_Scale                                                   => _offCached_Scale.GetValue();
	public USaveData_UI_C                                     Save                                                           => _offSave.GetValue();
	public byte/*(bool)*/                                     Remove_after_interact                                          => _offRemove_after_interact.GetValue();
	#endregion


}


}