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

// BlueprintGeneratedClass BP_RadialVoiceCommands_Parent.BP_RadialVoiceCommands_Parent_C
// 0x0058 (0x00B0 - 0x0058)
public class UBP_RadialVoiceCommands_Parent_C : UBP_RadialMenuModel_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0058, false); // 0x0058(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<TArray<USoundCue>>                 _offSounds                                                     = new ExternalOffset<TArray<USoundCue>>(0x0060, false);        // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<TArray<FText>>                     _offDisplay_Names                                              = new ExternalOffset<TArray<FText>>(0x0070, false);            // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<USoundCue>                         _offCenter_Sound                                               = new ExternalOffset<USoundCue>(0x0080, true);                 // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offCenter_Name                                                = new ExternalOffset<FText>(0x0088, false);                    // 0x0088(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<UDataTable>                        _offData_Table_Voice                                           = new ExternalOffset<UDataTable>(0x00A0, true);                // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offVoice_Command_Radial_Class                                 = new ExternalOffset<UClass>(0x00A8, true);                    // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public TArray<USoundCue>                                  Sounds                                                         => _offSounds.GetValue();
	public TArray<FText>                                      Display_Names                                                  => _offDisplay_Names.GetValue();
	public USoundCue                                          Center_Sound                                                   => _offCenter_Sound.GetValue();
	public FText                                              Center_Name                                                    => _offCenter_Name.GetValue();
	public UDataTable                                         Data_Table_Voice                                               => _offData_Table_Voice.GetValue();
	public UClass                                             Voice_Command_Radial_Class                                     => _offVoice_Command_Radial_Class.GetValue();
	#endregion


}


}