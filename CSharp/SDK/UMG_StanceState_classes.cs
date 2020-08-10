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

// WidgetBlueprintGeneratedClass UMG_StanceState.UMG_StanceState_C
// 0x00A9 (0x0289 - 0x01E0)
public class UUMG_StanceState_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offBleedAnimationOff                                          = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetAnimation>                  _offBleedAnimation                                             = new ExternalOffset<UWidgetAnimation>(0x0240, true);          // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offCanvasPanel_1                                              = new ExternalOffset<UCanvasPanel>(0x0248, true);              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offLean                                                       = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offStance                                                     = new ExternalOffset<UImage>(0x0258, true);                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offStandIcon                                                  = new ExternalOffset<UTexture2D>(0x0260, true);                // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offProneIcon                                                  = new ExternalOffset<UTexture2D>(0x0268, true);                // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offCrouchIcon                                                 = new ExternalOffset<UTexture2D>(0x0270, true);                // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offLeanLeft                                                   = new ExternalOffset<UTexture2D>(0x0278, true);                // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offLeanRight                                                  = new ExternalOffset<UTexture2D>(0x0280, true);                // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offbBleedingAnimPlaying                                       = new ExternalOffset<byte/*(bool)*/>(0x0288);                  // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   BleedAnimationOff                                              => _offBleedAnimationOff.GetValue();
	public UWidgetAnimation                                   BleedAnimation                                                 => _offBleedAnimation.GetValue();
	public UCanvasPanel                                       CanvasPanel_1                                                  => _offCanvasPanel_1.GetValue();
	public UImage                                             Lean                                                           => _offLean.GetValue();
	public UImage                                             Stance                                                         => _offStance.GetValue();
	public UTexture2D                                         StandIcon                                                      => _offStandIcon.GetValue();
	public UTexture2D                                         ProneIcon                                                      => _offProneIcon.GetValue();
	public UTexture2D                                         CrouchIcon                                                     => _offCrouchIcon.GetValue();
	public UTexture2D                                         LeanLeft                                                       => _offLeanLeft.GetValue();
	public UTexture2D                                         LeanRight                                                      => _offLeanRight.GetValue();
	public byte/*(bool)*/                                     bBleedingAnimPlaying                                           => _offbBleedingAnimPlaying.GetValue();
	#endregion


}


}