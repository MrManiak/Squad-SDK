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

// WidgetBlueprintGeneratedClass UMG_AmmoBagCounter.UMG_AmmoBagCounter_C
// 0x0088 (0x0268 - 0x01E0)
public class UUMG_AmmoBagCounter_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offFade                                                       = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offH_Parent                                                   = new ExternalOffset<UOverlay>(0x0240, true);                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_AmmoAmount                                              = new ExternalOffset<UTextBlock>(0x0250, true);                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQDeployableAmmoBag>              _offammobag                                                    = new ExternalOffset<ASQDeployableAmmoBag>(0x0258, true);      // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBaseRadialMenu_C>                 _offBaseRadialMenu                                             = new ExternalOffset<UBaseRadialMenu_C>(0x0260, true);         // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   Fade                                                           => _offFade.GetValue();
	public UOverlay                                           H_Parent                                                       => _offH_Parent.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UTextBlock                                         TB_AmmoAmount                                                  => _offTB_AmmoAmount.GetValue();
	public ASQDeployableAmmoBag                               ammobag                                                        => _offammobag.GetValue();
	public UBaseRadialMenu_C                                  BaseRadialMenu                                                 => _offBaseRadialMenu.GetValue();
	#endregion


}


}