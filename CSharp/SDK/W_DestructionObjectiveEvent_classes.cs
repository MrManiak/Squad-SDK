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

// WidgetBlueprintGeneratedClass W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C
// 0x007A (0x025A - 0x01E0)
public class UW_DestructionObjectiveEvent_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offFlagAnim                                                   = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetAnimation>                  _offAlphaAnim                                                  = new ExternalOffset<UWidgetAnimation>(0x0240, true);          // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_Progress                                             = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_State                                                   = new ExternalOffset<UTextBlock>(0x0250, true);                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
//	private ExternalOffset<char>                              _offObjective_Owner                                            = new ExternalOffset<char>(0x0258, false);                     // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//	private ExternalOffset<char>                              _offOld_Team                                                   = new ExternalOffset<char>(0x0259, false);                     // 0x0259(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   FlagAnim                                                       => _offFlagAnim.GetValue();
	public UWidgetAnimation                                   AlphaAnim                                                      => _offAlphaAnim.GetValue();
	public UImage                                             Image_Progress                                                 => _offImage_Progress.GetValue();
	public UTextBlock                                         TB_State                                                       => _offTB_State.GetValue();
	#endregion


}


}