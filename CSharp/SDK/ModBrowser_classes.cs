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

// WidgetBlueprintGeneratedClass ModBrowser.ModBrowser_C
// 0x0070 (0x0250 - 0x01E0)
public class UModBrowser_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UModDetails_C>                     _offModDetails                                                 = new ExternalOffset<UModDetails_C>(0x0238, true);             // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWrapBox>                          _offModList                                                    = new ExternalOffset<UWrapBox>(0x0240, true);                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_6                                                = new ExternalOffset<UTextBlock>(0x0248, true);                // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UModDetails_C                                      ModDetails                                                     => _offModDetails.GetValue();
	public UWrapBox                                           ModList                                                        => _offModList.GetValue();
	public UTextBlock                                         TextBlock_6                                                    => _offTextBlock_6.GetValue();
	#endregion


}


}