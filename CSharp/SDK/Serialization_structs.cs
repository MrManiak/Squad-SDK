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

// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
// 0x0090
public class FStructSerializerBuiltinTestStruct : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGuid>                              _offGuid                                                       = new ExternalOffset<FGuid>(0x0000, false);                    // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offName                                                       = new ExternalOffset<FName>(0x0010, false);                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offString                                                     = new ExternalOffset<FString>(0x0018, false);                  // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FText>                              _offText                                                       = new ExternalOffset<FText>(0x0028, false);                    // 0x0028(0x0018) (NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offVector                                                     = new ExternalOffset<FVector>(0x0040, false);                  // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector4>                           _offVector4                                                    = new ExternalOffset<FVector4>(0x0050, false);                 // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotator>                           _offRotator                                                    = new ExternalOffset<FRotator>(0x0060, false);                 // 0x0060(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FQuat>                              _offQuat                                                       = new ExternalOffset<FQuat>(0x0070, false);                    // 0x0070(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                             _offColor                                                      = new ExternalOffset<FColor>(0x0080, false);                   // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGuid                                               Guid                                                           => _offGuid.GetValue();
	public FName                                               Name                                                           => _offName.GetValue();
	public FString                                             String                                                         => _offString.GetValue();
	public FText                                               Text                                                           => _offText.GetValue();
	public FVector                                             Vector                                                         => _offVector.GetValue();
	public FVector4                                            Vector4                                                        => _offVector4.GetValue();
	public FRotator                                            Rotator                                                        => _offRotator.GetValue();
	public FQuat                                               Quat                                                           => _offQuat.GetValue();
	public FColor                                              Color                                                          => _offColor.GetValue();
	#endregion

	public FStructSerializerBuiltinTestStruct(FGuid c_Guid, FName c_Name, FString c_String, FText c_Text, FVector c_Vector, FVector4 c_Vector4, FRotator c_Rotator, FQuat c_Quat, FColor c_Color) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGuid.SetValue(c_Guid);
		_offName.SetValue(c_Name);
		_offString.SetValue(c_String);
		_offText.SetValue(c_Text);
		_offVector.SetValue(c_Vector);
		_offVector4.SetValue(c_Vector4);
		_offRotator.SetValue(c_Rotator);
		_offQuat.SetValue(c_Quat);
		_offColor.SetValue(c_Color);
	}
}
// ScriptStruct Serialization.StructSerializerNumericTestStruct
// 0x0030
public class FStructSerializerNumericTestStruct : ExternalClass
{
	#region Offsets
	private ExternalOffset<sbyte>                              _offInt8                                                       = new ExternalOffset<sbyte>(0x0000);                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<short>                              _offInt16                                                      = new ExternalOffset<short>(0x0002);                           // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offInt32                                                      = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<long>                               _offInt64                                                      = new ExternalOffset<long>(0x0008);                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offUInt8                                                      = new ExternalOffset<char>(0x0010, false);                     // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ushort>                             _offUInt16                                                     = new ExternalOffset<ushort>(0x0012);                          // 0x0012(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<uint>                               _offUInt32                                                     = new ExternalOffset<uint>(0x0014);                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ulong>                              _offUInt64                                                     = new ExternalOffset<ulong>(0x0018);                           // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offFloat                                                      = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<double>                             _offDouble                                                     = new ExternalOffset<double>(0x0028, false);                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public sbyte                                               Int8                                                           => _offInt8.GetValue();
	public short                                               Int16                                                          => _offInt16.GetValue();
	public int                                                 Int32                                                          => _offInt32.GetValue();
	public long                                                Int64                                                          => _offInt64.GetValue();
	public ushort                                              UInt16                                                         => _offUInt16.GetValue();
	public uint                                                UInt32                                                         => _offUInt32.GetValue();
	public ulong                                               UInt64                                                         => _offUInt64.GetValue();
	public float                                               Float                                                          => _offFloat.GetValue();
	public double                                              Double                                                         => _offDouble.GetValue();
	#endregion

