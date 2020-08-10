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

// ScriptStruct JsonUtilities.JsonObjectWrapper
// 0x0020
public class FJsonObjectWrapper : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offJsonString                                                 = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             JsonString                                                     => _offJsonString.GetValue();
	#endregion

	public FJsonObjectWrapper(FString c_JsonString) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offJsonString.SetValue(c_JsonString);
	}
}

}