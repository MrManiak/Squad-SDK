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

// WidgetBlueprintGeneratedClass W_SlideComponent.W_SlideComponent_C
// 0x00EA (0x02CA - 0x01E0)
public class UW_SlideComponent_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorder_1                                                   = new ExternalOffset<UBorder>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBackgroundBlur>                   _offContentBG                                                  = new ExternalOffset<UBackgroundBlur>(0x0240, true);           // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIcon                                                       = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offSlideButton                                                = new ExternalOffset<UButton>(0x0250, true);                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Name                                                    = new ExternalOffset<UTextBlock>(0x0258, true);                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ABP_PlayerController_C>            _offPC                                                         = new ExternalOffset<ABP_PlayerController_C>(0x0260, true);    // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offWidget_Class                                               = new ExternalOffset<UClass>(0x0268, true);                    // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offOpen                                                       = new ExternalOffset<byte/*(bool)*/>(0x0270);                  // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UUserWidget>                       _offChild_Widget                                               = new ExternalOffset<UUserWidget>(0x0278, true);               // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offThumbnail                                                  = new ExternalOffset<UTexture2D>(0x0280, true);                // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offRotateThumbnail                                            = new ExternalOffset<byte/*(bool)*/>(0x0288);                  // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<FScriptMulticastDelegate>          _offSlide_Opened                                               = new ExternalOffset<FScriptMulticastDelegate>(0x0290, false); // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FScriptMulticastDelegate>          _offSlide_Closed                                               = new ExternalOffset<FScriptMulticastDelegate>(0x02A0, false); // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FText>                             _offName                                                       = new ExternalOffset<FText>(0x02B0, false);                    // 0x02B0(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<TEnumAsByte<EVerticalAlignment>>   _offButton_Alignment                                           = new ExternalOffset<TEnumAsByte<EVerticalAlignment>>(0x02C8, false); // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offStart_Open                                                 = new ExternalOffset<byte/*(bool)*/>(0x02C9);                  // 0x02C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            Border_1                                                       => _offBorder_1.GetValue();
	public UBackgroundBlur                                    ContentBG                                                      => _offContentBG.GetValue();
	public UImage                                             Icon                                                           => _offIcon.GetValue();
	public UButton                                            SlideButton                                                    => _offSlideButton.GetValue();
	public UTextBlock                                         TB_Name                                                        => _offTB_Name.GetValue();
	public ABP_PlayerController_C                             PC                                                             => _offPC.GetValue();
	public UClass                                             Widget_Class                                                   => _offWidget_Class.GetValue();
	public byte/*(bool)*/                                     Open                                                           => _offOpen.GetValue();
	public UUserWidget                                        Child_Widget                                                   => _offChild_Widget.GetValue();
	public UTexture2D                                         Thumbnail                                                      => _offThumbnail.GetValue();
	public byte/*(bool)*/                                     RotateThumbnail                                                => _offRotateThumbnail.GetValue();
	public FScriptMulticastDelegate                           Slide_Opened                                                   => _offSlide_Opened.GetValue();
	public FScriptMulticastDelegate                           Slide_Closed                                                   => _offSlide_Closed.GetValue();
	public FText                                              Name                                                           => _offName.GetValue();
	public TEnumAsByte<EVerticalAlignment>                    Button_Alignment                                               => _offButton_Alignment.GetValue();
	public byte/*(bool)*/                                     Start_Open                                                     => _offStart_Open.GetValue();
	#endregion


}


}