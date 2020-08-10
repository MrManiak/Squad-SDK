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

// WidgetBlueprintGeneratedClass W_LegendItem.W_LegendItem_C
// 0x0088 (0x0268 - 0x01E0)
public class UW_LegendItem_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offIcon                                                       = new ExternalOffset<UImage>(0x0238, true);                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Text                                                    = new ExternalOffset<UTextBlock>(0x0240, true);                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offText                                                       = new ExternalOffset<FText>(0x0248, false);                    // 0x0248(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	private ExternalOffset<UTexture2D>                        _offTexture                                                    = new ExternalOffset<UTexture2D>(0x0260, true);                // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             Icon                                                           => _offIcon.GetValue();
	public UTextBlock                                         TB_Text                                                        => _offTB_Text.GetValue();
	public FText                                              Text                                                           => _offText.GetValue();
	public UTexture2D                                         Texture                                                        => _offTexture.GetValue();
	#endregion


}


}