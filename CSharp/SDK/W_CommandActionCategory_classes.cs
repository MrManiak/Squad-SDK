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

// WidgetBlueprintGeneratedClass W_CommandActionCategory.W_CommandActionCategory_C
// 0x00F1 (0x02D1 - 0x01E0)
public class UW_CommandActionCategory_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorder_Category                                            = new ExternalOffset<UBorder>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCategoryIcon                                               = new ExternalOffset<UImage>(0x0240, true);                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCategoryTimerImage                                         = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offSpacerImage                                                = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Category                                                = new ExternalOffset<UTextBlock>(0x0258, true);                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_CategoryTime                                            = new ExternalOffset<UTextBlock>(0x0260, true);                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_1                                                = new ExternalOffset<UTextBlock>(0x0268, true);                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offVbox                                                       = new ExternalOffset<UVerticalBox>(0x0270, true);              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMI_Timer                                                   = new ExternalOffset<UMaterialInstanceDynamic>(0x0278, true);  // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FCommanderCategory>                _offCategory                                                   = new ExternalOffset<FCommanderCategory>(0x0280, false);       // 0x0280(0x0020) (Edit, BlueprintVisible, ExposeOnSpawn)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x02A0, true);       // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//	private ExternalOffset<char>                              _offID                                                         = new ExternalOffset<char>(0x02A8, false);                     // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offForce_Allowed                                              = new ExternalOffset<byte/*(bool)*/>(0x02A9);                  // 0x02A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<TArray<UW_CommandActionItem_C>>    _offActions                                                    = new ExternalOffset<TArray<UW_CommandActionItem_C>>(0x02B0, false); // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	private ExternalOffset<byte/*(bool)*/>                    _offUse_Pre_Placement                                          = new ExternalOffset<byte/*(bool)*/>(0x02C0);                  // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	private ExternalOffset<UClass>                            _offCommand_Action_Item                                        = new ExternalOffset<UClass>(0x02C8, true);                    // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offCategory_Enabled                                           = new ExternalOffset<byte/*(bool)*/>(0x02D0);                  // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            Border_Category                                                => _offBorder_Category.GetValue();
	public UImage                                             CategoryIcon                                                   => _offCategoryIcon.GetValue();
	public UImage                                             CategoryTimerImage                                             => _offCategoryTimerImage.GetValue();
	public UImage                                             SpacerImage                                                    => _offSpacerImage.GetValue();
	public UTextBlock                                         TB_Category                                                    => _offTB_Category.GetValue();
	public UTextBlock                                         TB_CategoryTime                                                => _offTB_CategoryTime.GetValue();
	public UTextBlock                                         TextBlock_1                                                    => _offTextBlock_1.GetValue();
	public UVerticalBox                                       Vbox                                                           => _offVbox.GetValue();
	public UMaterialInstanceDynamic                           MI_Timer                                                       => _offMI_Timer.GetValue();
	public FCommanderCategory                                 Category                                                       => _offCategory.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public byte/*(bool)*/                                     Force_Allowed                                                  => _offForce_Allowed.GetValue();
	public TArray<UW_CommandActionItem_C>                     Actions                                                        => _offActions.GetValue();
	public byte/*(bool)*/                                     Use_Pre_Placement                                              => _offUse_Pre_Placement.GetValue();
	public UClass                                             Command_Action_Item                                            => _offCommand_Action_Item.GetValue();
	public byte/*(bool)*/                                     Category_Enabled                                               => _offCategory_Enabled.GetValue();
	#endregion


}


}