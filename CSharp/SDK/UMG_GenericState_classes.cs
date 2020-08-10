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

// WidgetBlueprintGeneratedClass UMG_GenericState.UMG_GenericState_C
// 0x00C4 (0x02A4 - 0x01E0)
public class UUMG_GenericState_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offIcon                                                       = new ExternalOffset<UImage>(0x0238, true);                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offInnerBar                                                   = new ExternalOffset<UImage>(0x0240, true);                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offOuterBar                                                   = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMI_InnerBar                                                = new ExternalOffset<UMaterialInstanceDynamic>(0x0250, true);  // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMI_OuterBar                                                = new ExternalOffset<UMaterialInstanceDynamic>(0x0258, true);  // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offState_Texture                                              = new ExternalOffset<UTexture2D>(0x0260, true);                // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offInner_Visible                                              = new ExternalOffset<byte/*(bool)*/>(0x0268);                  // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offOuter_Visible                                              = new ExternalOffset<byte/*(bool)*/>(0x0269);                  // 0x0269(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<FLinearColor>                      _offInner_Bar_Color                                            = new ExternalOffset<FLinearColor>(0x026C, false);             // 0x026C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offOuter_Bar_Color                                            = new ExternalOffset<FLinearColor>(0x027C, false);             // 0x027C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offIcon_Color                                                 = new ExternalOffset<FLinearColor>(0x028C, false);             // 0x028C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offOuter_Percent                                              = new ExternalOffset<float>(0x029C);                           // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offInner_Percent                                              = new ExternalOffset<float>(0x02A0);                           // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             Icon                                                           => _offIcon.GetValue();
	public UImage                                             InnerBar                                                       => _offInnerBar.GetValue();
	public UImage                                             OuterBar                                                       => _offOuterBar.GetValue();
	public UMaterialInstanceDynamic                           MI_InnerBar                                                    => _offMI_InnerBar.GetValue();
	public UMaterialInstanceDynamic                           MI_OuterBar                                                    => _offMI_OuterBar.GetValue();
	public UTexture2D                                         State_Texture                                                  => _offState_Texture.GetValue();
	public byte/*(bool)*/                                     Inner_Visible                                                  => _offInner_Visible.GetValue();
	public byte/*(bool)*/                                     Outer_Visible                                                  => _offOuter_Visible.GetValue();
	public FLinearColor                                       Inner_Bar_Color                                                => _offInner_Bar_Color.GetValue();
	public FLinearColor                                       Outer_Bar_Color                                                => _offOuter_Bar_Color.GetValue();
	public FLinearColor                                       Icon_Color                                                     => _offIcon_Color.GetValue();
	public float                                              Outer_Percent                                                  => _offOuter_Percent.GetValue();
	public float                                              Inner_Percent                                                  => _offInner_Percent.GetValue();
	#endregion


}


}