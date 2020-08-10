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

// ScriptStruct PropertyPath.PropertyPathSegment
// 0x0020
public class FPropertyPathSegment : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offName                                                       = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offArrayIndex                                                 = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UStruct>                            _offStruct                                                     = new ExternalOffset<UStruct>(0x0010, true);                   // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UField>                             _offField                                                      = new ExternalOffset<UField>(0x0018, true);                    // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FName                                               Name                                                           => _offName.GetValue();
	public int                                                 ArrayIndex                                                     => _offArrayIndex.GetValue();
	public UStruct                                             Struct                                                         => _offStruct.GetValue();
	public UField                                              Field                                                          => _offField.GetValue();
	#endregion

	public FPropertyPathSegment(FName c_Name, int c_ArrayIndex, UStruct c_Struct, UField c_Field) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offName.SetValue(c_Name);
		_offArrayIndex.SetValue(c_ArrayIndex);
		_offStruct.SetValue(c_Struct);
		_offField.SetValue(c_Field);
	}
}
// ScriptStruct PropertyPath.CachedPropertyPath
// 0x0030
public class FCachedPropertyPath : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FPropertyPathSegment>>       _offSegments                                                   = new ExternalOffset<TArray<FPropertyPathSegment>>(0x0000, false); // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<UFunction>                          _offCachedFunction                                             = new ExternalOffset<UFunction>(0x0018, true);                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FPropertyPathSegment>                        Segments                                                       => _offSegments.GetValue();
	public UFunction                                           CachedFunction                                                 => _offCachedFunction.GetValue();
	#endregion

	public FCachedPropertyPath(TArray<FPropertyPathSegment> c_Segments, UFunction c_CachedFunction) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSegments.SetValue(c_Segments);
		_offCachedFunction.SetValue(c_CachedFunction);
	}
}

}