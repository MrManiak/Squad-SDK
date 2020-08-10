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

// WidgetBlueprintGeneratedClass RadialCenterText.RadialCenterText_C
// 0x00E0 (0x03D8 - 0x02F8)
public class URadialCenterText_C : USQRadialButton
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02F8, false); // 0x02F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offBackground                                                 = new ExternalOffset<UImage>(0x0300, true);                    // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBottomDivider                                              = new ExternalOffset<UImage>(0x0308, true);                    // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPText                                                     = new ExternalOffset<UTextBlock>(0x0310, true);                // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offCanvasPanel_1                                              = new ExternalOffset<UCanvasPanel>(0x0318, true);              // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offClarificationText                                          = new ExternalOffset<UTextBlock>(0x0320, true);                // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offConstructionCost                                           = new ExternalOffset<UTextBlock>(0x0328, true);                // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offHammerImage                                                = new ExternalOffset<UImage>(0x0330, true);                    // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offHexagonImage                                               = new ExternalOffset<UImage>(0x0338, true);                    // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offTopDivider                                                 = new ExternalOffset<UImage>(0x0340, true);                    // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offWarningImage                                               = new ExternalOffset<UImage>(0x0348, true);                    // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offWarningText                                                = new ExternalOffset<UTextBlock>(0x0350, true);                // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offText                                                       = new ExternalOffset<FText>(0x0358, false);                    // 0x0358(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<FText>                             _offCachedRearmCostText                                        = new ExternalOffset<FText>(0x0370, false);                    // 0x0370(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<UBaseRadialMenu_C>                 _offOwnerRadialMenu                                            = new ExternalOffset<UBaseRadialMenu_C>(0x0388, true);         // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBP_RadialItemModel_C>             _offRelatedActionModel                                         = new ExternalOffset<UBP_RadialItemModel_C>(0x0390, true);     // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offUnavailableHammer                                          = new ExternalOffset<FLinearColor>(0x0398, false);             // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offUnavailableHexagon                                         = new ExternalOffset<FLinearColor>(0x03A8, false);             // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offAvailableHexagon                                           = new ExternalOffset<FLinearColor>(0x03B8, false);             // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offAvailableHammer                                            = new ExternalOffset<FLinearColor>(0x03C8, false);             // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             Background                                                     => _offBackground.GetValue();
	public UImage                                             BottomDivider                                                  => _offBottomDivider.GetValue();
	public UTextBlock                                         BPText                                                         => _offBPText.GetValue();
	public UCanvasPanel                                       CanvasPanel_1                                                  => _offCanvasPanel_1.GetValue();
	public UTextBlock                                         ClarificationText                                              => _offClarificationText.GetValue();
	public UTextBlock                                         ConstructionCost                                               => _offConstructionCost.GetValue();
	public UImage                                             HammerImage                                                    => _offHammerImage.GetValue();
	public UImage                                             HexagonImage                                                   => _offHexagonImage.GetValue();
	public UImage                                             TopDivider                                                     => _offTopDivider.GetValue();
	public UImage                                             WarningImage                                                   => _offWarningImage.GetValue();
	public UTextBlock                                         WarningText                                                    => _offWarningText.GetValue();
	public FText                                              Text                                                           => _offText.GetValue();
	public FText                                              CachedRearmCostText                                            => _offCachedRearmCostText.GetValue();
	public UBaseRadialMenu_C                                  OwnerRadialMenu                                                => _offOwnerRadialMenu.GetValue();
	public UBP_RadialItemModel_C                              RelatedActionModel                                             => _offRelatedActionModel.GetValue();
	public FLinearColor                                       UnavailableHammer                                              => _offUnavailableHammer.GetValue();
	public FLinearColor                                       UnavailableHexagon                                             => _offUnavailableHexagon.GetValue();
	public FLinearColor                                       AvailableHexagon                                               => _offAvailableHexagon.GetValue();
	public FLinearColor                                       AvailableHammer                                                => _offAvailableHammer.GetValue();
	#endregion


}


}