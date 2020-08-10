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

// WidgetBlueprintGeneratedClass W_Legend_Tickets.W_Legend_Tickets_C
// 0x0130 (0x0310 - 0x01E0)
public class UW_Legend_Tickets_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UHorizontalBox>                    _offDestructionloss                                            = new ExternalOffset<UHorizontalBox>(0x0238, true);            // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offFlagCapture                                                = new ExternalOffset<UTextBlock>(0x0240, true);                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offFlagCaptured                                               = new ExternalOffset<UHorizontalBox>(0x0248, true);            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offFlagLoss                                                   = new ExternalOffset<UHorizontalBox>(0x0250, true);            // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offFlagLost                                                   = new ExternalOffset<UTextBlock>(0x0258, true);                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offFOBBox                                                     = new ExternalOffset<UHorizontalBox>(0x0260, true);            // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offHorizontalBox_1                                            = new ExternalOffset<UHorizontalBox>(0x0268, true);            // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offHorizontalBox_2                                            = new ExternalOffset<UHorizontalBox>(0x0270, true);            // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offHorizontalBox_4                                            = new ExternalOffset<UHorizontalBox>(0x0278, true);            // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offHorizontalBox_5                                            = new ExternalOffset<UHorizontalBox>(0x0280, true);            // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offHorizontalBox_6                                            = new ExternalOffset<UHorizontalBox>(0x0288, true);            // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offHorizontalBox_8                                            = new ExternalOffset<UHorizontalBox>(0x0290, true);            // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offHorizontalBox_11                                           = new ExternalOffset<UHorizontalBox>(0x0298, true);            // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offHorizontalBox_13                                           = new ExternalOffset<UHorizontalBox>(0x02A0, true);            // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_16                                                   = new ExternalOffset<UImage>(0x02A8, true);                    // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_17                                                   = new ExternalOffset<UImage>(0x02B0, true);                    // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_24                                                   = new ExternalOffset<UImage>(0x02B8, true);                    // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_25                                                   = new ExternalOffset<UImage>(0x02C0, true);                    // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_26                                                   = new ExternalOffset<UImage>(0x02C8, true);                    // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_27                                                   = new ExternalOffset<UImage>(0x02D0, true);                    // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offObjectiveDestroyed                                         = new ExternalOffset<UHorizontalBox>(0x02D8, true);            // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_1                                                = new ExternalOffset<UTextBlock>(0x02E0, true);                // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_10                                               = new ExternalOffset<UTextBlock>(0x02E8, true);                // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWidgetSwitcher_1                                           = new ExternalOffset<UWidgetSwitcher>(0x02F0, true);           // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWidgetSwitcher_2                                           = new ExternalOffset<UWidgetSwitcher>(0x02F8, true);           // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQAASGraph>                       _offGraph                                                      = new ExternalOffset<ASQAASGraph>(0x0300, true);               // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQObjective_Destroyable>          _offDestruction_Objective                                      = new ExternalOffset<ASQObjective_Destroyable>(0x0308, true);  // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UHorizontalBox                                     Destructionloss                                                => _offDestructionloss.GetValue();
	public UTextBlock                                         FlagCapture                                                    => _offFlagCapture.GetValue();
	public UHorizontalBox                                     FlagCaptured                                                   => _offFlagCaptured.GetValue();
	public UHorizontalBox                                     FlagLoss                                                       => _offFlagLoss.GetValue();
	public UTextBlock                                         FlagLost                                                       => _offFlagLost.GetValue();
	public UHorizontalBox                                     FOBBox                                                         => _offFOBBox.GetValue();
	public UHorizontalBox                                     HorizontalBox_1                                                => _offHorizontalBox_1.GetValue();
	public UHorizontalBox                                     HorizontalBox_2                                                => _offHorizontalBox_2.GetValue();
	public UHorizontalBox                                     HorizontalBox_4                                                => _offHorizontalBox_4.GetValue();
	public UHorizontalBox                                     HorizontalBox_5                                                => _offHorizontalBox_5.GetValue();
	public UHorizontalBox                                     HorizontalBox_6                                                => _offHorizontalBox_6.GetValue();
	public UHorizontalBox                                     HorizontalBox_8                                                => _offHorizontalBox_8.GetValue();
	public UHorizontalBox                                     HorizontalBox_11                                               => _offHorizontalBox_11.GetValue();
	public UHorizontalBox                                     HorizontalBox_13                                               => _offHorizontalBox_13.GetValue();
	public UImage                                             Image_16                                                       => _offImage_16.GetValue();
	public UImage                                             Image_17                                                       => _offImage_17.GetValue();
	public UImage                                             Image_24                                                       => _offImage_24.GetValue();
	public UImage                                             Image_25                                                       => _offImage_25.GetValue();
	public UImage                                             Image_26                                                       => _offImage_26.GetValue();
	public UImage                                             Image_27                                                       => _offImage_27.GetValue();
	public UHorizontalBox                                     ObjectiveDestroyed                                             => _offObjectiveDestroyed.GetValue();
	public UTextBlock                                         TextBlock_1                                                    => _offTextBlock_1.GetValue();
	public UTextBlock                                         TextBlock_10                                                   => _offTextBlock_10.GetValue();
	public UWidgetSwitcher                                    WidgetSwitcher_1                                               => _offWidgetSwitcher_1.GetValue();
	public UWidgetSwitcher                                    WidgetSwitcher_2                                               => _offWidgetSwitcher_2.GetValue();
	public ASQAASGraph                                        Graph                                                          => _offGraph.GetValue();
	public ASQObjective_Destroyable                           Destruction_Objective                                          => _offDestruction_Objective.GetValue();
	#endregion


}


}