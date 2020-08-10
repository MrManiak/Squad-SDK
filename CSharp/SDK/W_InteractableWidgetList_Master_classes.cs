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

// WidgetBlueprintGeneratedClass W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C
// 0x0079 (0x02A9 - 0x0230)
public class UW_InteractableWidgetList_Master_C : USQInteractableWidgetList
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<FText>                             _offDisplay_Name                                               = new ExternalOffset<FText>(0x0238, false);                    // 0x0238(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<AActor>                            _offInteract_Actor                                             = new ExternalOffset<AActor>(0x0250, true);                    // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<FSQUsableData>                     _offInteract_Data                                              = new ExternalOffset<FSQUsableData>(0x0258, false);            // 0x0258(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<FTimerHandle>                      _offStop_Drawing_Timer                                         = new ExternalOffset<FTimerHandle>(0x0298, false);             // 0x0298(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offShould_Set_Position                                        = new ExternalOffset<byte/*(bool)*/>(0x02A0);                  // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offOpen                                                       = new ExternalOffset<byte/*(bool)*/>(0x02A1);                  // 0x02A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offCan_Open                                                   = new ExternalOffset<byte/*(bool)*/>(0x02A2);                  // 0x02A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offEdge_padding                                               = new ExternalOffset<float>(0x02A4);                           // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offForce_Update_Interaction_Items                             = new ExternalOffset<byte/*(bool)*/>(0x02A8);                  // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public FText                                              Display_Name                                                   => _offDisplay_Name.GetValue();
	public AActor                                             Interact_Actor                                                 => _offInteract_Actor.GetValue();
	public FSQUsableData                                      Interact_Data                                                  => _offInteract_Data.GetValue();
	public FTimerHandle                                       Stop_Drawing_Timer                                             => _offStop_Drawing_Timer.GetValue();
	public byte/*(bool)*/                                     Should_Set_Position                                            => _offShould_Set_Position.GetValue();
	public byte/*(bool)*/                                     Open                                                           => _offOpen.GetValue();
	public byte/*(bool)*/                                     Can_Open                                                       => _offCan_Open.GetValue();
	public float                                              Edge_padding                                                   => _offEdge_padding.GetValue();
	public byte/*(bool)*/                                     Force_Update_Interaction_Items                                 => _offForce_Update_Interaction_Items.GetValue();
	#endregion


}


}