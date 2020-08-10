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

// Class ImgMediaFactory.ImgMediaSettings
// 0x0039 (0x0061 - 0x0028)
public class UImgMediaSettings : UObject
{
	#region Offsets
	private ExternalOffset<FFrameRate>                        _offDefaultFrameRate                                           = new ExternalOffset<FFrameRate>(0x0028, false);               // 0x0028(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCacheBehindPercentage                                      = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCacheSizeGB                                                = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offCacheThreads                                               = new ExternalOffset<int>(0x0038);                             // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offCacheThreadStackSizeKB                                     = new ExternalOffset<int>(0x003C);                             // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offGlobalCacheSizeGB                                          = new ExternalOffset<float>(0x0040);                           // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offUseGlobalCache                                             = new ExternalOffset<byte/*(bool)*/>(0x0044);                  // 0x0044(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<uint>                              _offExrDecoderThreads                                          = new ExternalOffset<uint>(0x0048);                            // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offDefaultProxy                                               = new ExternalOffset<FString>(0x0050, false);                  // 0x0050(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offUseDefaultProxy                                            = new ExternalOffset<byte/*(bool)*/>(0x0060);                  // 0x0060(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FFrameRate                                         DefaultFrameRate                                               => _offDefaultFrameRate.GetValue();
	public float                                              CacheBehindPercentage                                          => _offCacheBehindPercentage.GetValue();
	public float                                              CacheSizeGB                                                    => _offCacheSizeGB.GetValue();
	public int                                                CacheThreads                                                   => _offCacheThreads.GetValue();
	public int                                                CacheThreadStackSizeKB                                         => _offCacheThreadStackSizeKB.GetValue();
	public float                                              GlobalCacheSizeGB                                              => _offGlobalCacheSizeGB.GetValue();
	public byte/*(bool)*/                                     UseGlobalCache                                                 => _offUseGlobalCache.GetValue();
	public uint                                               ExrDecoderThreads                                              => _offExrDecoderThreads.GetValue();
	public FString                                            DefaultProxy                                                   => _offDefaultProxy.GetValue();
	public byte/*(bool)*/                                     UseDefaultProxy                                                => _offUseDefaultProxy.GetValue();
	#endregion


}


}