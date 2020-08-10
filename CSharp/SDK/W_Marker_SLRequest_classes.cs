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

// WidgetBlueprintGeneratedClass W_Marker_SLRequest.W_Marker_SLRequest_C
// 0x0058 (0x0328 - 0x02D0)
public class UW_Marker_SLRequest_C : USQMapWidgetMapMarkerSelectable
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02D0, false); // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offAnimation                                                  = new ExternalOffset<UWidgetAnimation>(0x02D8, true);          // 0x02D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offBorder_1                                                   = new ExternalOffset<UBorder>(0x02E0, true);                   // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_3                                                    = new ExternalOffset<UImage>(0x02E8, true);                    // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offScaleBox_1                                                 = new ExternalOffset<UScaleBox>(0x02F0, true);                 // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_1                                                  = new ExternalOffset<USizeBox>(0x02F8, true);                  // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Timer                                                   = new ExternalOffset<UTextBlock>(0x0300, true);                // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FTimerHandle>                      _offUpdate_Timer                                               = new ExternalOffset<FTimerHandle>(0x0308, false);             // 0x0308(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offFaded                                                      = new ExternalOffset<byte/*(bool)*/>(0x0310);                  // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<ABP_MapMarker_CommandMaster_C>     _offMapMarker_Command                                          = new ExternalOffset<ABP_MapMarker_CommandMaster_C>(0x0318, true); // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_SQPC                                                    = new ExternalOffset<ASQPlayerController>(0x0320, true);       // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   Animation                                                      => _offAnimation.GetValue();
	public UBorder                                            Border_1                                                       => _offBorder_1.GetValue();
	public UImage                                             Image_3                                                        => _offImage_3.GetValue();
	public UScaleBox                                          ScaleBox_1                                                     => _offScaleBox_1.GetValue();
	public USizeBox                                           SizeBox_1                                                      => _offSizeBox_1.GetValue();
	public UTextBlock                                         TB_Timer                                                       => _offTB_Timer.GetValue();
	public FTimerHandle                                       Update_Timer                                                   => _offUpdate_Timer.GetValue();
	public byte/*(bool)*/                                     Faded                                                          => _offFaded.GetValue();
	public ABP_MapMarker_CommandMaster_C                      MapMarker_Command                                              => _offMapMarker_Command.GetValue();
	public ASQPlayerController                                My_SQPC                                                        => _offMy_SQPC.GetValue();
	#endregion


}


}