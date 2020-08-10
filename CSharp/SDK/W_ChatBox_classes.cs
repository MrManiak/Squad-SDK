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

// WidgetBlueprintGeneratedClass W_ChatBox.W_ChatBox_C
// 0x00A9 (0x0289 - 0x01E0)
public class UW_ChatBox_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorder_MainChat                                            = new ExternalOffset<UBorder>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UEditableTextBox>                  _offEditableTextBox_166                                        = new ExternalOffset<UEditableTextBox>(0x0240, true);          // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offMessageList                                                = new ExternalOffset<UVerticalBox>(0x0248, true);              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offScrollButton                                               = new ExternalOffset<UButton>(0x0250, true);                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScrollBox>                        _offScrollList                                                 = new ExternalOffset<UScrollBox>(0x0258, true);                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offServerMessage                                              = new ExternalOffset<UBorder>(0x0260, true);                   // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTBChannel                                                  = new ExternalOffset<UTextBlock>(0x0268, true);                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offTextEntryBorder                                            = new ExternalOffset<UBorder>(0x0270, true);                   // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<EChatChannels>>        _offCurrent_Channel                                            = new ExternalOffset<TEnumAsByte<EChatChannels>>(0x0278, false); // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ABP_PlayerController_C>            _offMy_PC                                                      = new ExternalOffset<ABP_PlayerController_C>(0x0280, true);    // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offAuto_Scroll                                                = new ExternalOffset<byte/*(bool)*/>(0x0288);                  // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            Border_MainChat                                                => _offBorder_MainChat.GetValue();
	public UEditableTextBox                                   EditableTextBox_166                                            => _offEditableTextBox_166.GetValue();
	public UVerticalBox                                       MessageList                                                    => _offMessageList.GetValue();
	public UButton                                            ScrollButton                                                   => _offScrollButton.GetValue();
	public UScrollBox                                         ScrollList                                                     => _offScrollList.GetValue();
	public UBorder                                            ServerMessage                                                  => _offServerMessage.GetValue();
	public UTextBlock                                         TBChannel                                                      => _offTBChannel.GetValue();
	public UBorder                                            TextEntryBorder                                                => _offTextEntryBorder.GetValue();
	public TEnumAsByte<EChatChannels>                         Current_Channel                                                => _offCurrent_Channel.GetValue();
	public ABP_PlayerController_C                             My_PC                                                          => _offMy_PC.GetValue();
	public byte/*(bool)*/                                     Auto_Scroll                                                    => _offAuto_Scroll.GetValue();
	#endregion


}


}