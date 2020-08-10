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

// WidgetBlueprintGeneratedClass W_FloatingWidget.W_FloatingWidget_C
// 0x0068 (0x0248 - 0x01E0)
public class UW_FloatingWidget_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<byte/*(bool)*/>                    _offCan_Block_Grid_Menu                                        = new ExternalOffset<byte/*(bool)*/>(0x0238);                  // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<ASQWorldSettings>                  _offSQ_World_Settings                                          = new ExternalOffset<ASQWorldSettings>(0x0240, true);          // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public byte/*(bool)*/                                     Can_Block_Grid_Menu                                            => _offCan_Block_Grid_Menu.GetValue();
	public ASQWorldSettings                                   SQ_World_Settings                                              => _offSQ_World_Settings.GetValue();
	#endregion


}


}