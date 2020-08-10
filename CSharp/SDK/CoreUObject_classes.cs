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

// Class CoreUObject.Object
// 0x0028
public class UObject : ExternalClass
{
	#region Offsets
	private ExternalOffset<UIntPtr>                           _offVfTable                                                    = new ExternalOffset<UIntPtr>(0x0000);                         // 0x0000(0x0008) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<int>                               _offFlags                                                      = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<int>                               _offInternalIndex                                              = new ExternalOffset<int>(0x000C);                             // 0x000C(0x0004) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<UClass>                            _offClass                                                      = new ExternalOffset<UClass>(0x0010, true);                    // 0x0010(0x0008) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<FName>                             _offName                                                       = new ExternalOffset<FName>(0x0018, false);                    // 0x0018(0x0008) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<UObject>                           _offOuter                                                      = new ExternalOffset<UObject>(0x0020, true);                   // 0x0020(0x0008) NOT AUTO-GENERATED PROPERTY
	#endregion

	#region Props
	public UIntPtr                                            VfTable                                                        => _offVfTable.GetValue();
	public int                                                Flags                                                          => _offFlags.GetValue();
	public int                                                InternalIndex                                                  => _offInternalIndex.GetValue();
	public UClass                                             Class                                                          => _offClass.GetValue();
	public FName                                              Name                                                           => _offName.GetValue();
	public UObject                                            Outer                                                          => _offOuter.GetValue();
	#endregion


}

// Class CoreUObject.Field
// 0x0008 (0x0030 - 0x0028)
public class UField : UObject
{
	#region Offsets
	private ExternalOffset<UField>                            _offNext                                                       = new ExternalOffset<UField>(0x0028, true);                    // 0x0028(0x0008) NOT AUTO-GENERATED PROPERTY
	#endregion

	#region Props
	public UField                                             Next                                                           => _offNext.GetValue();
	#endregion


}

// Class CoreUObject.Property
// 0x0000 (0x0030 - 0x0030)
public class UProperty : UField
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.ObjectPropertyBase
// 0x0040 (0x0070 - 0x0030)
public class UObjectPropertyBase : UProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.SoftObjectProperty
// 0x0008 (0x0078 - 0x0070)
public class USoftObjectProperty : UObjectPropertyBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.SoftClassProperty
// 0x0000 (0x0078 - 0x0078)
public class USoftClassProperty : USoftObjectProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.StrProperty
// 0x0040 (0x0070 - 0x0030)
public class UStrProperty : UProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.StructProperty
// 0x0040 (0x0070 - 0x0030)
public class UStructProperty : UProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.NumericProperty
// 0x0040 (0x0070 - 0x0030)
public class UNumericProperty : UProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.UInt16Property
// 0x0000 (0x0070 - 0x0070)
public class UUInt16Property : UNumericProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.UInt32Property
// 0x0000 (0x0070 - 0x0070)
public class UUInt32Property : UNumericProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.UInt64Property
// 0x0000 (0x0070 - 0x0070)
public class UUInt64Property : UNumericProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.WeakObjectProperty
// 0x0008 (0x0078 - 0x0070)
public class UWeakObjectProperty : UObjectPropertyBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.TextProperty
// 0x0040 (0x0070 - 0x0030)
public class UTextProperty : UProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.Interface
// 0x0000 (0x0028 - 0x0028)
public class UInterface : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.GCObjectReferencer
// 0x0000 (0x0028 - 0x0028)
public class UGCObjectReferencer : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.TextBuffer
// 0x0000 (0x0028 - 0x0028)
public class UTextBuffer : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.Struct
// 0x0068 (0x0098 - 0x0030)
public class UStruct : UField
{
	#region Offsets
//	private ExternalOffset<char>                              _offpad_UHK84YXJM9[4]                                          = new ExternalOffset<char>(0x003C, false);                     // 0x003C(0x0004) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<UStruct>                           _offSuperField                                                 = new ExternalOffset<UStruct>(0x0040, true);                   // 0x0040(0x0008) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<UField>                            _offChildren                                                   = new ExternalOffset<UField>(0x0048, true);                    // 0x0048(0x0008) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<int>                               _offPropertySize                                               = new ExternalOffset<int>(0x0050);                             // 0x0050(0x0004) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<int>                               _offMinAlignment                                               = new ExternalOffset<int>(0x0054);                             // 0x0054(0x0004) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<TArray>                            _offScript                                                     = new ExternalOffset<TArray>(0x0058, false);                   // 0x0058(0x0010) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<UProperty>                         _offPropertyLink                                               = new ExternalOffset<UProperty>(0x0068, true);                 // 0x0068(0x0008) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<UProperty>                         _offRefLink                                                    = new ExternalOffset<UProperty>(0x0070, true);                 // 0x0070(0x0008) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<UProperty>                         _offDestructorLink                                             = new ExternalOffset<UProperty>(0x0078, true);                 // 0x0078(0x0008) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<UProperty>                         _offPostConstructLink                                          = new ExternalOffset<UProperty>(0x0080, true);                 // 0x0080(0x0008) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<TArray>                            _offScriptAndPropertyObjectReferences                          = new ExternalOffset<TArray>(0x0088, false);                   // 0x0088(0x0010) NOT AUTO-GENERATED PROPERTY
	#endregion