	public FStructSerializerNumericTestStruct(sbyte c_Int8, short c_Int16, int c_Int32, long c_Int64, ushort c_UInt16, uint c_UInt32, ulong c_UInt64, float c_Float, double c_Double) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offInt8.SetValue(c_Int8);
		_offInt16.SetValue(c_Int16);
		_offInt32.SetValue(c_Int32);
		_offInt64.SetValue(c_Int64);
		_offUInt16.SetValue(c_UInt16);
		_offUInt32.SetValue(c_UInt32);
		_offUInt64.SetValue(c_UInt64);
		_offFloat.SetValue(c_Float);
		_offDouble.SetValue(c_Double);
	}
}
// ScriptStruct Serialization.StructSerializerObjectTestStruct
// 0x00A0
public class FStructSerializerObjectTestStruct : ExternalClass
{
	#region Offsets
	private ExternalOffset<UClass>                             _offClass                                                      = new ExternalOffset<UClass>(0x0000, true);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offSubClass                                                   = new ExternalOffset<UClass>(0x0008, true);                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UObject>                            _offObject                                                     = new ExternalOffset<UObject>(0x0038, true);                   // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TWeakObjectPtr<UMetaData>>          _offWeakObject                                                 = new ExternalOffset<TWeakObjectPtr<UMetaData>>(0x0040, false); // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSoftClassPath>                     _offClassPath                                                  = new ExternalOffset<FSoftClassPath>(0x0070, false);           // 0x0070(0x0018) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSoftObjectPath>                    _offObjectPath                                                 = new ExternalOffset<FSoftObjectPath>(0x0088, false);          // 0x0088(0x0018) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              Class                                                          => _offClass.GetValue();
	public UClass                                              SubClass                                                       => _offSubClass.GetValue();
	public UObject                                             Object                                                         => _offObject.GetValue();
	public TWeakObjectPtr<UMetaData>                           WeakObject                                                     => _offWeakObject.GetValue();
	public FSoftClassPath                                      ClassPath                                                      => _offClassPath.GetValue();
	public FSoftObjectPath                                     ObjectPath                                                     => _offObjectPath.GetValue();
	#endregion

	public FStructSerializerObjectTestStruct(UClass c_Class, UClass c_SubClass, UObject c_Object, TWeakObjectPtr<UMetaData> c_WeakObject, FSoftClassPath c_ClassPath, FSoftObjectPath c_ObjectPath) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offClass.SetValue(c_Class);
		_offSubClass.SetValue(c_SubClass);
		_offObject.SetValue(c_Object);
		_offWeakObject.SetValue(c_WeakObject);
		_offClassPath.SetValue(c_ClassPath);
		_offObjectPath.SetValue(c_ObjectPath);
	}
}
// ScriptStruct Serialization.StructSerializerSetTestStruct
// 0x0140
public class FStructSerializerSetTestStruct : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FStructSerializerSetTestStruct() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Serialization.StructSerializerBooleanTestStruct
// 0x0003
public class FStructSerializerBooleanTestStruct : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offBoolFalse                                                  = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offBoolTrue                                                   = new ExternalOffset<byte/*(bool)*/>(0x0001);                  // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offBitfield0                                                  = new ExternalOffset<char>(0x0002, false);                     // 0x0002(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offBitfield1                                                  = new ExternalOffset<char>(0x0002, false);                     // 0x0002(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offBitfield2Set                                               = new ExternalOffset<char>(0x0002, false);                     // 0x0002(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offBitfield3                                                  = new ExternalOffset<char>(0x0002, false);                     // 0x0002(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offBitfield4Set                                               = new ExternalOffset<char>(0x0002, false);                     // 0x0002(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offBitfield5Set                                               = new ExternalOffset<char>(0x0002, false);                     // 0x0002(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offBitfield6                                                  = new ExternalOffset<char>(0x0002, false);                     // 0x0002(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offBitfield7Set                                               = new ExternalOffset<char>(0x0002, false);                     // 0x0002(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      BoolFalse                                                      => _offBoolFalse.GetValue();
	public byte/*(bool)*/                                      BoolTrue                                                       => _offBoolTrue.GetValue();
	#endregion

	public FStructSerializerBooleanTestStruct(byte/*(bool)*/ c_BoolFalse, byte/*(bool)*/ c_BoolTrue) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBoolFalse.SetValue(c_BoolFalse);
		_offBoolTrue.SetValue(c_BoolTrue);
	}
}
// ScriptStruct Serialization.StructSerializerMapTestStruct
// 0x0140
public class FStructSerializerMapTestStruct : ExternalClass
{
	#region Offsets
//	private TMap<int, struct FString>                          _offIntToStr                                                   = new ExternalOffset<TMap<FString>>(0x0000, false);            // 0x0000(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
//	private TMap<struct FString, struct FString>               _offStrToStr                                                   = new ExternalOffset<TMap<FString>>(0x0050, false);            // 0x0050(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
//	private TMap<struct FString, struct FVector>               _offStrToVec                                                   = new ExternalOffset<TMap<FVector>>(0x00A0, false);            // 0x00A0(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
//	private TMap<struct FString, struct FStructSerializerBuiltinTestStruct> _offStrToStruct                                                = new ExternalOffset<TMap<FStructSerializerBuiltinTestStruct>>(0x00F0, false); // 0x00F0(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	#endregion

