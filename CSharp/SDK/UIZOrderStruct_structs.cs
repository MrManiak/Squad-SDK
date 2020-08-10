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

// UserDefinedStruct UIZOrderStruct.UIZOrderStruct
// 0x0004
public class FUIZOrderStruct : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offZOrder_5_1C9F02D2451185CC3EAFD69102F13624                  = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public int                                                 ZOrder_5_1C9F02D2451185CC3EAFD69102F13624                      => _offZOrder_5_1C9F02D2451185CC3EAFD69102F13624.GetValue();
	#endregion

	public FUIZOrderStruct(int c_ZOrder_5_1C9F02D2451185CC3EAFD69102F13624) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offZOrder_5_1C9F02D2451185CC3EAFD69102F13624.SetValue(c_ZOrder_5_1C9F02D2451185CC3EAFD69102F13624);
	}
}

}