	#region Props
	public UStruct                                            SuperField                                                     => _offSuperField.GetValue();
	public UField                                             Children                                                       => _offChildren.GetValue();
	public int                                                PropertySize                                                   => _offPropertySize.GetValue();
	public int                                                MinAlignment                                                   => _offMinAlignment.GetValue();
	public TArray                                             Script                                                         => _offScript.GetValue();
	public UProperty                                          PropertyLink                                                   => _offPropertyLink.GetValue();
	public UProperty                                          RefLink                                                        => _offRefLink.GetValue();
	public UProperty                                          DestructorLink                                                 => _offDestructorLink.GetValue();
	public UProperty                                          PostConstructLink                                              => _offPostConstructLink.GetValue();
	public TArray                                             ScriptAndPropertyObjectReferences                              => _offScriptAndPropertyObjectReferences.GetValue();
	#endregion


}

// Class CoreUObject.ScriptStruct
// 0x0000 (0x0098 - 0x0098)
public class UScriptStruct : UStruct
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.Package
// 0x0000 (0x0028 - 0x0028)
public class UPackage : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.Class
// 0x0000 (0x0098 - 0x0098)
public class UClass : UStruct
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.Function
// 0x0030 (0x00C8 - 0x0098)
public class UFunction : UStruct
{
	#region Offsets
	private ExternalOffset<int>                               _offFunctionFlags                                              = new ExternalOffset<int>(0x0098);                             // 0x0098(0x0004) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<sbyte>                             _offNumParms                                                   = new ExternalOffset<sbyte>(0x009C);                           // 0x009C(0x0001) NOT AUTO-GENERATED PROPERTY
//	private ExternalOffset<char>                              _offpad_9ETBMAE6JG[1]                                          = new ExternalOffset<char>(0x009D, false);                     // 0x009D(0x0001) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<short>                             _offParmsSize                                                  = new ExternalOffset<short>(0x009E);                           // 0x009E(0x0002) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<ushort>                            _offReturnValueOffset                                          = new ExternalOffset<ushort>(0x00A0);                          // 0x00A0(0x0002) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<ushort>                            _offRPCId                                                      = new ExternalOffset<ushort>(0x00A2);                          // 0x00A2(0x0002) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<ushort>                            _offRPCResponseId                                              = new ExternalOffset<ushort>(0x00A4);                          // 0x00A4(0x0002) NOT AUTO-GENERATED PROPERTY
//	private ExternalOffset<char>                              _offpad_JWE1C3RB1G[2]                                          = new ExternalOffset<char>(0x00A6, false);                     // 0x00A6(0x0002) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<UProperty>                         _offFirstPropertyToInit                                        = new ExternalOffset<UProperty>(0x00A8, true);                 // 0x00A8(0x0008) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<UFunction>                         _offEventGraphFunction                                         = new ExternalOffset<UFunction>(0x00B0, true);                 // 0x00B0(0x0008) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<int>                               _offEventGraphCallOffset                                       = new ExternalOffset<int>(0x00B8);                             // 0x00B8(0x0004) NOT AUTO-GENERATED PROPERTY
//	private ExternalOffset<char>                              _offpad_8EW0JORPFS[4]                                          = new ExternalOffset<char>(0x00BC, false);                     // 0x00BC(0x0004) NOT AUTO-GENERATED PROPERTY
	private ExternalOffset<UIntPtr>                           _offFunc                                                       = new ExternalOffset<UIntPtr>(0x00C0);                         // 0x00C0(0x0008) NOT AUTO-GENERATED PROPERTY
	#endregion

