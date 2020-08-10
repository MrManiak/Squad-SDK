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

// WidgetBlueprintGeneratedClass W_GridButton_CommandCategory.W_GridButton_CommandCategory_C
// 0x0028 (0x0300 - 0x02D8)
public class UW_GridButton_CommandCategory_C : UW_GridButton_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02D8, false); // 0x02D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x02E0, true);       // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offCategory_ID                                                = new ExternalOffset<int>(0x02E8);                             // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<UClass>>                    _offSQActionList                                               = new ExternalOffset<TArray<UClass>>(0x02F0, false);           // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public int                                                Category_ID                                                    => _offCategory_ID.GetValue();
	public TArray<UClass>                                     SQActionList                                                   => _offSQActionList.GetValue();
	#endregion


}


}