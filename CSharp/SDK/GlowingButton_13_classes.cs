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

// WidgetBlueprintGeneratedClass GlowingButton_13.GlowingButton_12_C
// 0x00E9 (0x02C9 - 0x01E0)
public class UGlowingButton_12_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UButton>                           _offButton                                                     = new ExternalOffset<UButton>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UGlowingText_12_C>                 _offGlowingText_12_C_1                                         = new ExternalOffset<UGlowingText_12_C>(0x0240, true);         // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offButtonText                                                 = new ExternalOffset<FText>(0x0248, false);                    // 0x0248(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<FLinearColor>                      _offRegularColor                                               = new ExternalOffset<FLinearColor>(0x0260, false);             // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnClicked                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0270, false); // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FLinearColor>                      _offSelectedColor                                              = new ExternalOffset<FLinearColor>(0x0280, false);             // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offHoveredColor                                               = new ExternalOffset<FLinearColor>(0x0290, false);             // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offSelectedHoveredColor                                       = new ExternalOffset<FLinearColor>(0x02A0, false);             // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offbHovered                                                   = new ExternalOffset<byte/*(bool)*/>(0x02B0);                  // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbSelected                                                  = new ExternalOffset<byte/*(bool)*/>(0x02B1);                  // 0x02B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsToggle                                                  = new ExternalOffset<byte/*(bool)*/>(0x02B2);                  // 0x02B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnHover                                                    = new ExternalOffset<FScriptMulticastDelegate>(0x02B8, false); // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowShadow                                                = new ExternalOffset<byte/*(bool)*/>(0x02C8);                  // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UButton                                            Button                                                         => _offButton.GetValue();
	public UGlowingText_12_C                                  GlowingText_12_C_1                                             => _offGlowingText_12_C_1.GetValue();
	public FText                                              ButtonText                                                     => _offButtonText.GetValue();
	public FLinearColor                                       RegularColor                                                   => _offRegularColor.GetValue();
	public FScriptMulticastDelegate                           OnClicked                                                      => _offOnClicked.GetValue();
	public FLinearColor                                       SelectedColor                                                  => _offSelectedColor.GetValue();
	public FLinearColor                                       HoveredColor                                                   => _offHoveredColor.GetValue();
	public FLinearColor                                       SelectedHoveredColor                                           => _offSelectedHoveredColor.GetValue();
	public byte/*(bool)*/                                     bHovered                                                       => _offbHovered.GetValue();
	public byte/*(bool)*/                                     bSelected                                                      => _offbSelected.GetValue();
	public byte/*(bool)*/                                     bIsToggle                                                      => _offbIsToggle.GetValue();
	public FScriptMulticastDelegate                           OnHover                                                        => _offOnHover.GetValue();
	public byte/*(bool)*/                                     bShowShadow                                                    => _offbShowShadow.GetValue();
	#endregion


}


}