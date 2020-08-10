// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct KeybindAxisStruct.KeybindAxisStruct
// 0x002C
public class FKeybindAxisStruct : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offAxisName_13_686D07634065815755D92EB24378D293               = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                              _offFriendlyName_17_3FEA8FEA41EF6733158DE0A3F66FB65F           = new ExternalOffset<FText>(0x0008, false);                    // 0x0008(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<byte/*(bool)*/>                     _offNegative_16_5D8560A044DC9B43AF31D9855FDA7811               = new ExternalOffset<byte/*(bool)*/>(0x0020);                  // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<FName>                              _offCategory_12_CE9B3A9A43EC454D9B3ECF89CD474765               = new ExternalOffset<FName>(0x0024, false);                    // 0x0024(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FName                                               AxisName_13_686D07634065815755D92EB24378D293                   => _offAxisName_13_686D07634065815755D92EB24378D293.GetValue();
	public FText                                               FriendlyName_17_3FEA8FEA41EF6733158DE0A3F66FB65F               => _offFriendlyName_17_3FEA8FEA41EF6733158DE0A3F66FB65F.GetValue();
	public byte/*(bool)*/                                      Negative_16_5D8560A044DC9B43AF31D9855FDA7811                   => _offNegative_16_5D8560A044DC9B43AF31D9855FDA7811.GetValue();
	public FName                                               Category_12_CE9B3A9A43EC454D9B3ECF89CD474765                   => _offCategory_12_CE9B3A9A43EC454D9B3ECF89CD474765.GetValue();
	#endregion

	public FKeybindAxisStruct(FName c_AxisName_13_686D07634065815755D92EB24378D293, FText c_FriendlyName_17_3FEA8FEA41EF6733158DE0A3F66FB65F, byte/*(bool)*/ c_Negative_16_5D8560A044DC9B43AF31D9855FDA7811, FName c_Category_12_CE9B3A9A43EC454D9B3ECF89CD474765) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAxisName_13_686D07634065815755D92EB24378D293.SetValue(c_AxisName_13_686D07634065815755D92EB24378D293);
		_offFriendlyName_17_3FEA8FEA41EF6733158DE0A3F66FB65F.SetValue(c_FriendlyName_17_3FEA8FEA41EF6733158DE0A3F66FB65F);
		_offNegative_16_5D8560A044DC9B43AF31D9855FDA7811.SetValue(c_Negative_16_5D8560A044DC9B43AF31D9855FDA7811);
		_offCategory_12_CE9B3A9A43EC454D9B3ECF89CD474765.SetValue(c_Category_12_CE9B3A9A43EC454D9B3ECF89CD474765);
	}
}

}