	#region Props
	public int                                                FunctionFlags                                                  => _offFunctionFlags.GetValue();
	public sbyte                                              NumParms                                                       => _offNumParms.GetValue();
	public short                                              ParmsSize                                                      => _offParmsSize.GetValue();
	public ushort                                             ReturnValueOffset                                              => _offReturnValueOffset.GetValue();
	public ushort                                             RPCId                                                          => _offRPCId.GetValue();
	public ushort                                             RPCResponseId                                                  => _offRPCResponseId.GetValue();
	public UProperty                                          FirstPropertyToInit                                            => _offFirstPropertyToInit.GetValue();
	public UFunction                                          EventGraphFunction                                             => _offEventGraphFunction.GetValue();
	public int                                                EventGraphCallOffset                                           => _offEventGraphCallOffset.GetValue();
	public UIntPtr                                            Func                                                           => _offFunc.GetValue();
	#endregion


}

// Class CoreUObject.DelegateFunction
// 0x0000 (0x00C8 - 0x00C8)
public class UDelegateFunction : UFunction
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.SparseDelegateFunction
// 0x0000 (0x00C8 - 0x00C8)
public class USparseDelegateFunction : UDelegateFunction
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.DynamicClass
// 0x0168 (0x0200 - 0x0098)
public class UDynamicClass : UClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.PackageMap
// 0x0000 (0x0028 - 0x0028)
public class UPackageMap : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.Enum
// 0x0000 (0x0030 - 0x0030)
public class UEnum : UField
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.EnumProperty
// 0x0040 (0x0070 - 0x0030)
public class UEnumProperty : UProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.LinkerPlaceholderClass
// 0x0168 (0x0200 - 0x0098)
public class ULinkerPlaceholderClass : UClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.LinkerPlaceholderExportObject
// 0x0000 (0x0028 - 0x0028)
public class ULinkerPlaceholderExportObject : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.LinkerPlaceholderFunction
// 0x0000 (0x00C8 - 0x00C8)
public class ULinkerPlaceholderFunction : UFunction
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.MetaData
// 0x0000 (0x0028 - 0x0028)
public class UMetaData : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.ObjectRedirector
// 0x0000 (0x0028 - 0x0028)
public class UObjectRedirector : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.ArrayProperty
// 0x0040 (0x0070 - 0x0030)
public class UArrayProperty : UProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.BoolProperty
// 0x0040 (0x0070 - 0x0030)
public class UBoolProperty : UProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.ByteProperty
// 0x0000 (0x0070 - 0x0070)
public class UByteProperty : UNumericProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.ObjectProperty
// 0x0008 (0x0078 - 0x0070)
public class UObjectProperty : UObjectPropertyBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.ClassProperty
// 0x0000 (0x0078 - 0x0078)
public class UClassProperty : UObjectProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.DelegateProperty
// 0x0040 (0x0070 - 0x0030)
public class UDelegateProperty : UProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.DoubleProperty
// 0x0000 (0x0070 - 0x0070)
public class UDoubleProperty : UNumericProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.FloatProperty
// 0x0000 (0x0070 - 0x0070)
public class UFloatProperty : UNumericProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.IntProperty
// 0x0000 (0x0070 - 0x0070)
public class UIntProperty : UNumericProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.Int16Property
// 0x0000 (0x0070 - 0x0070)
public class UInt16Property : UNumericProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.Int64Property
// 0x0000 (0x0070 - 0x0070)
public class UInt64Property : UNumericProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.Int8Property
// 0x0000 (0x0070 - 0x0070)
public class UInt8Property : UNumericProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.InterfaceProperty
// 0x0040 (0x0070 - 0x0030)
public class UInterfaceProperty : UProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.LazyObjectProperty
// 0x0008 (0x0078 - 0x0070)
public class ULazyObjectProperty : UObjectPropertyBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.MapProperty
// 0x0040 (0x0070 - 0x0030)
public class UMapProperty : UProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.MulticastDelegateProperty
// 0x0040 (0x0070 - 0x0030)
public class UMulticastDelegateProperty : UProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.MulticastInlineDelegateProperty
// 0x0008 (0x0078 - 0x0070)
public class UMulticastInlineDelegateProperty : UMulticastDelegateProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.MulticastSparseDelegateProperty
// 0x0008 (0x0078 - 0x0070)
public class UMulticastSparseDelegateProperty : UMulticastDelegateProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.NameProperty
// 0x0040 (0x0070 - 0x0030)
public class UNameProperty : UProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class CoreUObject.SetProperty
// 0x0040 (0x0070 - 0x0030)
public class USetProperty : UProperty
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}


}