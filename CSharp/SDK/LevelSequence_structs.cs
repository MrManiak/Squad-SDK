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

// ScriptStruct LevelSequence.BoundActorProxy
// 0x0001
public class FBoundActorProxy : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FBoundActorProxy() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// 0x000C
public class FLevelSequenceSnapshotSettings : ExternalClass
{
	#region Offsets
//	private ExternalOffset<char>                               _offZeroPadAmount                                              = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameRate>                         _offFrameRate                                                  = new ExternalOffset<FFrameRate>(0x0004, false);               // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FFrameRate                                          FrameRate                                                      => _offFrameRate.GetValue();
	#endregion

	public FLevelSequenceSnapshotSettings(FFrameRate c_FrameRate) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFrameRate.SetValue(c_FrameRate);
	}
}
// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// 0x0050
public class FLevelSequenceObjectReferenceMap : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FLevelSequenceObjectReferenceMap() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct LevelSequence.LevelSequenceBindingReference
// 0x0038
public class FLevelSequenceBindingReference : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offPackageName                                                = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FSoftObjectPath>                    _offExternalObjectPath                                         = new ExternalOffset<FSoftObjectPath>(0x0010, false);          // 0x0010(0x0018) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                            _offObjectPath                                                 = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FString                                             PackageName                                                    => _offPackageName.GetValue();
	public FSoftObjectPath                                     ExternalObjectPath                                             => _offExternalObjectPath.GetValue();
	public FString                                             ObjectPath                                                     => _offObjectPath.GetValue();
	#endregion

	public FLevelSequenceBindingReference(FString c_PackageName, FSoftObjectPath c_ExternalObjectPath, FString c_ObjectPath) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPackageName.SetValue(c_PackageName);
		_offExternalObjectPath.SetValue(c_ExternalObjectPath);
		_offObjectPath.SetValue(c_ObjectPath);
	}
}
// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
// 0x0010
public class FLevelSequenceBindingReferenceArray : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FLevelSequenceBindingReference>> _offReferences                                                 = new ExternalOffset<TArray<FLevelSequenceBindingReference>>(0x0000, false); // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FLevelSequenceBindingReference>              References                                                     => _offReferences.GetValue();
	#endregion

	public FLevelSequenceBindingReferenceArray(TArray<FLevelSequenceBindingReference> c_References) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offReferences.SetValue(c_References);
	}
}
// ScriptStruct LevelSequence.LevelSequenceBindingReferences
// 0x00A0
public class FLevelSequenceBindingReferences : ExternalClass
{
	#region Offsets
//	private TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> _offBindingIdToReferences                                      = new ExternalOffset<TMap<FLevelSequenceBindingReferenceArray>>(0x0000, false); // 0x0000(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	#endregion

	public FLevelSequenceBindingReferences() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
// 0x0020
public class FLevelSequenceLegacyObjectReference : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FLevelSequenceLegacyObjectReference() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct LevelSequence.LevelSequenceObject
// 0x0038
public class FLevelSequenceObject : ExternalClass
{
	#region Offsets
	private ExternalOffset<TLazyObjectPtr<UObject>>            _offObjectOrOwner                                              = new ExternalOffset<TLazyObjectPtr<UObject>>(0x0000, false);  // 0x0000(0x001C) (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                            _offComponentName                                              = new ExternalOffset<FString>(0x0020, false);                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TWeakObjectPtr<UObject>>            _offCachedComponent                                            = new ExternalOffset<TWeakObjectPtr<UObject>>(0x0030, false);  // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TLazyObjectPtr<UObject>                             ObjectOrOwner                                                  => _offObjectOrOwner.GetValue();
	public FString                                             ComponentName                                                  => _offComponentName.GetValue();
	public TWeakObjectPtr<UObject>                             CachedComponent                                                => _offCachedComponent.GetValue();
	#endregion

	public FLevelSequenceObject(TLazyObjectPtr<UObject> c_ObjectOrOwner, FString c_ComponentName, TWeakObjectPtr<UObject> c_CachedComponent) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offObjectOrOwner.SetValue(c_ObjectOrOwner);
		_offComponentName.SetValue(c_ComponentName);
		_offCachedComponent.SetValue(c_CachedComponent);
	}
}
// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// 0x00B8
public class FLevelSequencePlayerSnapshot : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offMasterName                                                 = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FQualifiedFrameTime>                _offMasterTime                                                 = new ExternalOffset<FQualifiedFrameTime>(0x0010, false);      // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FQualifiedFrameTime>                _offSourceTime                                                 = new ExternalOffset<FQualifiedFrameTime>(0x0020, false);      // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offCurrentShotName                                            = new ExternalOffset<FString>(0x0030, false);                  // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FQualifiedFrameTime>                _offCurrentShotLocalTime                                       = new ExternalOffset<FQualifiedFrameTime>(0x0040, false);      // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FQualifiedFrameTime>                _offCurrentShotSourceTime                                      = new ExternalOffset<FQualifiedFrameTime>(0x0050, false);      // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offSourceTimecode                                             = new ExternalOffset<FString>(0x0060, false);                  // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLevelSequenceSnapshotSettings>     _offSettings                                                   = new ExternalOffset<FLevelSequenceSnapshotSettings>(0x0098, false); // 0x0098(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<ULevelSequence>                     _offActiveShot                                                 = new ExternalOffset<ULevelSequence>(0x00A8, true);            // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneSequenceID>              _offShotID                                                     = new ExternalOffset<FMovieSceneSequenceID>(0x00B0, false);    // 0x00B0(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             MasterName                                                     => _offMasterName.GetValue();
	public FQualifiedFrameTime                                 MasterTime                                                     => _offMasterTime.GetValue();
	public FQualifiedFrameTime                                 SourceTime                                                     => _offSourceTime.GetValue();
	public FString                                             CurrentShotName                                                => _offCurrentShotName.GetValue();
	public FQualifiedFrameTime                                 CurrentShotLocalTime                                           => _offCurrentShotLocalTime.GetValue();
	public FQualifiedFrameTime                                 CurrentShotSourceTime                                          => _offCurrentShotSourceTime.GetValue();
	public FString                                             SourceTimecode                                                 => _offSourceTimecode.GetValue();
	public FLevelSequenceSnapshotSettings                      Settings                                                       => _offSettings.GetValue();
	public ULevelSequence                                      ActiveShot                                                     => _offActiveShot.GetValue();
	public FMovieSceneSequenceID                               ShotID                                                         => _offShotID.GetValue();
	#endregion

	public FLevelSequencePlayerSnapshot(FString c_MasterName, FQualifiedFrameTime c_MasterTime, FQualifiedFrameTime c_SourceTime, FString c_CurrentShotName, FQualifiedFrameTime c_CurrentShotLocalTime, FQualifiedFrameTime c_CurrentShotSourceTime, FString c_SourceTimecode, FLevelSequenceSnapshotSettings c_Settings, ULevelSequence c_ActiveShot, FMovieSceneSequenceID c_ShotID) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMasterName.SetValue(c_MasterName);
		_offMasterTime.SetValue(c_MasterTime);
		_offSourceTime.SetValue(c_SourceTime);
		_offCurrentShotName.SetValue(c_CurrentShotName);
		_offCurrentShotLocalTime.SetValue(c_CurrentShotLocalTime);
		_offCurrentShotSourceTime.SetValue(c_CurrentShotSourceTime);
		_offSourceTimecode.SetValue(c_SourceTimecode);
		_offSettings.SetValue(c_Settings);
		_offActiveShot.SetValue(c_ActiveShot);
		_offShotID.SetValue(c_ShotID);
	}
}

}