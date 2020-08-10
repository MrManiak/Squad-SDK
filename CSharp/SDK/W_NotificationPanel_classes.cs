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

// WidgetBlueprintGeneratedClass W_NotificationPanel.W_NotificationPanel_C
// 0x007C (0x025C - 0x01E0)
public class UW_NotificationPanel_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UVerticalBox>                      _offVerticalBox_2                                              = new ExternalOffset<UVerticalBox>(0x0238, true);              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TArray<FS_MainNotification>>       _offPending_Main_Notifications                                 = new ExternalOffset<TArray<FS_MainNotification>>(0x0240, false); // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	private ExternalOffset<UW_MainNotification_C>             _offCurrent_Notification                                       = new ExternalOffset<UW_MainNotification_C>(0x0250, true);     // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMain_Notification_Duration                                 = new ExternalOffset<float>(0x0258);                           // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UVerticalBox                                       VerticalBox_2                                                  => _offVerticalBox_2.GetValue();
	public TArray<FS_MainNotification>                        Pending_Main_Notifications                                     => _offPending_Main_Notifications.GetValue();
	public UW_MainNotification_C                              Current_Notification                                           => _offCurrent_Notification.GetValue();
	public float                                              Main_Notification_Duration                                     => _offMain_Notification_Duration.GetValue();
	#endregion


}


}