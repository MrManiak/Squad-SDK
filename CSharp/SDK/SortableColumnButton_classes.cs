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

// WidgetBlueprintGeneratedClass SortableColumnButton.SortableColumnButton_C
// 0x0182 (0x0362 - 0x01E0)
public class USortableColumnButton_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UButton>                           _offButton                                                     = new ExternalOffset<UButton>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIcon                                                       = new ExternalOffset<UImage>(0x0240, true);                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offIconScaleBox                                               = new ExternalOffset<UScaleBox>(0x0248, true);                 // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offSortingArrow                                               = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Main                                                    = new ExternalOffset<UTextBlock>(0x0258, true);                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offVerticalBox_Main                                           = new ExternalOffset<UVerticalBox>(0x0260, true);              // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offButtonText                                                 = new ExternalOffset<FText>(0x0268, false);                    // 0x0268(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<FLinearColor>                      _offRegularColor                                               = new ExternalOffset<FLinearColor>(0x0280, false);             // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnClicked                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0290, false); // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FLinearColor>                      _offSelectedColor                                              = new ExternalOffset<FLinearColor>(0x02A0, false);             // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offHoveredColor                                               = new ExternalOffset<FLinearColor>(0x02B0, false);             // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offSelectedHoveredColor                                       = new ExternalOffset<FLinearColor>(0x02C0, false);             // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offbHovered                                                   = new ExternalOffset<byte/*(bool)*/>(0x02D0);                  // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbSelected                                                  = new ExternalOffset<byte/*(bool)*/>(0x02D1);                  // 0x02D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsToggle                                                  = new ExternalOffset<byte/*(bool)*/>(0x02D2);                  // 0x02D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbScaleGlowByResolution                                     = new ExternalOffset<byte/*(bool)*/>(0x02D3);                  // 0x02D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<UClass>                            _offTextSampleClass                                            = new ExternalOffset<UClass>(0x02D8, true);                    // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnHover                                                    = new ExternalOffset<FScriptMulticastDelegate>(0x02E0, false); // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowShadow                                                = new ExternalOffset<byte/*(bool)*/>(0x02F0);                  // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbConstructed                                               = new ExternalOffset<byte/*(bool)*/>(0x02F1);                  // 0x02F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<ESQSortStates>                     _offSortState                                                  = new ExternalOffset<ESQSortStates>(0x02F2, false);            // 0x02F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offText_Size                                                  = new ExternalOffset<int>(0x02F4);                             // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offUse_Sort_Arrow                                             = new ExternalOffset<byte/*(bool)*/>(0x02F8);                  // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<FMargin>                           _offText_Padding_Amount                                        = new ExternalOffset<FMargin>(0x02FC, false);                  // 0x02FC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offUse_Icon                                                   = new ExternalOffset<byte/*(bool)*/>(0x030C);                  // 0x030C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<FSlateColor>                       _offIcon_Color                                                 = new ExternalOffset<FSlateColor>(0x0310, false);              // 0x0310(0x0028) (Edit, BlueprintVisible)
	private ExternalOffset<float>                             _offIcon_Size                                                  = new ExternalOffset<float>(0x0338);                           // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offIcon_Image                                                 = new ExternalOffset<UTexture2D>(0x0340, true);                // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<EHorizontalAlignment>> _offFill_Style                                                 = new ExternalOffset<TEnumAsByte<EHorizontalAlignment>>(0x0348, false); // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FMargin>                           _offButton_Padding                                             = new ExternalOffset<FMargin>(0x034C, false);                  // 0x034C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offArrowSize                                                  = new ExternalOffset<float>(0x035C);                           // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ESQSortStates>                     _offFirst_Click_Unsorted                                       = new ExternalOffset<ESQSortStates>(0x0360, false);            // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<E_SortType>>           _offSort_Type                                                  = new ExternalOffset<TEnumAsByte<E_SortType>>(0x0361, false);  // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UButton                                            Button                                                         => _offButton.GetValue();
	public UImage                                             Icon                                                           => _offIcon.GetValue();
	public UScaleBox                                          IconScaleBox                                                   => _offIconScaleBox.GetValue();
	public UImage                                             SortingArrow                                                   => _offSortingArrow.GetValue();
	public UTextBlock                                         TB_Main                                                        => _offTB_Main.GetValue();
	public UVerticalBox                                       VerticalBox_Main                                               => _offVerticalBox_Main.GetValue();
	public FText                                              ButtonText                                                     => _offButtonText.GetValue();
	public FLinearColor                                       RegularColor                                                   => _offRegularColor.GetValue();
	public FScriptMulticastDelegate                           OnClicked                                                      => _offOnClicked.GetValue();
	public FLinearColor                                       SelectedColor                                                  => _offSelectedColor.GetValue();
	public FLinearColor                                       HoveredColor                                                   => _offHoveredColor.GetValue();
	public FLinearColor                                       SelectedHoveredColor                                           => _offSelectedHoveredColor.GetValue();
	public byte/*(bool)*/                                     bHovered                                                       => _offbHovered.GetValue();
	public byte/*(bool)*/                                     bSelected                                                      => _offbSelected.GetValue();
	public byte/*(bool)*/                                     bIsToggle                                                      => _offbIsToggle.GetValue();
	public byte/*(bool)*/                                     bScaleGlowByResolution                                         => _offbScaleGlowByResolution.GetValue();
	public UClass                                             TextSampleClass                                                => _offTextSampleClass.GetValue();
	public FScriptMulticastDelegate                           OnHover                                                        => _offOnHover.GetValue();
	public byte/*(bool)*/                                     bShowShadow                                                    => _offbShowShadow.GetValue();
	public byte/*(bool)*/                                     bConstructed                                                   => _offbConstructed.GetValue();
	public ESQSortStates                                      SortState                                                      => _offSortState.GetValue();
	public int                                                Text_Size                                                      => _offText_Size.GetValue();
	public byte/*(bool)*/                                     Use_Sort_Arrow                                                 => _offUse_Sort_Arrow.GetValue();
	public FMargin                                            Text_Padding_Amount                                            => _offText_Padding_Amount.GetValue();
	public byte/*(bool)*/                                     Use_Icon                                                       => _offUse_Icon.GetValue();
	public FSlateColor                                        Icon_Color                                                     => _offIcon_Color.GetValue();
	public float                                              Icon_Size                                                      => _offIcon_Size.GetValue();
	public UTexture2D                                         Icon_Image                                                     => _offIcon_Image.GetValue();
	public TEnumAsByte<EHorizontalAlignment>                  Fill_Style                                                     => _offFill_Style.GetValue();
	public FMargin                                            Button_Padding                                                 => _offButton_Padding.GetValue();
	public float                                              ArrowSize                                                      => _offArrowSize.GetValue();
	public ESQSortStates                                      First_Click_Unsorted                                           => _offFirst_Click_Unsorted.GetValue();
	public TEnumAsByte<E_SortType>                            Sort_Type                                                      => _offSort_Type.GetValue();
	#endregion


}


}