	public FStructSerializerMapTestStruct() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Serialization.StructSerializerArrayTestStruct
// 0x0050
public class FStructSerializerArrayTestStruct : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<int>>                        _offInt32Array                                                 = new ExternalOffset<TArray<int>>(0x0000, false);              // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offStaticSingleElement                                        = new ExternalOffset<int>(0x0010);                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<int>                                _offStaticInt32Array[0x3]                                      = new ExternalOffset<int>(0x0014);                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<float>                              _offStaticFloatArray[0x3]                                      = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FVector>>                    _offVectorArray                                                = new ExternalOffset<TArray<FVector>>(0x0030, false);          // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FStructSerializerBuiltinTestStruct>> _offStructArray                                                = new ExternalOffset<TArray<FStructSerializerBuiltinTestStruct>>(0x0040, false); // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<int>                                         Int32Array                                                     => _offInt32Array.GetValue();
	public int                                                 StaticSingleElement                                            => _offStaticSingleElement.GetValue();
	public TArray<FVector>                                     VectorArray                                                    => _offVectorArray.GetValue();
	public TArray<FStructSerializerBuiltinTestStruct>          StructArray                                                    => _offStructArray.GetValue();
	#endregion

	public FStructSerializerArrayTestStruct(TArray<int> c_Int32Array, int c_StaticSingleElement, TArray<FVector> c_VectorArray, TArray<FStructSerializerBuiltinTestStruct> c_StructArray) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offInt32Array.SetValue(c_Int32Array);
		_offStaticSingleElement.SetValue(c_StaticSingleElement);
		_offVectorArray.SetValue(c_VectorArray);
		_offStructArray.SetValue(c_StructArray);
	}
}
// ScriptStruct Serialization.StructSerializerTestStruct
// 0x0440
public class FStructSerializerTestStruct : ExternalClass
{
	#region Offsets
	private ExternalOffset<FStructSerializerNumericTestStruct> _offNumerics                                                   = new ExternalOffset<FStructSerializerNumericTestStruct>(0x0000, false); // 0x0000(0x0030) (NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FStructSerializerBooleanTestStruct> _offBooleans                                                   = new ExternalOffset<FStructSerializerBooleanTestStruct>(0x0030, false); // 0x0030(0x0003) (NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FStructSerializerObjectTestStruct>  _offObjects                                                    = new ExternalOffset<FStructSerializerObjectTestStruct>(0x0038, false); // 0x0038(0x00A0) (NativeAccessSpecifierPublic)
	private ExternalOffset<FStructSerializerBuiltinTestStruct> _offBuiltins                                                   = new ExternalOffset<FStructSerializerBuiltinTestStruct>(0x00E0, false); // 0x00E0(0x0090) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FStructSerializerArrayTestStruct>   _offArrays                                                     = new ExternalOffset<FStructSerializerArrayTestStruct>(0x0170, false); // 0x0170(0x0050) (NativeAccessSpecifierPublic)
	private ExternalOffset<FStructSerializerMapTestStruct>     _offMaps                                                       = new ExternalOffset<FStructSerializerMapTestStruct>(0x01C0, false); // 0x01C0(0x0140) (NativeAccessSpecifierPublic)
	private ExternalOffset<FStructSerializerSetTestStruct>     _offSets                                                       = new ExternalOffset<FStructSerializerSetTestStruct>(0x0300, false); // 0x0300(0x0140) (NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FStructSerializerNumericTestStruct                  Numerics                                                       => _offNumerics.GetValue();
	public FStructSerializerBooleanTestStruct                  Booleans                                                       => _offBooleans.GetValue();
	public FStructSerializerObjectTestStruct                   Objects                                                        => _offObjects.GetValue();
	public FStructSerializerBuiltinTestStruct                  Builtins                                                       => _offBuiltins.GetValue();
	public FStructSerializerArrayTestStruct                    Arrays                                                         => _offArrays.GetValue();
	public FStructSerializerMapTestStruct                      Maps                                                           => _offMaps.GetValue();
	public FStructSerializerSetTestStruct                      Sets                                                           => _offSets.GetValue();
	#endregion

	public FStructSerializerTestStruct(FStructSerializerNumericTestStruct c_Numerics, FStructSerializerBooleanTestStruct c_Booleans, FStructSerializerObjectTestStruct c_Objects, FStructSerializerBuiltinTestStruct c_Builtins, FStructSerializerArrayTestStruct c_Arrays, FStructSerializerMapTestStruct c_Maps, FStructSerializerSetTestStruct c_Sets) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offNumerics.SetValue(c_Numerics);
		_offBooleans.SetValue(c_Booleans);
		_offObjects.SetValue(c_Objects);
		_offBuiltins.SetValue(c_Builtins);
		_offArrays.SetValue(c_Arrays);
		_offMaps.SetValue(c_Maps);
		_offSets.SetValue(c_Sets);
	}
}

}