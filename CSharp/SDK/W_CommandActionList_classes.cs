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

// WidgetBlueprintGeneratedClass W_CommandActionList.W_CommandActionList_C
// 0x00C0 (0x02A0 - 0x01E0)
public class UW_CommandActionList_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorderMain                                                 = new ExternalOffset<UBorder>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offCategoryBox                                                = new ExternalOffset<UVerticalBox>(0x0240, true);              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_5                                                    = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Requirements                                            = new ExternalOffset<UTextBlock>(0x0250, true);                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_2                                                = new ExternalOffset<UTextBlock>(0x0258, true);                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMI_TacticoolTimer                                          = new ExternalOffset<UMaterialInstanceDynamic>(0x0260, true);  // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMI_Strategic_Timer                                         = new ExternalOffset<UMaterialInstanceDynamic>(0x0268, true);  // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offTactical_Time_Remaining                                    = new ExternalOffset<float>(0x0270);                           // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offTactical_Locked                                            = new ExternalOffset<byte/*(bool)*/>(0x0274);                  // 0x0274(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offStrategic_Time_Remaining                                   = new ExternalOffset<float>(0x0278);                           // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offStrategic_Locked                                           = new ExternalOffset<byte/*(bool)*/>(0x027C);                  // 0x027C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UW_CommandPrePlacement_C>          _offPre_Placement_Widget                                       = new ExternalOffset<UW_CommandPrePlacement_C>(0x0280, true);  // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0288, true);       // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerState>                    _offCurrent_Commander                                          = new ExternalOffset<ASQPlayerState>(0x0290, true);            // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offAdditional_Distance                                        = new ExternalOffset<float>(0x0298);                           // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offTurn_Speed                                                 = new ExternalOffset<float>(0x029C);                           // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            BorderMain                                                     => _offBorderMain.GetValue();
	public UVerticalBox                                       CategoryBox                                                    => _offCategoryBox.GetValue();
	public UImage                                             Image_5                                                        => _offImage_5.GetValue();
	public UTextBlock                                         TB_Requirements                                                => _offTB_Requirements.GetValue();
	public UTextBlock                                         TextBlock_2                                                    => _offTextBlock_2.GetValue();
	public UMaterialInstanceDynamic                           MI_TacticoolTimer                                              => _offMI_TacticoolTimer.GetValue();
	public UMaterialInstanceDynamic                           MI_Strategic_Timer                                             => _offMI_Strategic_Timer.GetValue();
	public float                                              Tactical_Time_Remaining                                        => _offTactical_Time_Remaining.GetValue();
	public byte/*(bool)*/                                     Tactical_Locked                                                => _offTactical_Locked.GetValue();
	public float                                              Strategic_Time_Remaining                                       => _offStrategic_Time_Remaining.GetValue();
	public byte/*(bool)*/                                     Strategic_Locked                                               => _offStrategic_Locked.GetValue();
	public UW_CommandPrePlacement_C                           Pre_Placement_Widget                                           => _offPre_Placement_Widget.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public ASQPlayerState                                     Current_Commander                                              => _offCurrent_Commander.GetValue();
	public float                                              Additional_Distance                                            => _offAdditional_Distance.GetValue();
	public float                                              Turn_Speed                                                     => _offTurn_Speed.GetValue();
	#endregion


}


}