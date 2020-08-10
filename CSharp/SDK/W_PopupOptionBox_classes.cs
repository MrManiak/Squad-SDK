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

// WidgetBlueprintGeneratedClass W_PopupOptionBox.W_PopupOptionBox_C
// 0x00A0 (0x0280 - 0x01E0)
public class UW_PopupOptionBox_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offHoverCheckArea                                             = new ExternalOffset<UBorder>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offLine                                                       = new ExternalOffset<UImage>(0x0240, true);                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offVerticalBox_Buttons                                        = new ExternalOffset<UVerticalBox>(0x0248, true);              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offwas_hovered                                                = new ExternalOffset<byte/*(bool)*/>(0x0250);                  // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FScriptMulticastDelegate>          _offOption_Clicked                                             = new ExternalOffset<FScriptMulticastDelegate>(0x0258, false); // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<float>                             _offLifetime                                                   = new ExternalOffset<float>(0x0268);                           // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<FS_PopupButtonSetup>>       _offOptions                                                    = new ExternalOffset<TArray<FS_PopupButtonSetup>>(0x0270, false); // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            HoverCheckArea                                                 => _offHoverCheckArea.GetValue();
	public UImage                                             Line                                                           => _offLine.GetValue();
	public UVerticalBox                                       VerticalBox_Buttons                                            => _offVerticalBox_Buttons.GetValue();
	public byte/*(bool)*/                                     was_hovered                                                    => _offwas_hovered.GetValue();
	public FScriptMulticastDelegate                           Option_Clicked                                                 => _offOption_Clicked.GetValue();
	public float                                              Lifetime                                                       => _offLifetime.GetValue();
	public TArray<FS_PopupButtonSetup>                        Options                                                        => _offOptions.GetValue();
	#endregion


}


}