// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum VariantManagerContent.EPropertyValueCategory
public enum EPropertyValueCategory : byte
{
	EPropertyValueCategory__Undefined = 0,
	EPropertyValueCategory__Generic = 1,
	EPropertyValueCategory__RelativeLocation = 2,
	EPropertyValueCategory__RelativeRotation = 3,
	EPropertyValueCategory__RelativeScale3D = 4,
	EPropertyValueCategory__bVisible = 5,
	EPropertyValueCategory__Material = 6,
	EPropertyValueCategory__Color  = 7,
	EPropertyValueCategory__EPropertyValueCategory_MAX = 8
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VariantManagerContent.CapturedPropSegment
// 0x0028
public class FCapturedPropSegment : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offPropertyName                                               = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offPropertyIndex                                              = new ExternalOffset<int>(0x0010);                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offComponentName                                              = new ExternalOffset<FString>(0x0018, false);                  // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             PropertyName                                                   => _offPropertyName.GetValue();
	public int                                                 PropertyIndex                                                  => _offPropertyIndex.GetValue();
	public FString                                             ComponentName                                                  => _offComponentName.GetValue();
	#endregion

	public FCapturedPropSegment(FString c_PropertyName, int c_PropertyIndex, FString c_ComponentName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPropertyName.SetValue(c_PropertyName);
		_offPropertyIndex.SetValue(c_PropertyIndex);
		_offComponentName.SetValue(c_ComponentName);
	}
}
// ScriptStruct VariantManagerContent.FunctionCaller
// 0x0008
public class FFunctionCaller : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offFunctionName                                               = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               FunctionName                                                   => _offFunctionName.GetValue();
	#endregion

	public FFunctionCaller(FName c_FunctionName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFunctionName.SetValue(c_FunctionName);
	}
}

}