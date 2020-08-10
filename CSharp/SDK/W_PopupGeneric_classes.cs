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

// WidgetBlueprintGeneratedClass W_PopupGeneric.W_PopupGeneric_C
// 0x00D0 (0x02B0 - 0x01E0)
public class UW_PopupGeneric_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UButton>                           _offButton_Close                                               = new ExternalOffset<UButton>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offDragArea                                                   = new ExternalOffset<UHorizontalBox>(0x0240, true);            // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offGenericWidgetCanvas                                        = new ExternalOffset<UCanvasPanel>(0x0248, true);              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offHoverCheckArea                                             = new ExternalOffset<UBorder>(0x0250, true);                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0258, true);                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offwas_hovered                                                = new ExternalOffset<byte/*(bool)*/>(0x0260);                  // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UClass>                            _offPopup_Widget_Class                                         = new ExternalOffset<UClass>(0x0268, true);                    // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offIgnore_Hover                                               = new ExternalOffset<byte/*(bool)*/>(0x0270);                  // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	private ExternalOffset<byte/*(bool)*/>                    _offCan_Drag                                                   = new ExternalOffset<byte/*(bool)*/>(0x0271);                  // 0x0271(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	private ExternalOffset<byte/*(bool)*/>                    _offDragging                                                   = new ExternalOffset<byte/*(bool)*/>(0x0272);                  // 0x0272(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FVector2D>                         _offDrag_Offset                                                = new ExternalOffset<FVector2D>(0x0274, false);                // 0x0274(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FVector2D>                         _offWidget_Screen_Pos                                          = new ExternalOffset<FVector2D>(0x027C, false);                // 0x027C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offRemoved                                                    = new ExternalOffset<FScriptMulticastDelegate>(0x0288, false); // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FVector2D>                         _offAlignment                                                  = new ExternalOffset<FVector2D>(0x0298, false);                // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offOffset_Size                                                = new ExternalOffset<float>(0x02A0);                           // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<UUserWidget>                       _offSpawned_Widget                                             = new ExternalOffset<UUserWidget>(0x02A8, true);               // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UButton                                            Button_Close                                                   => _offButton_Close.GetValue();
	public UHorizontalBox                                     DragArea                                                       => _offDragArea.GetValue();
	public UCanvasPanel                                       GenericWidgetCanvas                                            => _offGenericWidgetCanvas.GetValue();
	public UBorder                                            HoverCheckArea                                                 => _offHoverCheckArea.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public byte/*(bool)*/                                     was_hovered                                                    => _offwas_hovered.GetValue();
	public UClass                                             Popup_Widget_Class                                             => _offPopup_Widget_Class.GetValue();
	public byte/*(bool)*/                                     Ignore_Hover                                                   => _offIgnore_Hover.GetValue();
	public byte/*(bool)*/                                     Can_Drag                                                       => _offCan_Drag.GetValue();
	public byte/*(bool)*/                                     Dragging                                                       => _offDragging.GetValue();
	public FVector2D                                          Drag_Offset                                                    => _offDrag_Offset.GetValue();
	public FVector2D                                          Widget_Screen_Pos                                              => _offWidget_Screen_Pos.GetValue();
	public FScriptMulticastDelegate                           Removed                                                        => _offRemoved.GetValue();
	public FVector2D                                          Alignment                                                      => _offAlignment.GetValue();
	public float                                              Offset_Size                                                    => _offOffset_Size.GetValue();
	public UUserWidget                                        Spawned_Widget                                                 => _offSpawned_Widget.GetValue();
	#endregion


}


}