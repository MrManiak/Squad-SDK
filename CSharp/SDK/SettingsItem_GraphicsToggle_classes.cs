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

// WidgetBlueprintGeneratedClass SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C
// 0x00D8 (0x02B8 - 0x01E0)
public class USettingsItem_GraphicsToggle_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UButton>                           _offGlobalButton                                               = new ExternalOffset<UButton>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offHorizontalButtonBox                                        = new ExternalOffset<UHorizontalBox>(0x0240, true);            // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Title                                                   = new ExternalOffset<UTextBlock>(0x0248, true);                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offSettingName                                                = new ExternalOffset<FText>(0x0250, false);                    // 0x0250(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<TArray<FText>>                     _offButtonNames                                                = new ExternalOffset<TArray<FText>>(0x0268, false);            // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	private ExternalOffset<int>                               _offSelectedButton                                             = new ExternalOffset<int>(0x0278);                             // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnButtonClick                                              = new ExternalOffset<FScriptMulticastDelegate>(0x0280, false); // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<byte/*(bool)*/>                    _offbHovered                                                   = new ExternalOffset<byte/*(bool)*/>(0x0290);                  // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbConstructed                                               = new ExternalOffset<byte/*(bool)*/>(0x0291);                  // 0x0291(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<int>                               _offTag                                                        = new ExternalOffset<int>(0x0294);                             // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnButtonClick2                                             = new ExternalOffset<FScriptMulticastDelegate>(0x0298, false); // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<TArray<USetting_Button_C>>         _offMy_Buttons                                                 = new ExternalOffset<TArray<USetting_Button_C>>(0x02A8, false); // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UButton                                            GlobalButton                                                   => _offGlobalButton.GetValue();
	public UHorizontalBox                                     HorizontalButtonBox                                            => _offHorizontalButtonBox.GetValue();
	public UTextBlock                                         TB_Title                                                       => _offTB_Title.GetValue();
	public FText                                              SettingName                                                    => _offSettingName.GetValue();
	public TArray<FText>                                      ButtonNames                                                    => _offButtonNames.GetValue();
	public int                                                SelectedButton                                                 => _offSelectedButton.GetValue();
	public FScriptMulticastDelegate                           OnButtonClick                                                  => _offOnButtonClick.GetValue();
	public byte/*(bool)*/                                     bHovered                                                       => _offbHovered.GetValue();
	public byte/*(bool)*/                                     bConstructed                                                   => _offbConstructed.GetValue();
	public int                                                Tag                                                            => _offTag.GetValue();
	public FScriptMulticastDelegate                           OnButtonClick2                                                 => _offOnButtonClick2.GetValue();
	public TArray<USetting_Button_C>                          My_Buttons                                                     => _offMy_Buttons.GetValue();
	#endregion


}


}