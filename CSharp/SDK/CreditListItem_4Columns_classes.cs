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

// WidgetBlueprintGeneratedClass CreditListItem_4Columns.CreditListItem_4Columns_C
// 0x0088 (0x0268 - 0x01E0)
public class UCreditListItem_4Columns_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UTextBlock>                        _offTB_2                                                       = new ExternalOffset<UTextBlock>(0x0238, true);                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_3                                                       = new ExternalOffset<UTextBlock>(0x0240, true);                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_4                                                       = new ExternalOffset<UTextBlock>(0x0248, true);                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_5                                                       = new ExternalOffset<UTextBlock>(0x0250, true);                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TArray<FString>>                   _offColumnText                                                 = new ExternalOffset<TArray<FString>>(0x0258, false);          // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UTextBlock                                         TB_2                                                           => _offTB_2.GetValue();
	public UTextBlock                                         TB_3                                                           => _offTB_3.GetValue();
	public UTextBlock                                         TB_4                                                           => _offTB_4.GetValue();
	public UTextBlock                                         TB_5                                                           => _offTB_5.GetValue();
	public TArray<FString>                                    ColumnText                                                     => _offColumnText.GetValue();
	#endregion


}


}