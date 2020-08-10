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

// WidgetBlueprintGeneratedClass SpeedDialNumber.SpeedDialNumber_C
// 0x006C (0x024C - 0x01E0)
public class USpeedDialNumber_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UInvalidationBox>                  _offInvalidationBox_1                                          = new ExternalOffset<UInvalidationBox>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Num                                                     = new ExternalOffset<UTextBlock>(0x0240, true);                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offNum                                                        = new ExternalOffset<int>(0x0248);                             // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UInvalidationBox                                   InvalidationBox_1                                              => _offInvalidationBox_1.GetValue();
	public UTextBlock                                         TB_Num                                                         => _offTB_Num.GetValue();
	public int                                                Num                                                            => _offNum.GetValue();
	#endregion


}


}