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

// WidgetBlueprintGeneratedClass W_NotificationItem.W_NotificationItem_C
// 0x00A8 (0x0288 - 0x01E0)
public class UW_NotificationItem_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offOut                                                        = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetAnimation>                  _offIn                                                         = new ExternalOffset<UWidgetAnimation>(0x0240, true);          // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIcon                                                       = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Notification                                            = new ExternalOffset<UTextBlock>(0x0250, true);                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offMessage                                                    = new ExternalOffset<FText>(0x0258, false);                    // 0x0258(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	private ExternalOffset<USQNotificationData>               _offNotification_Data                                          = new ExternalOffset<USQNotificationData>(0x0270, true);       // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ESQNotificationTypes>              _offNotification_Type                                          = new ExternalOffset<ESQNotificationTypes>(0x0278, false);     // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offCustom_Icon                                                = new ExternalOffset<UTexture2D>(0x0280, true);                // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   Out                                                            => _offOut.GetValue();
	public UWidgetAnimation                                   In                                                             => _offIn.GetValue();
	public UImage                                             Icon                                                           => _offIcon.GetValue();
	public UTextBlock                                         TB_Notification                                                => _offTB_Notification.GetValue();
	public FText                                              Message                                                        => _offMessage.GetValue();
	public USQNotificationData                                Notification_Data                                              => _offNotification_Data.GetValue();
	public ESQNotificationTypes                               Notification_Type                                              => _offNotification_Type.GetValue();
	public UTexture2D                                         Custom_Icon                                                    => _offCustom_Icon.GetValue();
	#endregion


}


}