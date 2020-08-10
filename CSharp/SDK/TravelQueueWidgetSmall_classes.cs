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

// WidgetBlueprintGeneratedClass TravelQueueWidgetSmall.TravelQueueWidgetSmall_C
// 0x0268 (0x0448 - 0x01E0)
public class UTravelQueueWidgetSmall_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offOpenClose                                                  = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Position                                                = new ExternalOffset<UTextBlock>(0x0240, true);                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offOpen                                                       = new ExternalOffset<byte/*(bool)*/>(0x0248);                  // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<int>                               _offSecs_to_Join                                               = new ExternalOffset<int>(0x024C);                             // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UMainMenuScreen_C>                 _offREF_Menu                                                   = new ExternalOffset<UMainMenuScreen_C>(0x0250, true);         // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FBlueprintSessionResult>           _offQueued_Session                                             = new ExternalOffset<FBlueprintSessionResult>(0x0258, false);  // 0x0258(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<byte/*(bool)*/>                    _offCan_Toggle_Open                                            = new ExternalOffset<byte/*(bool)*/>(0x0310);                  // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FString>                           _offMarquee_String                                             = new ExternalOffset<FString>(0x0318, false);                  // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offwas_hovered                                                = new ExternalOffset<byte/*(bool)*/>(0x0328);                  // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FTimerHandle>                      _offCount_down_handle                                          = new ExternalOffset<FTimerHandle>(0x0330, false);             // 0x0330(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offPosition                                                   = new ExternalOffset<FText>(0x0338, false);                    // 0x0338(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<FText>                             _offStatus                                                     = new ExternalOffset<FText>(0x0350, false);                    // 0x0350(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<FText>                             _offQueue_Details                                              = new ExternalOffset<FText>(0x0368, false);                    // 0x0368(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<ASQJoinBeaconClient>               _offCurrent_Queue                                              = new ExternalOffset<ASQJoinBeaconClient>(0x0380, true);       // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQGameInstance>                   _offGame_Instance                                              = new ExternalOffset<USQGameInstance>(0x0388, true);           // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FBlueprintSessionResult>           _offPending_Server                                             = new ExternalOffset<FBlueprintSessionResult>(0x0390, false);  // 0x0390(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   OpenClose                                                      => _offOpenClose.GetValue();
	public UTextBlock                                         TB_Position                                                    => _offTB_Position.GetValue();
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
	public USQGameInstance                                    Game_Instance                                                  => _offGame_Instance.GetValue();
	public FBlueprintSessionResult                            Pending_Server                                                 => _offPending_Server.GetValue();
	#endregion


}


}