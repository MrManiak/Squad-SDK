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

// WidgetBlueprintGeneratedClass ControlsWindow.ControlsWindow_C
// 0x0110 (0x02F0 - 0x01E0)
public class UControlsWindow_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UVerticalBox>                      _offAircraftList                                               = new ExternalOffset<UVerticalBox>(0x0238, true);              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_Aircraft                                            = new ExternalOffset<UMainMenu_Button_C>(0x0240, true);        // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_Command                                             = new ExternalOffset<UMainMenu_Button_C>(0x0248, true);        // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_General                                             = new ExternalOffset<UMainMenu_Button_C>(0x0250, true);        // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_Infantry                                            = new ExternalOffset<UMainMenu_Button_C>(0x0258, true);        // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_Vehicle                                             = new ExternalOffset<UMainMenu_Button_C>(0x0260, true);        // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offCanvasPanel_5                                              = new ExternalOffset<UCanvasPanel>(0x0268, true);              // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offCommandList                                                = new ExternalOffset<UVerticalBox>(0x0270, true);              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offGeneralList                                                = new ExternalOffset<UVerticalBox>(0x0278, true);              // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offInfantryList                                               = new ExternalOffset<UVerticalBox>(0x0280, true);              // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScrollBox>                        _offScrollBox                                                  = new ExternalOffset<UScrollBox>(0x0288, true);                // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offSpacer                                                     = new ExternalOffset<UImage>(0x0290, true);                    // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextAction                                                 = new ExternalOffset<UTextBlock>(0x0298, true);                // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offVehicleList                                                = new ExternalOffset<UVerticalBox>(0x02A0, true);              // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWidgetSwitcher_ControlsTab                                 = new ExternalOffset<UWidgetSwitcher>(0x02A8, true);           // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TArray<UWidget>>                   _offControlsListItems                                          = new ExternalOffset<TArray<UWidget>>(0x02B0, false);          // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	private ExternalOffset<UInputCapture_C>                   _offInputCaptureWidget                                         = new ExternalOffset<UInputCapture_C>(0x02C0, true);           // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offbConstructed                                               = new ExternalOffset<byte/*(bool)*/>(0x02C8);                  // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<TArray<FKeybindAxisStruct>>        _offAxisKeybinds                                               = new ExternalOffset<TArray<FKeybindAxisStruct>>(0x02D0, false); // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	private ExternalOffset<TArray<FKeybindActionStruct>>      _offKeybindsList                                               = new ExternalOffset<TArray<FKeybindActionStruct>>(0x02E0, false); // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UVerticalBox                                       AircraftList                                                   => _offAircraftList.GetValue();
	public UMainMenu_Button_C                                 Button_Aircraft                                                => _offButton_Aircraft.GetValue();
	public UMainMenu_Button_C                                 Button_Command                                                 => _offButton_Command.GetValue();
	public UMainMenu_Button_C                                 Button_General                                                 => _offButton_General.GetValue();
	public UMainMenu_Button_C                                 Button_Infantry                                                => _offButton_Infantry.GetValue();
	public UMainMenu_Button_C                                 Button_Vehicle                                                 => _offButton_Vehicle.GetValue();
	public UCanvasPanel                                       CanvasPanel_5                                                  => _offCanvasPanel_5.GetValue();
	public UVerticalBox                                       CommandList                                                    => _offCommandList.GetValue();
	public UVerticalBox                                       GeneralList                                                    => _offGeneralList.GetValue();
	public UVerticalBox                                       InfantryList                                                   => _offInfantryList.GetValue();
	public UScrollBox                                         ScrollBox                                                      => _offScrollBox.GetValue();
	public UImage                                             Spacer                                                         => _offSpacer.GetValue();
	public UTextBlock                                         TextAction                                                     => _offTextAction.GetValue();
	public UVerticalBox                                       VehicleList                                                    => _offVehicleList.GetValue();
	public UWidgetSwitcher                                    WidgetSwitcher_ControlsTab                                     => _offWidgetSwitcher_ControlsTab.GetValue();
	public TArray<UWidget>                                    ControlsListItems                                              => _offControlsListItems.GetValue();
	public UInputCapture_C                                    InputCaptureWidget                                             => _offInputCaptureWidget.GetValue();
	public byte/*(bool)*/                                     bConstructed                                                   => _offbConstructed.GetValue();
	public TArray<FKeybindAxisStruct>                         AxisKeybinds                                                   => _offAxisKeybinds.GetValue();
	public TArray<FKeybindActionStruct>                       KeybindsList                                                   => _offKeybindsList.GetValue();
	#endregion


}


}