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

// BlueprintGeneratedClass GridData_BaseOption.GridData_BaseOption_C
// 0x0038 (0x0060 - 0x0028)
public class UGridData_BaseOption_C : UObject
{
	#region Offsets
	private ExternalOffset<FText>                             _offDisplay_Name                                               = new ExternalOffset<FText>(0x0028, false);                    // 0x0028(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<UTexture2D>                        _offTexture                                                    = new ExternalOffset<UTexture2D>(0x0040, true);                // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offTint                                                       = new ExternalOffset<FLinearColor>(0x0048, false);             // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offAction_Widget_Class                                        = new ExternalOffset<UClass>(0x0058, true);                    // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FText                                              Display_Name                                                   => _offDisplay_Name.GetValue();
	public UTexture2D                                         Texture                                                        => _offTexture.GetValue();
	public FLinearColor                                       Tint                                                           => _offTint.GetValue();
	public UClass                                             Action_Widget_Class                                            => _offAction_Widget_Class.GetValue();
	#endregion


}


}