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

// ScriptStruct ViewsterRuntime.ViewsterIssue
// 0x0020
public class FViewsterIssue : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offMapName                                                    = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCoordX                                                     = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCoordY                                                     = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCoordZ                                                     = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             MapName                                                        => _offMapName.GetValue();
	public float                                               CoordX                                                         => _offCoordX.GetValue();
	public float                                               CoordY                                                         => _offCoordY.GetValue();
	public float                                               CoordZ                                                         => _offCoordZ.GetValue();
	#endregion

	public FViewsterIssue(FString c_MapName, float c_CoordX, float c_CoordY, float c_CoordZ) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMapName.SetValue(c_MapName);
		_offCoordX.SetValue(c_CoordX);
		_offCoordY.SetValue(c_CoordY);
		_offCoordZ.SetValue(c_CoordZ);
	}
}

}