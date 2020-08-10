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

// UserDefinedStruct HighlightEventStruct.HighlightEventStruct
// 0x0028
public class FHighlightEventStruct : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offGroupId_13_367B7757457B2685410BA0ABDDEAADA0                = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	private ExternalOffset<FString>                            _offHighlightName_11_AEF6AB6048A02B16D74A81BE3177DCEB          = new ExternalOffset<FString>(0x0010, false);                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	private ExternalOffset<int>                                _offVideoStartDelta_6_3E3113F641832A43D17A98B9164E8CC6         = new ExternalOffset<int>(0x0020);                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                                _offVideoEndDelta_8_AD2A496A41F40C43838A5EBEF8554A03           = new ExternalOffset<int>(0x0024);                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FString                                             GroupId_13_367B7757457B2685410BA0ABDDEAADA0                    => _offGroupId_13_367B7757457B2685410BA0ABDDEAADA0.GetValue();
	public FString                                             HighlightName_11_AEF6AB6048A02B16D74A81BE3177DCEB              => _offHighlightName_11_AEF6AB6048A02B16D74A81BE3177DCEB.GetValue();
	public int                                                 VideoStartDelta_6_3E3113F641832A43D17A98B9164E8CC6             => _offVideoStartDelta_6_3E3113F641832A43D17A98B9164E8CC6.GetValue();
	public int                                                 VideoEndDelta_8_AD2A496A41F40C43838A5EBEF8554A03               => _offVideoEndDelta_8_AD2A496A41F40C43838A5EBEF8554A03.GetValue();
	#endregion

	public FHighlightEventStruct(FString c_GroupId_13_367B7757457B2685410BA0ABDDEAADA0, FString c_HighlightName_11_AEF6AB6048A02B16D74A81BE3177DCEB, int c_VideoStartDelta_6_3E3113F641832A43D17A98B9164E8CC6, int c_VideoEndDelta_8_AD2A496A41F40C43838A5EBEF8554A03) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGroupId_13_367B7757457B2685410BA0ABDDEAADA0.SetValue(c_GroupId_13_367B7757457B2685410BA0ABDDEAADA0);
		_offHighlightName_11_AEF6AB6048A02B16D74A81BE3177DCEB.SetValue(c_HighlightName_11_AEF6AB6048A02B16D74A81BE3177DCEB);
		_offVideoStartDelta_6_3E3113F641832A43D17A98B9164E8CC6.SetValue(c_VideoStartDelta_6_3E3113F641832A43D17A98B9164E8CC6);
		_offVideoEndDelta_8_AD2A496A41F40C43838A5EBEF8554A03.SetValue(c_VideoEndDelta_8_AD2A496A41F40C43838A5EBEF8554A03);
	}
}

}