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

// WidgetBlueprintGeneratedClass W_WorldMarker.W_WorldMarker_C
// 0x00C8 (0x02A8 - 0x01E0)
public class UW_WorldMarker_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offOut                                                        = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetAnimation>                  _offIn                                                         = new ExternalOffset<UWidgetAnimation>(0x0240, true);          // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_6                                                    = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_1                                                  = new ExternalOffset<USizeBox>(0x0250, true);                  // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FVector2D>                         _offDesired_Screen_Location                                    = new ExternalOffset<FVector2D>(0x0258, false);                // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FVector>                           _offMarker_World_Location                                      = new ExternalOffset<FVector>(0x0260, false);                  // 0x0260(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offTexture                                                    = new ExternalOffset<UTexture2D>(0x0270, true);                // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offColor                                                      = new ExternalOffset<FLinearColor>(0x0278, false);             // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanelSlot>                  _offMy_Canvas_Slot                                             = new ExternalOffset<UCanvasPanelSlot>(0x0288, true);          // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offIs_In_Screen                                               = new ExternalOffset<byte/*(bool)*/>(0x0290);                  // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<ABP_GenericMapMarker_C>            _offMy_Marker                                                  = new ExternalOffset<ABP_GenericMapMarker_C>(0x0298, true);    // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offCanFade                                                    = new ExternalOffset<byte/*(bool)*/>(0x02A0);                  // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offDuration                                                   = new ExternalOffset<float>(0x02A4);                           // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   Out                                                            => _offOut.GetValue();
	public UWidgetAnimation                                   In                                                             => _offIn.GetValue();
	public UImage                                             Image_6                                                        => _offImage_6.GetValue();
	public USizeBox                                           SizeBox_1                                                      => _offSizeBox_1.GetValue();
	public FVector2D                                          Desired_Screen_Location                                        => _offDesired_Screen_Location.GetValue();
	public FVector                                            Marker_World_Location                                          => _offMarker_World_Location.GetValue();
	public UTexture2D                                         Texture                                                        => _offTexture.GetValue();
	public FLinearColor                                       Color                                                          => _offColor.GetValue();
	public UCanvasPanelSlot                                   My_Canvas_Slot                                                 => _offMy_Canvas_Slot.GetValue();
	public byte/*(bool)*/                                     Is_In_Screen                                                   => _offIs_In_Screen.GetValue();
	public ABP_GenericMapMarker_C                             My_Marker                                                      => _offMy_Marker.GetValue();
	public byte/*(bool)*/                                     CanFade                                                        => _offCanFade.GetValue();
	public float                                              Duration                                                       => _offDuration.GetValue();
	#endregion


}


}