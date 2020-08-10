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

// WidgetBlueprintGeneratedClass W_MainNotification.W_MainNotification_C
// 0x00B0 (0x0290 - 0x01E0)
public class UW_MainNotification_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offOut                                                        = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetAnimation>                  _offIn                                                         = new ExternalOffset<UWidgetAnimation>(0x0240, true);          // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Notification                                            = new ExternalOffset<UTextBlock>(0x0248, true);                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offMessage                                                    = new ExternalOffset<FText>(0x0250, false);                    // 0x0250(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	private ExternalOffset<float>                             _offDuration                                                   = new ExternalOffset<float>(0x0268);                           // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offText_Color                                                 = new ExternalOffset<FLinearColor>(0x026C, false);             // 0x026C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offRemoved                                                    = new ExternalOffset<FScriptMulticastDelegate>(0x0280, false); // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   Out                                                            => _offOut.GetValue();
	public UWidgetAnimation                                   In                                                             => _offIn.GetValue();
	public UTextBlock                                         TB_Notification                                                => _offTB_Notification.GetValue();
	public FText                                              Message                                                        => _offMessage.GetValue();
	public float                                              Duration                                                       => _offDuration.GetValue();
	public FLinearColor                                       Text_Color                                                     => _offText_Color.GetValue();
	public FScriptMulticastDelegate                           Removed                                                        => _offRemoved.GetValue();
	#endregion


}


}