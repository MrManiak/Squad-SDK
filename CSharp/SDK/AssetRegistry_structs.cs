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

// ScriptStruct AssetRegistry.AssetBundleEntry
// 0x0028
public class FAssetBundleEntry : ExternalClass
{
	#region Offsets
	private ExternalOffset<FPrimaryAssetId>                    _offBundleScope                                                = new ExternalOffset<FPrimaryAssetId>(0x0000, false);          // 0x0000(0x0010) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offBundleName                                                 = new ExternalOffset<FName>(0x0010, false);                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FSoftObjectPath>>            _offBundleAssets                                               = new ExternalOffset<TArray<FSoftObjectPath>>(0x0018, false);  // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPrimaryAssetId                                     BundleScope                                                    => _offBundleScope.GetValue();
	public FName                                               BundleName                                                     => _offBundleName.GetValue();
	public TArray<FSoftObjectPath>                             BundleAssets                                                   => _offBundleAssets.GetValue();
	#endregion

	public FAssetBundleEntry(FPrimaryAssetId c_BundleScope, FName c_BundleName, TArray<FSoftObjectPath> c_BundleAssets) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBundleScope.SetValue(c_BundleScope);
		_offBundleName.SetValue(c_BundleName);
		_offBundleAssets.SetValue(c_BundleAssets);
	}
}
// ScriptStruct AssetRegistry.TagAndValue
// 0x0018
public class FTagAndValue : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offTag                                                        = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offValue                                                      = new ExternalOffset<FString>(0x0008, false);                  // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               Tag                                                            => _offTag.GetValue();
	public FString                                             Value                                                          => _offValue.GetValue();
	#endregion

	public FTagAndValue(FName c_Tag, FString c_Value) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTag.SetValue(c_Tag);
		_offValue.SetValue(c_Value);
	}
}
// ScriptStruct AssetRegistry.AssetData
// 0x0050
public class FAssetData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offObjectPath                                                 = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offPackageName                                                = new ExternalOffset<FName>(0x0008, false);                    // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offPackagePath                                                = new ExternalOffset<FName>(0x0010, false);                    // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offAssetName                                                  = new ExternalOffset<FName>(0x0018, false);                    // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offAssetClass                                                 = new ExternalOffset<FName>(0x0020, false);                    // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               ObjectPath                                                     => _offObjectPath.GetValue();
	public FName                                               PackageName                                                    => _offPackageName.GetValue();
	public FName                                               PackagePath                                                    => _offPackagePath.GetValue();
	public FName                                               AssetName                                                      => _offAssetName.GetValue();
	public FName                                               AssetClass                                                     => _offAssetClass.GetValue();
	#endregion

	public FAssetData(FName c_ObjectPath, FName c_PackageName, FName c_PackagePath, FName c_AssetName, FName c_AssetClass) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offObjectPath.SetValue(c_ObjectPath);
		_offPackageName.SetValue(c_PackageName);
		_offPackagePath.SetValue(c_PackagePath);
		_offAssetName.SetValue(c_AssetName);
		_offAssetClass.SetValue(c_AssetClass);
	}
}
// ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
// 0x0005
public class FAssetRegistryDependencyOptions : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbIncludeSoftPackageReferences                              = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIncludeHardPackageReferences                              = new ExternalOffset<byte/*(bool)*/>(0x0001);                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIncludeSearchableNames                                    = new ExternalOffset<byte/*(bool)*/>(0x0002);                  // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIncludeSoftManagementReferences                           = new ExternalOffset<byte/*(bool)*/>(0x0003);                  // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIncludeHardManagementReferences                           = new ExternalOffset<byte/*(bool)*/>(0x0004);                  // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bIncludeSoftPackageReferences                                  => _offbIncludeSoftPackageReferences.GetValue();
	public byte/*(bool)*/                                      bIncludeHardPackageReferences                                  => _offbIncludeHardPackageReferences.GetValue();
	public byte/*(bool)*/                                      bIncludeSearchableNames                                        => _offbIncludeSearchableNames.GetValue();
	public byte/*(bool)*/                                      bIncludeSoftManagementReferences                               => _offbIncludeSoftManagementReferences.GetValue();
	public byte/*(bool)*/                                      bIncludeHardManagementReferences                               => _offbIncludeHardManagementReferences.GetValue();
	#endregion

	public FAssetRegistryDependencyOptions(byte/*(bool)*/ c_bIncludeSoftPackageReferences, byte/*(bool)*/ c_bIncludeHardPackageReferences, byte/*(bool)*/ c_bIncludeSearchableNames, byte/*(bool)*/ c_bIncludeSoftManagementReferences, byte/*(bool)*/ c_bIncludeHardManagementReferences) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbIncludeSoftPackageReferences.SetValue(c_bIncludeSoftPackageReferences);
		_offbIncludeHardPackageReferences.SetValue(c_bIncludeHardPackageReferences);
		_offbIncludeSearchableNames.SetValue(c_bIncludeSearchableNames);
		_offbIncludeSoftManagementReferences.SetValue(c_bIncludeSoftManagementReferences);
		_offbIncludeHardManagementReferences.SetValue(c_bIncludeHardManagementReferences);
	}
}
// ScriptStruct AssetRegistry.ARFilter
// 0x00E8
public class FARFilter : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FName>>                      _offPackageNames                                               = new ExternalOffset<TArray<FName>>(0x0000, false);            // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FName>>                      _offPackagePaths                                               = new ExternalOffset<TArray<FName>>(0x0010, false);            // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FName>>                      _offObjectPaths                                                = new ExternalOffset<TArray<FName>>(0x0020, false);            // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FName>>                      _offClassNames                                                 = new ExternalOffset<TArray<FName>>(0x0030, false);            // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbRecursivePaths                                            = new ExternalOffset<byte/*(bool)*/>(0x00E0);                  // 0x00E0(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbRecursiveClasses                                          = new ExternalOffset<byte/*(bool)*/>(0x00E1);                  // 0x00E1(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIncludeOnlyOnDiskAssets                                   = new ExternalOffset<byte/*(bool)*/>(0x00E2);                  // 0x00E2(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FName>                                       PackageNames                                                   => _offPackageNames.GetValue();
	public TArray<FName>                                       PackagePaths                                                   => _offPackagePaths.GetValue();
	public TArray<FName>                                       ObjectPaths                                                    => _offObjectPaths.GetValue();
	public TArray<FName>                                       ClassNames                                                     => _offClassNames.GetValue();
	public byte/*(bool)*/                                      bRecursivePaths                                                => _offbRecursivePaths.GetValue();
	public byte/*(bool)*/                                      bRecursiveClasses                                              => _offbRecursiveClasses.GetValue();
	public byte/*(bool)*/                                      bIncludeOnlyOnDiskAssets                                       => _offbIncludeOnlyOnDiskAssets.GetValue();
	#endregion

	public FARFilter(TArray<FName> c_PackageNames, TArray<FName> c_PackagePaths, TArray<FName> c_ObjectPaths, TArray<FName> c_ClassNames, byte/*(bool)*/ c_bRecursivePaths, byte/*(bool)*/ c_bRecursiveClasses, byte/*(bool)*/ c_bIncludeOnlyOnDiskAssets) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPackageNames.SetValue(c_PackageNames);
		_offPackagePaths.SetValue(c_PackagePaths);
		_offObjectPaths.SetValue(c_ObjectPaths);
		_offClassNames.SetValue(c_ClassNames);
		_offbRecursivePaths.SetValue(c_bRecursivePaths);
		_offbRecursiveClasses.SetValue(c_bRecursiveClasses);
		_offbIncludeOnlyOnDiskAssets.SetValue(c_bIncludeOnlyOnDiskAssets);
	}
}
// ScriptStruct AssetRegistry.AssetBundleData
// 0x0010
public class FAssetBundleData : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FAssetBundleEntry>>          _offBundles                                                    = new ExternalOffset<TArray<FAssetBundleEntry>>(0x0000, false); // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FAssetBundleEntry>                           Bundles                                                        => _offBundles.GetValue();
	#endregion

	public FAssetBundleData(TArray<FAssetBundleEntry> c_Bundles) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBundles.SetValue(c_Bundles);
	}
}

}