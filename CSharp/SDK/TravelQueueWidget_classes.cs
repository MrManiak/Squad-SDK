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

// WidgetBlueprintGeneratedClass TravelQueueWidget.TravelQueueWidget_C
// 0x0200 (0x03E0 - 0x01E0)
public class UTravelQueueWidget_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offOpenClose                                                  = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offButton_Toggle                                              = new ExternalOffset<UButton>(0x0240, true);                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_2                                                    = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_3                                                    = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offLeaveQueue                                                 = new ExternalOffset<UMainMenu_Button_C>(0x0258, true);        // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offQueue                                                      = new ExternalOffset<UVerticalBox>(0x0260, true);              // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_1                                                  = new ExternalOffset<USizeBox>(0x0268, true);                  // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Details1                                                = new ExternalOffset<UTextBlock>(0x0270, true);                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Details2                                                = new ExternalOffset<UTextBlock>(0x0278, true);                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_MapName                                                 = new ExternalOffset<UTextBlock>(0x0280, true);                // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Position                                                = new ExternalOffset<UTextBlock>(0x0288, true);                // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_ServerName                                              = new ExternalOffset<UTextBlock>(0x0290, true);                // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offTopLine                                                    = new ExternalOffset<UImage>(0x0298, true);                    // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offOpen                                                       = new ExternalOffset<byte/*(bool)*/>(0x02A0);                  // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<int>                               _offSecs_to_Join                                               = new ExternalOffset<int>(0x02A4);                             // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UMainMenuScreen_C>                 _offREF_Menu                                                   = new ExternalOffset<UMainMenuScreen_C>(0x02A8, true);         // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FBlueprintSessionResult>           _offQueued_Session                                             = new ExternalOffset<FBlueprintSessionResult>(0x02B0, false);  // 0x02B0(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<byte/*(bool)*/>                    _offCan_Toggle_Open                                            = new ExternalOffset<byte/*(bool)*/>(0x0368);                  // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FString>                           _offMarquee_String                                             = new ExternalOffset<FString>(0x0370, false);                  // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offwas_hovered                                                = new ExternalOffset<byte/*(bool)*/>(0x0380);                  // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FTimerHandle>                      _offCount_down_handle                                          = new ExternalOffset<FTimerHandle>(0x0388, false);             // 0x0388(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offPosition                                                   = new ExternalOffset<FText>(0x0390, false);                    // 0x0390(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<FText>                             _offStatus                                                     = new ExternalOffset<FText>(0x03A8, false);                    // 0x03A8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<FText>                             _offQueue_Details                                              = new ExternalOffset<FText>(0x03C0, false);                    // 0x03C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<ASQJoinBeaconClient>               _offCurrent_Queue                                              = new ExternalOffset<ASQJoinBeaconClient>(0x03D8, true);       // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   OpenClose                                                      => _offOpenClose.GetValue();
	public UButton                                            Button_Toggle                                                  => _offButton_Toggle.GetValue();
	public UImage                                             Image_2                                                        => _offImage_2.GetValue();
	public UImage                                             Image_3                                                        => _offImage_3.GetValue();
	public UMainMenu_Button_C                                 LeaveQueue                                                     => _offLeaveQueue.GetValue();
	public UVerticalBox                                       Queue                                                          => _offQueue.GetValue();
	public USizeBox                                           SizeBox_1                                                      => _offSizeBox_1.GetValue();
	public UTextBlock                                         TB_Details1                                                    => _offTB_Details1.GetValue();
	public UTextBlock                                         TB_Details2                                                    => _offTB_Details2.GetValue();
	public UTextBlock                                         TB_MapName                                                     => _offTB_MapName.GetValue();
	public UTextBlock                                         TB_Position                                                    => _offTB_Position.GetValue();
	public UTextBlock                                         TB_ServerName                                                  => _offTB_ServerName.GetValue();
	public UImage                                             TopLine                                                        => _offTopLine.GetValue();
	public byte/*(bool)*/                                     Open                                                           => _offOpen.GetValue();
	public int                                                Secs_to_Join                                                   => _offSecs_to_Join.GetValue();
	public UMainMenuScreen_C                                  REF_Menu                                                       => _offREF_Menu.GetValue();
	public FBlueprintSessionResult                            Queued_Session                                                 => _offQueued_Session.GetValue();
	public byte/*(bool)*/                                     Can_Toggle_Open                                                => _offCan_Toggle_Open.GetValue();
	public FString                                            Marquee_String                                                 => _offMarquee_String.GetValue();
	public byte/*(bool)*/                                     was_hovered                                                    => _offwas_hovered.GetValue();
	public FTimerHandle                                       Count_down_handle                                              => _offCount_down_handle.GetValue();
	public FText                                              Position                                                       => _offPosition.GetValue();
	public FText                                              Status                                                         => _offStatus.GetValue();
	public FText                                              Queue_Details                                                  => _offQueue_Details.GetValue();
	public ASQJoinBeaconClient                                Current_Queue                                                  => _offCurrent_Queue.GetValue();
	#endregion


}


}