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

// WidgetBlueprintGeneratedClass SettingsItem_ControlList.SettingsItem_ControlList_C
// 0x00B8 (0x0298 - 0x01E0)
public class USettingsItem_ControlList_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorder_1                                                   = new ExternalOffset<UBorder>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offButton_5                                                   = new ExternalOffset<UButton>(0x0240, true);                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UGlowingButton_12_C>               _offNewKey_Alternative                                         = new ExternalOffset<UGlowingButton_12_C>(0x0248, true);       // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UGlowingButton_12_C>               _offNewKey_JoystickGamepad                                     = new ExternalOffset<UGlowingButton_12_C>(0x0250, true);       // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UGlowingButton_12_C>               _offNewKey_Primary                                             = new ExternalOffset<UGlowingButton_12_C>(0x0258, true);       // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_ActionName                                              = new ExternalOffset<UTextBlock>(0x0260, true);                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FName>                             _offActionName                                                 = new ExternalOffset<FName>(0x0268, false);                    // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<UControlsWindow_C>                 _offControlsWindow                                             = new ExternalOffset<UControlsWindow_C>(0x0270, true);         // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offCapturingKey                                               = new ExternalOffset<int>(0x0278);                             // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offAxis                                                       = new ExternalOffset<byte/*(bool)*/>(0x027C);                  // 0x027C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	private ExternalOffset<byte/*(bool)*/>                    _offNegativeAxis                                               = new ExternalOffset<byte/*(bool)*/>(0x027D);                  // 0x027D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	private ExternalOffset<FText>                             _offFriendlyName                                               = new ExternalOffset<FText>(0x0280, false);                    // 0x0280(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            Border_1                                                       => _offBorder_1.GetValue();
	public UButton                                            Button_5                                                       => _offButton_5.GetValue();
	public UGlowingButton_12_C                                NewKey_Alternative                                             => _offNewKey_Alternative.GetValue();
	public UGlowingButton_12_C                                NewKey_JoystickGamepad                                         => _offNewKey_JoystickGamepad.GetValue();
	public UGlowingButton_12_C                                NewKey_Primary                                                 => _offNewKey_Primary.GetValue();
	public UTextBlock                                         TB_ActionName                                                  => _offTB_ActionName.GetValue();
	public FName                                              ActionName                                                     => _offActionName.GetValue();
	public UControlsWindow_C                                  ControlsWindow                                                 => _offControlsWindow.GetValue();
	public int                                                CapturingKey                                                   => _offCapturingKey.GetValue();
	public byte/*(bool)*/                                     Axis                                                           => _offAxis.GetValue();
	public byte/*(bool)*/                                     NegativeAxis                                                   => _offNegativeAxis.GetValue();
	public FText                                              FriendlyName                                                   => _offFriendlyName.GetValue();
	#endregion


}


}