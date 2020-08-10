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

// ScriptStruct BuildPatchServices.CustomFieldData
// 0x0020
public class FCustomFieldData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offKey                                                        = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offValue                                                      = new ExternalOffset<FString>(0x0010, false);                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             Key                                                            => _offKey.GetValue();
	public FString                                             Value                                                          => _offValue.GetValue();
	#endregion

	public FCustomFieldData(FString c_Key, FString c_Value) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offKey.SetValue(c_Key);
		_offValue.SetValue(c_Value);
	}
}
// ScriptStruct BuildPatchServices.SHAHashData
// 0x0014
public class FSHAHashData : ExternalClass
{
	#region Offsets
//	private ExternalOffset<char>                               _offHash[0x14]                                                 = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	#endregion

	public FSHAHashData() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct BuildPatchServices.ChunkPartData
// 0x0018
public class FChunkPartData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGuid>                              _offGuid                                                       = new ExternalOffset<FGuid>(0x0000, false);                    // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<uint>                               _offOffset                                                     = new ExternalOffset<uint>(0x0010);                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<uint>                               _offSize                                                       = new ExternalOffset<uint>(0x0014);                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGuid                                               Guid                                                           => _offGuid.GetValue();
	public uint                                                Offset                                                         => _offOffset.GetValue();
	public uint                                                Size                                                           => _offSize.GetValue();
	#endregion

	public FChunkPartData(FGuid c_Guid, uint c_Offset, uint c_Size) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGuid.SetValue(c_Guid);
		_offOffset.SetValue(c_Offset);
		_offSize.SetValue(c_Size);
	}
}
// ScriptStruct BuildPatchServices.ChunkInfoData
// 0x0040
public class FChunkInfoData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGuid>                              _offGuid                                                       = new ExternalOffset<FGuid>(0x0000, false);                    // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ulong>                              _offHash                                                       = new ExternalOffset<ulong>(0x0010);                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSHAHashData>                       _offShaHash                                                    = new ExternalOffset<FSHAHashData>(0x0018, false);             // 0x0018(0x0014) (NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<long>                               _offFileSize                                                   = new ExternalOffset<long>(0x0030);                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offGroupNumber                                                = new ExternalOffset<char>(0x0038, false);                     // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGuid                                               Guid                                                           => _offGuid.GetValue();
	public ulong                                               Hash                                                           => _offHash.GetValue();
	public FSHAHashData                                        ShaHash                                                        => _offShaHash.GetValue();
	public long                                                FileSize                                                       => _offFileSize.GetValue();
	#endregion

	public FChunkInfoData(FGuid c_Guid, ulong c_Hash, FSHAHashData c_ShaHash, long c_FileSize) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGuid.SetValue(c_Guid);
		_offHash.SetValue(c_Hash);
		_offShaHash.SetValue(c_ShaHash);
		_offFileSize.SetValue(c_FileSize);
	}
}
// ScriptStruct BuildPatchServices.FileManifestData
// 0x0068
public class FFileManifestData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offFilename                                                   = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSHAHashData>                       _offFileHash                                                   = new ExternalOffset<FSHAHashData>(0x0010, false);             // 0x0010(0x0014) (NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FChunkPartData>>             _offFileChunkParts                                             = new ExternalOffset<TArray<FChunkPartData>>(0x0028, false);   // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FString>>                    _offInstallTags                                                = new ExternalOffset<TArray<FString>>(0x0038, false);          // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsUnixExecutable                                          = new ExternalOffset<byte/*(bool)*/>(0x0048);                  // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offSymlinkTarget                                              = new ExternalOffset<FString>(0x0050, false);                  // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsReadOnly                                                = new ExternalOffset<byte/*(bool)*/>(0x0060);                  // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsCompressed                                              = new ExternalOffset<byte/*(bool)*/>(0x0061);                  // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             Filename                                                       => _offFilename.GetValue();
	public FSHAHashData                                        FileHash                                                       => _offFileHash.GetValue();
	public TArray<FChunkPartData>                              FileChunkParts                                                 => _offFileChunkParts.GetValue();
	public TArray<FString>                                     InstallTags                                                    => _offInstallTags.GetValue();
	public byte/*(bool)*/                                      bIsUnixExecutable                                              => _offbIsUnixExecutable.GetValue();
	public FString                                             SymlinkTarget                                                  => _offSymlinkTarget.GetValue();
	public byte/*(bool)*/                                      bIsReadOnly                                                    => _offbIsReadOnly.GetValue();
	public byte/*(bool)*/                                      bIsCompressed                                                  => _offbIsCompressed.GetValue();
	#endregion

	public FFileManifestData(FString c_Filename, FSHAHashData c_FileHash, TArray<FChunkPartData> c_FileChunkParts, TArray<FString> c_InstallTags, byte/*(bool)*/ c_bIsUnixExecutable, FString c_SymlinkTarget, byte/*(bool)*/ c_bIsReadOnly, byte/*(bool)*/ c_bIsCompressed) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFilename.SetValue(c_Filename);
		_offFileHash.SetValue(c_FileHash);
		_offFileChunkParts.SetValue(c_FileChunkParts);
		_offInstallTags.SetValue(c_InstallTags);
		_offbIsUnixExecutable.SetValue(c_bIsUnixExecutable);
		_offSymlinkTarget.SetValue(c_SymlinkTarget);
		_offbIsReadOnly.SetValue(c_bIsReadOnly);
		_offbIsCompressed.SetValue(c_bIsCompressed);
	}
}

}