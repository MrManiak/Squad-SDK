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

// WidgetBlueprintGeneratedClass SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C
// 0x00FA (0x02DA - 0x01E0)
public class USettingsItem_AntiAliasToggle_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UButton>                           _offButton_1                                                   = new ExternalOffset<UButton>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offFXAA                                                       = new ExternalOffset<UMainMenu_Button_C>(0x0240, true);        // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offHorizontalBox_1                                            = new ExternalOffset<UHorizontalBox>(0x0248, true);            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offMSAAdisabled_required                                      = new ExternalOffset<UMainMenu_Button_C>(0x0250, true);        // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offOff                                                        = new ExternalOffset<UMainMenu_Button_C>(0x0258, true);        // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offSMAA                                                       = new ExternalOffset<UMainMenu_Button_C>(0x0260, true);        // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offSpacerImg                                                  = new ExternalOffset<UImage>(0x0268, true);                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offTAA                                                        = new ExternalOffset<UMainMenu_Button_C>(0x0270, true);        // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Title                                                   = new ExternalOffset<UTextBlock>(0x0278, true);                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offTFXAA                                                      = new ExternalOffset<UMainMenu_Button_C>(0x0280, true);        // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offSettingName                                                = new ExternalOffset<FText>(0x0288, false);                    // 0x0288(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<TArray<FText>>                     _offButtonNames                                                = new ExternalOffset<TArray<FText>>(0x02A0, false);            // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	private ExternalOffset<TArray<UMainMenu_Button_C>>        _offButtons                                                    = new ExternalOffset<TArray<UMainMenu_Button_C>>(0x02B0, false); // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	private ExternalOffset<int>                               _offSelectedButton                                             = new ExternalOffset<int>(0x02C0);                             // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnButtonClick                                              = new ExternalOffset<FScriptMulticastDelegate>(0x02C8, false); // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<byte/*(bool)*/>                    _offbHovered                                                   = new ExternalOffset<byte/*(bool)*/>(0x02D8);                  // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbConstructed                                               = new ExternalOffset<byte/*(bool)*/>(0x02D9);                  // 0x02D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UButton                                            Button_1                                                       => _offButton_1.GetValue();
	public UMainMenu_Button_C                                 FXAA                                                           => _offFXAA.GetValue();
	public UHorizontalBox                                     HorizontalBox_1                                                => _offHorizontalBox_1.GetValue();
	public UMainMenu_Button_C                                 MSAAdisabled_required                                          => _offMSAAdisabled_required.GetValue();
	public UMainMenu_Button_C                                 Off                                                            => _offOff.GetValue();
	public UMainMenu_Button_C                                 SMAA                                                           => _offSMAA.GetValue();
	public UImage                                             SpacerImg                                                      => _offSpacerImg.GetValue();
	public UMainMenu_Button_C                                 TAA                                                            => _offTAA.GetValue();
	public UTextBlock                                         TB_Title                                                       => _offTB_Title.GetValue();
	public UMainMenu_Button_C                                 TFXAA                                                          => _offTFXAA.GetValue();
	public FText                                              SettingName                                                    => _offSettingName.GetValue();
	public TArray<FText>                                      ButtonNames                                                    => _offButtonNames.GetValue();
	public TArray<UMainMenu_Button_C>                         Buttons                                                        => _offButtons.GetValue();
	public int                                                SelectedButton                                                 => _offSelectedButton.GetValue();
	public FScriptMulticastDelegate                           OnButtonClick                                                  => _offOnButtonClick.GetValue();
	public byte/*(bool)*/                                     bHovered                                                       => _offbHovered.GetValue();
	public byte/*(bool)*/                                     bConstructed                                                   => _offbConstructed.GetValue();
	#endregion


}


}