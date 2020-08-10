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

// WidgetBlueprintGeneratedClass GlowingText_13.GlowingText_12_C
// 0x008A (0x026A - 0x01E0)
public class UGlowingText_12_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UTextBlock>                        _offCenterTextBlock                                            = new ExternalOffset<UTextBlock>(0x0238, true);                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offGlow                                                       = new ExternalOffset<UOverlay>(0x0240, true);                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offTextOverlay                                                = new ExternalOffset<UOverlay>(0x0248, true);                  // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offButtonText                                                 = new ExternalOffset<FText>(0x0250, false);                    // 0x0250(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowShadow                                                = new ExternalOffset<byte/*(bool)*/>(0x0268);                  // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbAutoInit                                                  = new ExternalOffset<byte/*(bool)*/>(0x0269);                  // 0x0269(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UTextBlock                                         CenterTextBlock                                                => _offCenterTextBlock.GetValue();
	public UOverlay                                           Glow                                                           => _offGlow.GetValue();
	public UOverlay                                           TextOverlay                                                    => _offTextOverlay.GetValue();
	public FText                                              ButtonText                                                     => _offButtonText.GetValue();
	public byte/*(bool)*/                                     bShowShadow                                                    => _offbShowShadow.GetValue();
	public byte/*(bool)*/                                     bAutoInit                                                      => _offbAutoInit.GetValue();
	#endregion


}


}