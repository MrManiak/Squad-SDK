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

// WidgetBlueprintGeneratedClass W_VoipList.W_VoipList_C
// 0x0080 (0x0260 - 0x01E0)
public class UW_VoipList_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UGridPanel>                        _offVoipGrid                                                   = new ExternalOffset<UGridPanel>(0x0238, true);                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offMax_List_Size                                              = new ExternalOffset<int>(0x0240);                             // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQHUD>                            _offREF_HUD                                                    = new ExternalOffset<ASQHUD>(0x0248, true);                    // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<UW_VoipPlayer_C>>           _offVoip_Player_Widgets                                        = new ExternalOffset<TArray<UW_VoipPlayer_C>>(0x0250, false);  // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UGridPanel                                         VoipGrid                                                       => _offVoipGrid.GetValue();
	public int                                                Max_List_Size                                                  => _offMax_List_Size.GetValue();
	public ASQHUD                                             REF_HUD                                                        => _offREF_HUD.GetValue();
	public TArray<UW_VoipPlayer_C>                            Voip_Player_Widgets                                            => _offVoip_Player_Widgets.GetValue();
	#endregion


}


}