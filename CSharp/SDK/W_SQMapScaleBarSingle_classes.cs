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

// WidgetBlueprintGeneratedClass W_SQMapScaleBarSingle.W_SQMapScaleBarSingle_C
// 0x0098 (0x0278 - 0x01E0)
public class UW_SQMapScaleBarSingle_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offLeftEdge                                                   = new ExternalOffset<UImage>(0x0238, true);                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offLineLength                                                 = new ExternalOffset<UImage>(0x0240, true);                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offMetersText                                                 = new ExternalOffset<UTextBlock>(0x0248, true);                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offRightEdge                                                  = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offScaleInMeters                                              = new ExternalOffset<float>(0x0258);                           // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offZoomLayer                                                  = new ExternalOffset<USizeBox>(0x0260, true);                  // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offInitialZoom                                                = new ExternalOffset<float>(0x0268);                           // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offPixelLengthAtInitialZoom                                   = new ExternalOffset<float>(0x026C);                           // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMaxFractionOfMap                                           = new ExternalOffset<float>(0x0270);                           // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMinFractionOfMap                                           = new ExternalOffset<float>(0x0274);                           // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             LeftEdge                                                       => _offLeftEdge.GetValue();
	public UImage                                             LineLength                                                     => _offLineLength.GetValue();
	public UTextBlock                                         MetersText                                                     => _offMetersText.GetValue();
	public UImage                                             RightEdge                                                      => _offRightEdge.GetValue();
	public float                                              ScaleInMeters                                                  => _offScaleInMeters.GetValue();
	public USizeBox                                           ZoomLayer                                                      => _offZoomLayer.GetValue();
	public float                                              InitialZoom                                                    => _offInitialZoom.GetValue();
	public float                                              PixelLengthAtInitialZoom                                       => _offPixelLengthAtInitialZoom.GetValue();
	public float                                              MaxFractionOfMap                                               => _offMaxFractionOfMap.GetValue();
	public float                                              MinFractionOfMap                                               => _offMinFractionOfMap.GetValue();
	#endregion


}


}