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

// BlueprintGeneratedClass UI_Events_Component.UI_Events_Component_C
// 0x004C (0x0114 - 0x00C8)
public class UUI_Events_Component_C : UActorComponent
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x00D8, false); // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UDataTable>                        _offMode_Data                                                  = new ExternalOffset<UDataTable>(0x00E0, true);                // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offGame_Mode_Intro_Widget_Class                               = new ExternalOffset<UClass>(0x0110, true);                    // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UUserWidget>                       _offMode_Intro_Widget                                          = new ExternalOffset<UUserWidget>(0x0118, true);               // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UGraphNodeBasedBleedComponent_C>   _offBleed_Component                                            = new ExternalOffset<UGraphNodeBasedBleedComponent_C>(0x0120, true); // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQTeamState>                      _offTeam_State                                                 = new ExternalOffset<ASQTeamState>(0x0128, true);              // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAudioComponent>                   _offCurrent_Sound                                              = new ExternalOffset<UAudioComponent>(0x0130, true);           // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offTime_Between_Queued_Sounds                                 = new ExternalOffset<float>(0x0148);                           // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UDataTable                                         Mode_Data                                                      => _offMode_Data.GetValue();
	public UClass                                             Game_Mode_Intro_Widget_Class                                   => _offGame_Mode_Intro_Widget_Class.GetValue();
	public UUserWidget                                        Mode_Intro_Widget                                              => _offMode_Intro_Widget.GetValue();
	public UGraphNodeBasedBleedComponent_C                    Bleed_Component                                                => _offBleed_Component.GetValue();
	public ASQTeamState                                       Team_State                                                     => _offTeam_State.GetValue();
	public UAudioComponent                                    Current_Sound                                                  => _offCurrent_Sound.GetValue();
	public float                                              Time_Between_Queued_Sounds                                     => _offTime_Between_Queued_Sounds.GetValue();
	#endregion


}


}