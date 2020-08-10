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

// WidgetBlueprintGeneratedClass W_DroneUI.W_DroneUI_C
// 0x0120 (0x0300 - 0x01E0)
public class UW_DroneUI_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offpowerlow                                                   = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UProgressBar>                      _offBattery                                                    = new ExternalOffset<UProgressBar>(0x0240, true);              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offCameraPitchAngle                                           = new ExternalOffset<UTextBlock>(0x0248, true);                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCameraPitchLadder                                          = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCorner                                                     = new ExternalOffset<UImage>(0x0258, true);                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offcross                                                      = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offElevation                                                  = new ExternalOffset<UTextBlock>(0x0268, true);                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offGridRef                                                    = new ExternalOffset<UTextBlock>(0x0270, true);                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_3                                                    = new ExternalOffset<UImage>(0x0278, true);                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_11                                                   = new ExternalOffset<UImage>(0x0280, true);                    // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_12                                                   = new ExternalOffset<UImage>(0x0288, true);                    // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_13                                                   = new ExternalOffset<UImage>(0x0290, true);                    // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offPitchPanel                                                 = new ExternalOffset<UOverlay>(0x0298, true);                  // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_1                                                = new ExternalOffset<UTextBlock>(0x02A0, true);                // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_2                                                = new ExternalOffset<UTextBlock>(0x02A8, true);                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_3                                                = new ExternalOffset<UTextBlock>(0x02B0, true);                // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_7                                                = new ExternalOffset<UTextBlock>(0x02B8, true);                // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTime                                                       = new ExternalOffset<UTextBlock>(0x02C0, true);                // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_CustomCompass_Roboto_C>         _offW_CustomCompass_Roboto_C_1                                 = new ExternalOffset<UW_CustomCompass_Roboto_C>(0x02C8, true); // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ParseKeybindItem_C>             _offW_ParseKeybindItem                                         = new ExternalOffset<UW_ParseKeybindItem_C>(0x02D0, true);     // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ParseKeybindItem_C>             _offW_ParseKeybindItem_C_1                                     = new ExternalOffset<UW_ParseKeybindItem_C>(0x02D8, true);     // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ParseKeybindItem_C>             _offW_ParseKeybindItem_C_2                                     = new ExternalOffset<UW_ParseKeybindItem_C>(0x02E0, true);     // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ParseKeybindItem_C>             _offW_ParseKeybindItem_C_3                                     = new ExternalOffset<UW_ParseKeybindItem_C>(0x02E8, true);     // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ABP_FlyingDrone_C>                 _offMy_Drone                                                   = new ExternalOffset<ABP_FlyingDrone_C>(0x02F0, true);         // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x02F8, true);       // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   powerlow                                                       => _offpowerlow.GetValue();
	public UProgressBar                                       Battery                                                        => _offBattery.GetValue();
	public UTextBlock                                         CameraPitchAngle                                               => _offCameraPitchAngle.GetValue();
	public UImage                                             CameraPitchLadder                                              => _offCameraPitchLadder.GetValue();
	public UImage                                             Corner                                                         => _offCorner.GetValue();
	public UImage                                             cross                                                          => _offcross.GetValue();
	public UTextBlock                                         Elevation                                                      => _offElevation.GetValue();
	public UTextBlock                                         GridRef                                                        => _offGridRef.GetValue();
	public UImage                                             Image_3                                                        => _offImage_3.GetValue();
	public UImage                                             Image_11                                                       => _offImage_11.GetValue();
	public UImage                                             Image_12                                                       => _offImage_12.GetValue();
	public UImage                                             Image_13                                                       => _offImage_13.GetValue();
	public UOverlay                                           PitchPanel                                                     => _offPitchPanel.GetValue();
	public UTextBlock                                         TextBlock_1                                                    => _offTextBlock_1.GetValue();
	public UTextBlock                                         TextBlock_2                                                    => _offTextBlock_2.GetValue();
	public UTextBlock                                         TextBlock_3                                                    => _offTextBlock_3.GetValue();
	public UTextBlock                                         TextBlock_7                                                    => _offTextBlock_7.GetValue();
	public UTextBlock                                         Time                                                           => _offTime.GetValue();
	public UW_CustomCompass_Roboto_C                          W_CustomCompass_Roboto_C_1                                     => _offW_CustomCompass_Roboto_C_1.GetValue();
	public UW_ParseKeybindItem_C                              W_ParseKeybindItem                                             => _offW_ParseKeybindItem.GetValue();
	public UW_ParseKeybindItem_C                              W_ParseKeybindItem_C_1                                         => _offW_ParseKeybindItem_C_1.GetValue();
	public UW_ParseKeybindItem_C                              W_ParseKeybindItem_C_2                                         => _offW_ParseKeybindItem_C_2.GetValue();
	public UW_ParseKeybindItem_C                              W_ParseKeybindItem_C_3                                         => _offW_ParseKeybindItem_C_3.GetValue();
	public ABP_FlyingDrone_C                                  My_Drone                                                       => _offMy_Drone.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	#endregion


}


}