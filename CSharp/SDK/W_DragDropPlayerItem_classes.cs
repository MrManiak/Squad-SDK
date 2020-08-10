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

// WidgetBlueprintGeneratedClass W_DragDropPlayerItem.W_DragDropPlayerItem_C
// 0x0090 (0x0270 - 0x01E0)
public class UW_DragDropPlayerItem_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offIconRole                                                   = new ExternalOffset<UImage>(0x0238, true);                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTBName                                                     = new ExternalOffset<UTextBlock>(0x0240, true);                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offName                                                       = new ExternalOffset<FText>(0x0248, false);                    // 0x0248(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	private ExternalOffset<UTexture2D>                        _offIcon                                                       = new ExternalOffset<UTexture2D>(0x0260, true);                // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0268, true);       // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             IconRole                                                       => _offIconRole.GetValue();
	public UTextBlock                                         TBName                                                         => _offTBName.GetValue();
	public FText                                              Name                                                           => _offName.GetValue();
	public UTexture2D                                         Icon                                                           => _offIcon.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	#endregion


}


}