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

// UserDefinedStruct S_PopupButtonSetup.S_PopupButtonSetup
// 0x0029
public class FS_PopupButtonSetup : ExternalClass
{
	#region Offsets
	private ExternalOffset<FText>                              _offText_2_199221A642E14F00952EB5941BF092B2                    = new ExternalOffset<FText>(0x0000, false);                    // 0x0000(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<FLinearColor>                       _offColor_5_5CD602C645760DC3C7061AA934F58C9C                   = new ExternalOffset<FLinearColor>(0x0018, false);             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                     _offHidden_8_DDBCE60D478A3E73D25FF18183AB3221                  = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FText                                               Text_2_199221A642E14F00952EB5941BF092B2                        => _offText_2_199221A642E14F00952EB5941BF092B2.GetValue();
	public FLinearColor                                        Color_5_5CD602C645760DC3C7061AA934F58C9C                       => _offColor_5_5CD602C645760DC3C7061AA934F58C9C.GetValue();
	public byte/*(bool)*/                                      Hidden_8_DDBCE60D478A3E73D25FF18183AB3221                      => _offHidden_8_DDBCE60D478A3E73D25FF18183AB3221.GetValue();
	#endregion

	public FS_PopupButtonSetup(FText c_Text_2_199221A642E14F00952EB5941BF092B2, FLinearColor c_Color_5_5CD602C645760DC3C7061AA934F58C9C, byte/*(bool)*/ c_Hidden_8_DDBCE60D478A3E73D25FF18183AB3221) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offText_2_199221A642E14F00952EB5941BF092B2.SetValue(c_Text_2_199221A642E14F00952EB5941BF092B2);
		_offColor_5_5CD602C645760DC3C7061AA934F58C9C.SetValue(c_Color_5_5CD602C645760DC3C7061AA934F58C9C);
		_offHidden_8_DDBCE60D478A3E73D25FF18183AB3221.SetValue(c_Hidden_8_DDBCE60D478A3E73D25FF18183AB3221);
	}
}

}