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

// WidgetBlueprintGeneratedClass W_SQMapVerticalBar.W_SQMapVerticalBar_C
// 0x0088 (0x0268 - 0x01E0)
public class UW_SQMapVerticalBar_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<USizeBox>                          _offFixedSizeLayer                                             = new ExternalOffset<USizeBox>(0x0238, true);                  // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offMarkerGroup                                                = new ExternalOffset<UVerticalBox>(0x0240, true);              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offPanLayer                                                   = new ExternalOffset<UCanvasPanel>(0x0248, true);              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offRemainderOffset                                            = new ExternalOffset<UOverlay>(0x0250, true);                  // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offZoomLayer                                                  = new ExternalOffset<USizeBox>(0x0258, true);                  // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offDisplayNumeric                                             = new ExternalOffset<byte/*(bool)*/>(0x0260);                  // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offGridLines                                                  = new ExternalOffset<float>(0x0264);                           // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public USizeBox                                           FixedSizeLayer                                                 => _offFixedSizeLayer.GetValue();
	public UVerticalBox                                       MarkerGroup                                                    => _offMarkerGroup.GetValue();
	public UCanvasPanel                                       PanLayer                                                       => _offPanLayer.GetValue();
	public UOverlay                                           RemainderOffset                                                => _offRemainderOffset.GetValue();
	public USizeBox                                           ZoomLayer                                                      => _offZoomLayer.GetValue();
	public byte/*(bool)*/                                     DisplayNumeric                                                 => _offDisplayNumeric.GetValue();
	public float                                              GridLines                                                      => _offGridLines.GetValue();
	#endregion


}


}