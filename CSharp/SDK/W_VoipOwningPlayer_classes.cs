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

// WidgetBlueprintGeneratedClass W_VoipOwningPlayer.W_VoipOwningPlayer_C
// 0x00D9 (0x02B9 - 0x01E0)
public class UW_VoipOwningPlayer_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorder_1                                                   = new ExternalOffset<UBorder>(0x0238, true);                   // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offBorder_command                                             = new ExternalOffset<UBorder>(0x0240, true);                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Channel                                                 = new ExternalOffset<UTextBlock>(0x0248, true);                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offVoipIcon                                                   = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQHUD>                            _offREF_HUD                                                    = new ExternalOffset<ASQHUD>(0x0258, true);                    // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ESlateVisibility>                  _offVoip_Vis                                                   = new ExternalOffset<ESlateVisibility>(0x0260, false);         // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offVoip_Colour                                                = new ExternalOffset<FLinearColor>(0x0264, false);             // 0x0264(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offSquadToAllSquadsRadioColor                                 = new ExternalOffset<FLinearColor>(0x0274, false);             // 0x0274(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offSquadToSquadRadioColor                                     = new ExternalOffset<FLinearColor>(0x0284, false);             // 0x0284(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offVoip_Channel_Text                                          = new ExternalOffset<FText>(0x0298, false);                    // 0x0298(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x02B0, true);       // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ESQVoiceChannel>                   _offCurrentState                                               = new ExternalOffset<ESQVoiceChannel>(0x02B8, false);          // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            Border_1                                                       => _offBorder_1.GetValue();
	public UBorder                                            Border_command                                                 => _offBorder_command.GetValue();
	public UTextBlock                                         TB_Channel                                                     => _offTB_Channel.GetValue();
	public UImage                                             VoipIcon                                                       => _offVoipIcon.GetValue();
	public ASQHUD                                             REF_HUD                                                        => _offREF_HUD.GetValue();
	public ESlateVisibility                                   Voip_Vis                                                       => _offVoip_Vis.GetValue();
	public FLinearColor                                       Voip_Colour                                                    => _offVoip_Colour.GetValue();
	public FLinearColor                                       SquadToAllSquadsRadioColor                                     => _offSquadToAllSquadsRadioColor.GetValue();
	public FLinearColor                                       SquadToSquadRadioColor                                         => _offSquadToSquadRadioColor.GetValue();
	public FText                                              Voip_Channel_Text                                              => _offVoip_Channel_Text.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public ESQVoiceChannel                                    CurrentState                                                   => _offCurrentState.GetValue();
	#endregion


}


}