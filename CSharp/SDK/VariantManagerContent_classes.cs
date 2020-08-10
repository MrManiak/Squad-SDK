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

// Class VariantManagerContent.LevelVariantSets
// 0x0018 (0x0040 - 0x0028)
public class ULevelVariantSets : UObject
{
	#region Offsets
	private ExternalOffset<UBlueprintGeneratedClass>          _offDirectorClass                                              = new ExternalOffset<UBlueprintGeneratedClass>(0x0028, true);  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<UVariantSet>>               _offVariantSets                                                = new ExternalOffset<TArray<UVariantSet>>(0x0030, false);      // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UBlueprintGeneratedClass                           DirectorClass                                                  => _offDirectorClass.GetValue();
	public TArray<UVariantSet>                                VariantSets                                                    => _offVariantSets.GetValue();
	#endregion


}

// Class VariantManagerContent.LevelVariantSetsActor
// 0x0028 (0x0260 - 0x0238)
public class ALevelVariantSetsActor : AActor
{
	#region Offsets
	private ExternalOffset<FSoftObjectPath>                   _offLevelVariantSets                                           = new ExternalOffset<FSoftObjectPath>(0x0248, false);          // 0x0248(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSoftObjectPath                                    LevelVariantSets                                               => _offLevelVariantSets.GetValue();
	#endregion


}

// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// 0x0000 (0x0028 - 0x0028)
public class ULevelVariantSetsFunctionDirector : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class VariantManagerContent.PropertyValue
// 0x0111 (0x0139 - 0x0028)
public class UPropertyValue : UObject
{
	#region Offsets
	private ExternalOffset<TArray<UProperty>>                 _offProperties                                                 = new ExternalOffset<TArray<UProperty>>(0x0080, false);        // 0x0080(0x0010) (ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<int>>                       _offPropertyIndices                                            = new ExternalOffset<TArray<int>>(0x0090, false);              // 0x0090(0x0010) (ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<FCapturedPropSegment>>      _offCapturedPropSegments                                       = new ExternalOffset<TArray<FCapturedPropSegment>>(0x00A0, false); // 0x00A0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FString>                           _offFullDisplayString                                          = new ExternalOffset<FString>(0x00B0, false);                  // 0x00B0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FName>                             _offPropertySetterName                                         = new ExternalOffset<FName>(0x00C0, false);                    // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private TMap<struct FString, struct FString>              _offPropertySetterParameterDefaults                            = new ExternalOffset<TMap<FString>>(0x00C8, false);            // 0x00C8(0x0050) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbHasRecordedData                                           = new ExternalOffset<byte/*(bool)*/>(0x0118);                  // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UClass>                            _offLeafPropertyClass                                          = new ExternalOffset<UClass>(0x0120, true);                    // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<char>>                      _offValueBytes                                                 = new ExternalOffset<TArray<char>>(0x0128, false);             // 0x0128(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<EPropertyValueCategory>            _offPropCategory                                               = new ExternalOffset<EPropertyValueCategory>(0x0138, false);   // 0x0138(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<UProperty>                                  Properties                                                     => _offProperties.GetValue();
	public TArray<int>                                        PropertyIndices                                                => _offPropertyIndices.GetValue();
	public TArray<FCapturedPropSegment>                       CapturedPropSegments                                           => _offCapturedPropSegments.GetValue();
	public FString                                            FullDisplayString                                              => _offFullDisplayString.GetValue();
	public FName                                              PropertySetterName                                             => _offPropertySetterName.GetValue();
	public byte/*(bool)*/                                     bHasRecordedData                                               => _offbHasRecordedData.GetValue();
	public UClass                                             LeafPropertyClass                                              => _offLeafPropertyClass.GetValue();
	public TArray<char>                                       ValueBytes                                                     => _offValueBytes.GetValue();
	public EPropertyValueCategory                             PropCategory                                                   => _offPropCategory.GetValue();
	#endregion


}

// Class VariantManagerContent.PropertyValueTransform
// 0x006F (0x01A8 - 0x0139)
public class UPropertyValueTransform : UPropertyValue
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class VariantManagerContent.PropertyValueVisibility
// 0x006F (0x01A8 - 0x0139)
public class UPropertyValueVisibility : UPropertyValue
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class VariantManagerContent.PropertyValueColor
// 0x006F (0x01A8 - 0x0139)
public class UPropertyValueColor : UPropertyValue
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class VariantManagerContent.PropertyValueMaterial
// 0x006F (0x01A8 - 0x0139)
public class UPropertyValueMaterial : UPropertyValue
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class VariantManagerContent.Variant
// 0x0040 (0x0068 - 0x0028)
public class UVariant : UObject
{
	#region Offsets
	private ExternalOffset<FText>                             _offDisplayText                                                = new ExternalOffset<FText>(0x0028, false);                    // 0x0028(0x0018) (Deprecated, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<UVariantObjectBinding>>     _offObjectBindings                                             = new ExternalOffset<TArray<UVariantObjectBinding>>(0x0058, false); // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FText                                              DisplayText                                                    => _offDisplayText.GetValue();
	public TArray<UVariantObjectBinding>                      ObjectBindings                                                 => _offObjectBindings.GetValue();
	#endregion


}

// Class VariantManagerContent.VariantObjectBinding
// 0x0058 (0x0080 - 0x0028)
public class UVariantObjectBinding : UObject
{
	#region Offsets
	private ExternalOffset<FSoftObjectPath>                   _offObjectPtr                                                  = new ExternalOffset<FSoftObjectPath>(0x0028, false);          // 0x0028(0x0018) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TLazyObjectPtr<UObject>>           _offLazyObjectPtr                                              = new ExternalOffset<TLazyObjectPtr<UObject>>(0x0040, false);  // 0x0040(0x001C) (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<UPropertyValue>>            _offCapturedProperties                                         = new ExternalOffset<TArray<UPropertyValue>>(0x0060, false);   // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FFunctionCaller>>           _offFunctionCallers                                            = new ExternalOffset<TArray<FFunctionCaller>>(0x0070, false);  // 0x0070(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FSoftObjectPath                                    ObjectPtr                                                      => _offObjectPtr.GetValue();
	public TLazyObjectPtr<UObject>                            LazyObjectPtr                                                  => _offLazyObjectPtr.GetValue();
	public TArray<UPropertyValue>                             CapturedProperties                                             => _offCapturedProperties.GetValue();
	public TArray<FFunctionCaller>                            FunctionCallers                                                => _offFunctionCallers.GetValue();
	#endregion


}

// Class VariantManagerContent.VariantSet
// 0x0048 (0x0070 - 0x0028)
public class UVariantSet : UObject
{
	#region Offsets
	private ExternalOffset<FText>                             _offDisplayText                                                = new ExternalOffset<FText>(0x0028, false);                    // 0x0028(0x0018) (Deprecated, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offbExpanded                                                  = new ExternalOffset<byte/*(bool)*/>(0x0058);                  // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<UVariant>>                  _offVariants                                                   = new ExternalOffset<TArray<UVariant>>(0x0060, false);         // 0x0060(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FText                                              DisplayText                                                    => _offDisplayText.GetValue();
	public byte/*(bool)*/                                     bExpanded                                                      => _offbExpanded.GetValue();
	public TArray<UVariant>                                   Variants                                                       => _offVariants.GetValue();
	#endregion


}


}