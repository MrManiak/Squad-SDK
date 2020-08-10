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

// WidgetBlueprintGeneratedClass AudioWindow.AudioWindow_C
// 0x0121 (0x0301 - 0x01E0)
public class UAudioWindow_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<USettingsItem_GraphicsToggle_C>    _offAudioInputDevice                                           = new ExternalOffset<USettingsItem_GraphicsToggle_C>(0x0238, true); // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_GraphicsToggle_C>    _offAUDIOOUTPUTDEVICE                                          = new ExternalOffset<USettingsItem_GraphicsToggle_C>(0x0240, true); // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_GraphicsToggle_C>    _offAUDIOQUALITY                                               = new ExternalOffset<USettingsItem_GraphicsToggle_C>(0x0248, true); // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_LR_C>         _offCOMMANDVOICEBALANCE                                        = new ExternalOffset<USettingsItem_Slider_LR_C>(0x0250, true); // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offCOMMANDVOICEVOLUME                                         = new ExternalOffset<USettingsItem_Slider_C>(0x0258, true);    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offEffectsVolume                                              = new ExternalOffset<USettingsItem_Slider_C>(0x0260, true);    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offLOCALVOICEVOLUME                                           = new ExternalOffset<USettingsItem_Slider_C>(0x0268, true);    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offMasterVolume                                               = new ExternalOffset<USettingsItem_Slider_C>(0x0270, true);    // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offMusicVolume                                                = new ExternalOffset<USettingsItem_Slider_C>(0x0278, true);    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offOUTOFGAMEVOLUME                                            = new ExternalOffset<USettingsItem_Slider_C>(0x0280, true);    // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offPrioritySpeakerDucking                                     = new ExternalOffset<USettingsItem_Slider_C>(0x0288, true);    // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScrollBox>                        _offScrollBox                                                  = new ExternalOffset<UScrollBox>(0x0290, true);                // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offSeparator0                                                 = new ExternalOffset<UImage>(0x0298, true);                    // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offSeparator1                                                 = new ExternalOffset<UImage>(0x02A0, true);                    // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_LR_C>         _offSQUADVOICEBALANCE                                          = new ExternalOffset<USettingsItem_Slider_LR_C>(0x02A8, true); // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offSquadVoiceVolume                                           = new ExternalOffset<USettingsItem_Slider_C>(0x02B0, true);    // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleCOMMANDBEEP                                          = new ExternalOffset<USettingsItem_TickBox_C>(0x02B8, true);   // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleLeaderOnlyBias                                       = new ExternalOffset<USettingsItem_TickBox_C>(0x02C0, true);   // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleRADIOFILTER                                          = new ExternalOffset<USettingsItem_TickBox_C>(0x02C8, true);   // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleSQUADBEEP                                            = new ExternalOffset<USettingsItem_TickBox_C>(0x02D0, true);   // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offUIVolume                                                   = new ExternalOffset<USettingsItem_Slider_C>(0x02D8, true);    // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TArray<FScreenResolutionStruct>>   _offScreenResolutions                                          = new ExternalOffset<TArray<FScreenResolutionStruct>>(0x02E0, false); // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<TArray<FScreenResolutionStruct>>   _offValidResolutions                                           = new ExternalOffset<TArray<FScreenResolutionStruct>>(0x02F0, false); // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<byte/*(bool)*/>                    _offbConstructed                                               = new ExternalOffset<byte/*(bool)*/>(0x0300);                  // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public USettingsItem_GraphicsToggle_C                     AudioInputDevice                                               => _offAudioInputDevice.GetValue();
	public USettingsItem_GraphicsToggle_C                     AUDIOOUTPUTDEVICE                                              => _offAUDIOOUTPUTDEVICE.GetValue();
	public USettingsItem_GraphicsToggle_C                     AUDIOQUALITY                                                   => _offAUDIOQUALITY.GetValue();
	public USettingsItem_Slider_LR_C                          COMMANDVOICEBALANCE                                            => _offCOMMANDVOICEBALANCE.GetValue();
	public USettingsItem_Slider_C                             COMMANDVOICEVOLUME                                             => _offCOMMANDVOICEVOLUME.GetValue();
	public USettingsItem_Slider_C                             EffectsVolume                                                  => _offEffectsVolume.GetValue();
	public USettingsItem_Slider_C                             LOCALVOICEVOLUME                                               => _offLOCALVOICEVOLUME.GetValue();
	public USettingsItem_Slider_C                             MasterVolume                                                   => _offMasterVolume.GetValue();
	public USettingsItem_Slider_C                             MusicVolume                                                    => _offMusicVolume.GetValue();
	public USettingsItem_Slider_C                             OUTOFGAMEVOLUME                                                => _offOUTOFGAMEVOLUME.GetValue();
	public USettingsItem_Slider_C                             PrioritySpeakerDucking                                         => _offPrioritySpeakerDucking.GetValue();
	public UScrollBox                                         ScrollBox                                                      => _offScrollBox.GetValue();
	public UImage                                             Separator0                                                     => _offSeparator0.GetValue();
	public UImage                                             Separator1                                                     => _offSeparator1.GetValue();
	public USettingsItem_Slider_LR_C                          SQUADVOICEBALANCE                                              => _offSQUADVOICEBALANCE.GetValue();
	public USettingsItem_Slider_C                             SquadVoiceVolume                                               => _offSquadVoiceVolume.GetValue();
	public USettingsItem_TickBox_C                            ToggleCOMMANDBEEP                                              => _offToggleCOMMANDBEEP.GetValue();
	public USettingsItem_TickBox_C                            ToggleLeaderOnlyBias                                           => _offToggleLeaderOnlyBias.GetValue();
	public USettingsItem_TickBox_C                            ToggleRADIOFILTER                                              => _offToggleRADIOFILTER.GetValue();
	public USettingsItem_TickBox_C                            ToggleSQUADBEEP                                                => _offToggleSQUADBEEP.GetValue();
	public USettingsItem_Slider_C                             UIVolume                                                       => _offUIVolume.GetValue();
	public TArray<FScreenResolutionStruct>                    ScreenResolutions                                              => _offScreenResolutions.GetValue();
	public TArray<FScreenResolutionStruct>                    ValidResolutions                                               => _offValidResolutions.GetValue();
	public byte/*(bool)*/                                     bConstructed                                                   => _offbConstructed.GetValue();
	#endregion


}


}