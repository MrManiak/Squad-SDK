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

// WidgetBlueprintGeneratedClass TextRadialEntry_Tooltip.TextRadialEntry_Tooltip_C
// 0x0108 (0x02E8 - 0x01E0)
public class UTextRadialEntry_Tooltip_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UTextBlock>                        _offCostText                                                   = new ExternalOffset<UTextBlock>(0x0238, true);                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offdetails                                                    = new ExternalOffset<UTextBlock>(0x0240, true);                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offHeaderText                                                 = new ExternalOffset<UTextBlock>(0x0248, true);                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offHorizontalBox_1                                            = new ExternalOffset<UHorizontalBox>(0x0250, true);            // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_3                                                    = new ExternalOffset<UImage>(0x0258, true);                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offDetails_Text                                               = new ExternalOffset<FText>(0x0260, false);                    // 0x0260(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<FText>                             _offHeader_Text                                                = new ExternalOffset<FText>(0x0278, false);                    // 0x0278(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<int>                               _offCost                                                       = new ExternalOffset<int>(0x0290);                             // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offCost_Text                                                  = new ExternalOffset<FText>(0x0298, false);                    // 0x0298(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<FName>                             _offKey0                                                       = new ExternalOffset<FName>(0x02B0, false);                    // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FName>                             _offKey1                                                       = new ExternalOffset<FName>(0x02B8, false);                    // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FName>                             _offKey2                                                       = new ExternalOffset<FName>(0x02C0, false);                    // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offMissingTextBinding                                         = new ExternalOffset<FText>(0x02C8, false);                    // 0x02C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<UTexture2D>                        _offCostIconImage                                              = new ExternalOffset<UTexture2D>(0x02E0, true);                // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UTextBlock                                         CostText                                                       => _offCostText.GetValue();
	public UTextBlock                                         details                                                        => _offdetails.GetValue();
	public UTextBlock                                         HeaderText                                                     => _offHeaderText.GetValue();
	public UHorizontalBox                                     HorizontalBox_1                                                => _offHorizontalBox_1.GetValue();
	public UImage                                             Image_3                                                        => _offImage_3.GetValue();
	public FText                                              Details_Text                                                   => _offDetails_Text.GetValue();
	public FText                                              Header_Text                                                    => _offHeader_Text.GetValue();
	public int                                                Cost                                                           => _offCost.GetValue();
	public FText                                              Cost_Text                                                      => _offCost_Text.GetValue();
	public FName                                              Key0                                                           => _offKey0.GetValue();
	public FName                                              Key1                                                           => _offKey1.GetValue();
	public FName                                              Key2                                                           => _offKey2.GetValue();
	public FText                                              MissingTextBinding                                             => _offMissingTextBinding.GetValue();
	public UTexture2D                                         CostIconImage                                                  => _offCostIconImage.GetValue();
	#endregion


}


}