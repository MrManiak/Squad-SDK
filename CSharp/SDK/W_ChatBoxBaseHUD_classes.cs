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

// WidgetBlueprintGeneratedClass W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C
// 0x0088 (0x0268 - 0x01E0)
public class UW_ChatBoxBaseHUD_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offFade                                                       = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offBorder_MainChat                                            = new ExternalOffset<UBorder>(0x0240, true);                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offMessageList                                                = new ExternalOffset<UVerticalBox>(0x0248, true);              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScrollBox>                        _offScrollBox_1                                                = new ExternalOffset<UScrollBox>(0x0250, true);                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<EChatChannels>>        _offCurrent_Channel                                            = new ExternalOffset<TEnumAsByte<EChatChannels>>(0x0258, false); // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offAuto_Scroll                                                = new ExternalOffset<byte/*(bool)*/>(0x0259);                  // 0x0259(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offIs_Onscreen_Chat                                           = new ExternalOffset<byte/*(bool)*/>(0x025A);                  // 0x025A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offFading                                                     = new ExternalOffset<byte/*(bool)*/>(0x025B);                  // 0x025B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<FTimerHandle>                      _offClose_Chat_Timer                                           = new ExternalOffset<FTimerHandle>(0x0260, false);             // 0x0260(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   Fade                                                           => _offFade.GetValue();
	public UBorder                                            Border_MainChat                                                => _offBorder_MainChat.GetValue();
	public UVerticalBox                                       MessageList                                                    => _offMessageList.GetValue();
	public UScrollBox                                         ScrollBox_1                                                    => _offScrollBox_1.GetValue();
	public TEnumAsByte<EChatChannels>                         Current_Channel                                                => _offCurrent_Channel.GetValue();
	public byte/*(bool)*/                                     Auto_Scroll                                                    => _offAuto_Scroll.GetValue();
	public byte/*(bool)*/                                     Is_Onscreen_Chat                                               => _offIs_Onscreen_Chat.GetValue();
	public byte/*(bool)*/                                     Fading                                                         => _offFading.GetValue();
	public FTimerHandle                                       Close_Chat_Timer                                               => _offClose_Chat_Timer.GetValue();
	#endregion


}


}