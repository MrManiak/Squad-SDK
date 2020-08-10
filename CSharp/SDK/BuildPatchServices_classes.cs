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

// Class BuildPatchServices.BuildPatchManifest
// 0x00A8 (0x00D0 - 0x0028)
public class UBuildPatchManifest : UObject
{
	#region Offsets
//	private ExternalOffset<char>                              _offManifestFileVersion                                        = new ExternalOffset<char>(0x0028, false);                     // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsFileData                                                = new ExternalOffset<byte/*(bool)*/>(0x0029);                  // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<uint>                              _offAppID                                                      = new ExternalOffset<uint>(0x002C);                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offAppName                                                    = new ExternalOffset<FString>(0x0030, false);                  // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offBuildVersion                                               = new ExternalOffset<FString>(0x0040, false);                  // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offLaunchExe                                                  = new ExternalOffset<FString>(0x0050, false);                  // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offLaunchCommand                                              = new ExternalOffset<FString>(0x0060, false);                  // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offPrereqName                                                 = new ExternalOffset<FString>(0x00C0, false);                  // 0x00C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offPrereqPath                                                 = new ExternalOffset<FString>(0x00D0, false);                  // 0x00D0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offPrereqArgs                                                 = new ExternalOffset<FString>(0x00E0, false);                  // 0x00E0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FFileManifestData>>         _offFileManifestList                                           = new ExternalOffset<TArray<FFileManifestData>>(0x00F0, false); // 0x00F0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FChunkInfoData>>            _offChunkList                                                  = new ExternalOffset<TArray<FChunkInfoData>>(0x0100, false);   // 0x0100(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FCustomFieldData>>          _offCustomFields                                               = new ExternalOffset<TArray<FCustomFieldData>>(0x0110, false); // 0x0110(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bIsFileData                                                    => _offbIsFileData.GetValue();
	public uint                                               AppID                                                          => _offAppID.GetValue();
	public FString                                            AppName                                                        => _offAppName.GetValue();
	public FString                                            BuildVersion                                                   => _offBuildVersion.GetValue();
	public FString                                            LaunchExe                                                      => _offLaunchExe.GetValue();
	public FString                                            LaunchCommand                                                  => _offLaunchCommand.GetValue();
	public FString                                            PrereqName                                                     => _offPrereqName.GetValue();
	public FString                                            PrereqPath                                                     => _offPrereqPath.GetValue();
	public FString                                            PrereqArgs                                                     => _offPrereqArgs.GetValue();
	public TArray<FFileManifestData>                          FileManifestList                                               => _offFileManifestList.GetValue();
	public TArray<FChunkInfoData>                             ChunkList                                                      => _offChunkList.GetValue();
	public TArray<FCustomFieldData>                           CustomFields                                                   => _offCustomFields.GetValue();
	#endregion


}


}