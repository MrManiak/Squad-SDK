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

// WidgetBlueprintGeneratedClass W_ParseKeybindItem.W_ParseKeybindItem_C
// 0x0118 (0x02F8 - 0x01E0)
public class UW_ParseKeybindItem_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorder_2                                                   = new ExternalOffset<UBorder>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offKeybindText                                                = new ExternalOffset<UTextBlock>(0x0240, true);                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offPaddingBorder                                              = new ExternalOffset<UBorder>(0x0248, true);                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_2                                                  = new ExternalOffset<USizeBox>(0x0250, true);                  // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offKeyBind                                                    = new ExternalOffset<FText>(0x0258, false);                    // 0x0258(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	private ExternalOffset<int>                               _offFont_Size                                                  = new ExternalOffset<int>(0x0270);                             // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FSlateFontInfo>                    _offNew_Font                                                   = new ExternalOffset<FSlateFontInfo>(0x0278, false);           // 0x0278(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offBG_Color                                                   = new ExternalOffset<FLinearColor>(0x02C8, false);             // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FMargin>                           _offText_Padding                                               = new ExternalOffset<FMargin>(0x02D8, false);                  // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<FMargin>                           _offInternal_Padding                                           = new ExternalOffset<FMargin>(0x02E8, false);                  // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            Border_2                                                       => _offBorder_2.GetValue();
	public UTextBlock                                         KeybindText                                                    => _offKeybindText.GetValue();
	public UBorder                                            PaddingBorder                                                  => _offPaddingBorder.GetValue();
	public USizeBox                                           SizeBox_2                                                      => _offSizeBox_2.GetValue();
	public FText                                              KeyBind                                                        => _offKeyBind.GetValue();
	public int                                                Font_Size                                                      => _offFont_Size.GetValue();
	public FSlateFontInfo                                     New_Font                                                       => _offNew_Font.GetValue();
	public FLinearColor                                       BG_Color                                                       => _offBG_Color.GetValue();
	public FMargin                                            Text_Padding                                                   => _offText_Padding.GetValue();
	public FMargin                                            Internal_Padding                                               => _offInternal_Padding.GetValue();
	#endregion


}


}