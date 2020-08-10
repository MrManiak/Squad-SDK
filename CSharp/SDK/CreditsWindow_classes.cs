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

// WidgetBlueprintGeneratedClass CreditsWindow.CreditsWindow_C
// 0x0070 (0x0250 - 0x01E0)
public class UCreditsWindow_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UVerticalBox>                      _offCreditList                                                 = new ExternalOffset<UVerticalBox>(0x0238, true);              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScrollBox>                        _offCreditsScrollBox                                           = new ExternalOffset<UScrollBox>(0x0240, true);                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsHovered                                                 = new ExternalOffset<byte/*(bool)*/>(0x0248);                  // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offScrollSpeed                                                = new ExternalOffset<float>(0x024C);                           // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UVerticalBox                                       CreditList                                                     => _offCreditList.GetValue();
	public UScrollBox                                         CreditsScrollBox                                               => _offCreditsScrollBox.GetValue();
	public byte/*(bool)*/                                     bIsHovered                                                     => _offbIsHovered.GetValue();
	public float                                              ScrollSpeed                                                    => _offScrollSpeed.GetValue();
	#endregion


}


}