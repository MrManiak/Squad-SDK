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

// WidgetBlueprintGeneratedClass W_SQMapGridLines.W_SQMapGridLines_C
// 0x0078 (0x0258 - 0x01E0)
public class UW_SQMapGridLines_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorder_1                                                   = new ExternalOffset<UBorder>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offGridOverlay                                                = new ExternalOffset<UOverlay>(0x0240, true);                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TArray<FGridLinesPerZoomLevel>>    _offGridLineLevels                                             = new ExternalOffset<TArray<FGridLinesPerZoomLevel>>(0x0248, false); // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            Border_1                                                       => _offBorder_1.GetValue();
	public UOverlay                                           GridOverlay                                                    => _offGridOverlay.GetValue();
	public TArray<FGridLinesPerZoomLevel>                     GridLineLevels                                                 => _offGridLineLevels.GetValue();
	#endregion


}


}