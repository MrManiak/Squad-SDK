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

// WidgetBlueprintGeneratedClass W_MousePosition.W_MousePosition_C
// 0x0028 (0x0270 - 0x0248)
public class UW_MousePosition_C : UW_FloatingWidget_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0248, false); // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UTextBlock>                        _offTB_Pos                                                     = new ExternalOffset<UTextBlock>(0x0250, true);                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offBPHUD                                                      = new ExternalOffset<byte/*(bool)*/>(0x0258);                  // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FString>                           _offPos_String                                                 = new ExternalOffset<FString>(0x0260, false);                  // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UTextBlock                                         TB_Pos                                                         => _offTB_Pos.GetValue();
	public byte/*(bool)*/                                     BPHUD                                                          => _offBPHUD.GetValue();
	public FString                                            Pos_String                                                     => _offPos_String.GetValue();
	#endregion


}


}