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

// WidgetBlueprintGeneratedClass W_MapControls.W_MapControls_C
// 0x0148 (0x0328 - 0x01E0)
public class UW_MapControls_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_ChatToggle                                          = new ExternalOffset<UMainMenu_Button_C>(0x0238, true);        // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_DirectorLines                                       = new ExternalOffset<UMainMenu_Button_C>(0x0240, true);        // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_FobRadius                                           = new ExternalOffset<UMainMenu_Button_C>(0x0248, true);        // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_GridOpacity                                         = new ExternalOffset<UMainMenu_Button_C>(0x0250, true);        // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_Icon_Legend                                         = new ExternalOffset<UMainMenu_Button_C>(0x0258, true);        // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_IconScale                                           = new ExternalOffset<UMainMenu_Button_C>(0x0260, true);        // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_LatticeOpacity                                      = new ExternalOffset<UMainMenu_Button_C>(0x0268, true);        // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_Role                                                = new ExternalOffset<UMainMenu_Button_C>(0x0270, true);        // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_Spawns                                              = new ExternalOffset<UMainMenu_Button_C>(0x0278, true);        // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_Supplies                                            = new ExternalOffset<UMainMenu_Button_C>(0x0280, true);        // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_TCZones                                             = new ExternalOffset<UMainMenu_Button_C>(0x0288, true);        // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_Tix_Legend                                          = new ExternalOffset<UMainMenu_Button_C>(0x0290, true);        // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_Vehicles_Legend                                     = new ExternalOffset<UMainMenu_Button_C>(0x0298, true);        // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_Waypoints                                           = new ExternalOffset<UMainMenu_Button_C>(0x02A0, true);        // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offMainMenu_Button_C_12                                       = new ExternalOffset<UMainMenu_Button_C>(0x02A8, true);        // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offOptions                                                    = new ExternalOffset<UVerticalBox>(0x02B0, true);              // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_18                                                 = new ExternalOffset<USizeBox>(0x02B8, true);                  // 0x02B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Slider_GridOpacity_C>           _offW_GridOpacity                                              = new ExternalOffset<UW_Slider_GridOpacity_C>(0x02C0, true);   // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Slider_LatticeOpacity_C>        _offW_LatticeOpacity                                           = new ExternalOffset<UW_Slider_LatticeOpacity_C>(0x02C8, true); // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Slider_UIScale_C>               _offW_UIScaleSlider                                            = new ExternalOffset<UW_Slider_UIScale_C>(0x02D0, true);       // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USaveData_UI_C>                    _offCurrent_Save_Data                                          = new ExternalOffset<USaveData_UI_C>(0x02D8, true);            // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_PopupGeneric_C>                 _offPopup_Legend_Tickets                                       = new ExternalOffset<UW_PopupGeneric_C>(0x02E0, true);         // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_PopupGeneric_C>                 _offPopup_Legend_Icons                                         = new ExternalOffset<UW_PopupGeneric_C>(0x02E8, true);         // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x02F0, true);       // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offCached_SL_Value                                            = new ExternalOffset<byte/*(bool)*/>(0x02F8);                  // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offOptions_Top_Padding                                        = new ExternalOffset<float>(0x02FC);                           // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_PopupGeneric_C>                 _offPopup_Legend_Vehicles                                      = new ExternalOffset<UW_PopupGeneric_C>(0x0300, true);         // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offToggleFOBRadiusVisibility                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0308, false); // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FScriptMulticastDelegate>          _offToggleDirectorLinesVisibility                              = new ExternalOffset<FScriptMulticastDelegate>(0x0318, false); // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UMainMenu_Button_C                                 Button_ChatToggle                                              => _offButton_ChatToggle.GetValue();
	public UMainMenu_Button_C                                 Button_DirectorLines                                           => _offButton_DirectorLines.GetValue();
	public UMainMenu_Button_C                                 Button_FobRadius                                               => _offButton_FobRadius.GetValue();
	public UMainMenu_Button_C                                 Button_GridOpacity                                             => _offButton_GridOpacity.GetValue();
	public UMainMenu_Button_C                                 Button_Icon_Legend                                             => _offButton_Icon_Legend.GetValue();
	public UMainMenu_Button_C                                 Button_IconScale                                               => _offButton_IconScale.GetValue();
	public UMainMenu_Button_C                                 Button_LatticeOpacity                                          => _offButton_LatticeOpacity.GetValue();
	public UMainMenu_Button_C                                 Button_Role                                                    => _offButton_Role.GetValue();
	public UMainMenu_Button_C                                 Button_Spawns                                                  => _offButton_Spawns.GetValue();
	public UMainMenu_Button_C                                 Button_Supplies                                                => _offButton_Supplies.GetValue();
	public UMainMenu_Button_C                                 Button_TCZones                                                 => _offButton_TCZones.GetValue();
	public UMainMenu_Button_C                                 Button_Tix_Legend                                              => _offButton_Tix_Legend.GetValue();
	public UMainMenu_Button_C                                 Button_Vehicles_Legend                                         => _offButton_Vehicles_Legend.GetValue();
	public UMainMenu_Button_C                                 Button_Waypoints                                               => _offButton_Waypoints.GetValue();
	public UMainMenu_Button_C                                 MainMenu_Button_C_12                                           => _offMainMenu_Button_C_12.GetValue();
	public UVerticalBox                                       Options                                                        => _offOptions.GetValue();
	public USizeBox                                           SizeBox_18                                                     => _offSizeBox_18.GetValue();
	public UW_Slider_GridOpacity_C                            W_GridOpacity                                                  => _offW_GridOpacity.GetValue();
	public UW_Slider_LatticeOpacity_C                         W_LatticeOpacity                                               => _offW_LatticeOpacity.GetValue();
	public UW_Slider_UIScale_C                                W_UIScaleSlider                                                => _offW_UIScaleSlider.GetValue();
	public USaveData_UI_C                                     Current_Save_Data                                              => _offCurrent_Save_Data.GetValue();
	public UW_PopupGeneric_C                                  Popup_Legend_Tickets                                           => _offPopup_Legend_Tickets.GetValue();
	public UW_PopupGeneric_C                                  Popup_Legend_Icons                                             => _offPopup_Legend_Icons.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public byte/*(bool)*/                                     Cached_SL_Value                                                => _offCached_SL_Value.GetValue();
	public float                                              Options_Top_Padding                                            => _offOptions_Top_Padding.GetValue();
	public UW_PopupGeneric_C                                  Popup_Legend_Vehicles                                          => _offPopup_Legend_Vehicles.GetValue();
	public FScriptMulticastDelegate                           ToggleFOBRadiusVisibility                                      => _offToggleFOBRadiusVisibility.GetValue();
	public FScriptMulticastDelegate                           ToggleDirectorLinesVisibility                                  => _offToggleDirectorLinesVisibility.GetValue();
	#endregion


}


}