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

// WidgetBlueprintGeneratedClass W_SQMapGridLinePerZoomLevel.W_SQMapGridLinePerZoomLevel_C
// 0x007C (0x025C - 0x01E0)
public class UW_SQMapGridLinePerZoomLevel_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offGridLineImage                                              = new ExternalOffset<UImage>(0x0238, true);                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMaterialInstance                                           = new ExternalOffset<UMaterialInstanceDynamic>(0x0240, true);  // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UCurveFloat>                       _offOpacityCurve                                               = new ExternalOffset<UCurveFloat>(0x0248, true);               // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offScaleAmountStart                                           = new ExternalOffset<float>(0x0250);                           // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offScaleAmountEnd                                             = new ExternalOffset<float>(0x0254);                           // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offViewableDistance                                           = new ExternalOffset<float>(0x0258);                           // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             GridLineImage                                                  => _offGridLineImage.GetValue();
	public UMaterialInstanceDynamic                           MaterialInstance                                               => _offMaterialInstance.GetValue();
	public UCurveFloat                                        OpacityCurve                                                   => _offOpacityCurve.GetValue();
	public float                                              ScaleAmountStart                                               => _offScaleAmountStart.GetValue();
	public float                                              ScaleAmountEnd                                                 => _offScaleAmountEnd.GetValue();
	public float                                              ViewableDistance                                               => _offViewableDistance.GetValue();
	#endregion


}


}