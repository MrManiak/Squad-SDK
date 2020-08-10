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

// WidgetBlueprintGeneratedClass W_SQMapScaleBars.W_SQMapScaleBars_C
// 0x0080 (0x0260 - 0x01E0)
public class UW_SQMapScaleBars_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UW_SQMapScaleBarSingle_C>          _off_100Bar                                                    = new ExternalOffset<UW_SQMapScaleBarSingle_C>(0x0238, true);  // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_SQMapScaleBarSingle_C>          _off_300Bar                                                    = new ExternalOffset<UW_SQMapScaleBarSingle_C>(0x0240, true);  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_SQMapScaleBarSingle_C>          _off_33Bar                                                     = new ExternalOffset<UW_SQMapScaleBarSingle_C>(0x0248, true);  // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_SQMapScaleBarSingle_C>          _off_900Bar                                                    = new ExternalOffset<UW_SQMapScaleBarSingle_C>(0x0250, true);  // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offScalebars                                                  = new ExternalOffset<UVerticalBox>(0x0258, true);              // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UW_SQMapScaleBarSingle_C                           _100Bar                                                        => _off_100Bar.GetValue();
	public UW_SQMapScaleBarSingle_C                           _300Bar                                                        => _off_300Bar.GetValue();
	public UW_SQMapScaleBarSingle_C                           _33Bar                                                         => _off_33Bar.GetValue();
	public UW_SQMapScaleBarSingle_C                           _900Bar                                                        => _off_900Bar.GetValue();
	public UVerticalBox                                       Scalebars                                                      => _offScalebars.GetValue();
	#endregion


}


}