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

// Class MediaAssets.MediaSource
// 0x0000 (0x0028 - 0x0028)
public class UMediaSource : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MediaAssets.BaseMediaSource
// 0x0010 (0x0038 - 0x0028)
public class UBaseMediaSource : UMediaSource
{
	#region Offsets
	private ExternalOffset<FName>                             _offPlayerName                                                 = new ExternalOffset<FName>(0x0030, false);                    // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FName                                              PlayerName                                                     => _offPlayerName.GetValue();
	#endregion


}

// Class MediaAssets.FileMediaSource
// 0x0011 (0x0049 - 0x0038)
public class UFileMediaSource : UBaseMediaSource
{
	#region Offsets
	private ExternalOffset<FString>                           _offFilePath                                                   = new ExternalOffset<FString>(0x0038, false);                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offPrecacheFile                                               = new ExternalOffset<byte/*(bool)*/>(0x0048);                  // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                            FilePath                                                       => _offFilePath.GetValue();
	public byte/*(bool)*/                                     PrecacheFile                                                   => _offPrecacheFile.GetValue();
	#endregion


}

// Class MediaAssets.MediaBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
public class UMediaBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MediaAssets.MediaPlayer
// 0x0108 (0x0130 - 0x0028)
public class UMediaPlayer : UObject
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnEndReached                                               = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnMediaClosed                                              = new ExternalOffset<FScriptMulticastDelegate>(0x0038, false); // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnMediaOpened                                              = new ExternalOffset<FScriptMulticastDelegate>(0x0048, false); // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnMediaOpenFailed                                          = new ExternalOffset<FScriptMulticastDelegate>(0x0058, false); // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnPlaybackResumed                                          = new ExternalOffset<FScriptMulticastDelegate>(0x0068, false); // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnPlaybackSuspended                                        = new ExternalOffset<FScriptMulticastDelegate>(0x0078, false); // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSeekCompleted                                            = new ExternalOffset<FScriptMulticastDelegate>(0x0088, false); // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnTracksChanged                                            = new ExternalOffset<FScriptMulticastDelegate>(0x0098, false); // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FTimespan>                         _offCacheAhead                                                 = new ExternalOffset<FTimespan>(0x00A8, false);                // 0x00A8(0x0008) (BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FTimespan>                         _offCacheBehind                                                = new ExternalOffset<FTimespan>(0x00B0, false);                // 0x00B0(0x0008) (BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FTimespan>                         _offCacheBehindGame                                            = new ExternalOffset<FTimespan>(0x00B8, false);                // 0x00B8(0x0008) (BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offNativeAudioOut                                             = new ExternalOffset<byte/*(bool)*/>(0x00C0);                  // 0x00C0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offPlayOnOpen                                                 = new ExternalOffset<byte/*(bool)*/>(0x00C1);                  // 0x00C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offShuffle                                                    = new ExternalOffset<char>(0x00C4, false);                     // 0x00C4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offLoop                                                       = new ExternalOffset<char>(0x00C4, false);                     // 0x00C4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UMediaPlaylist>                    _offPlaylist                                                   = new ExternalOffset<UMediaPlaylist>(0x00C8, true);            // 0x00C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offPlaylistIndex                                              = new ExternalOffset<int>(0x00D0);                             // 0x00D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FTimespan>                         _offTimeDelay                                                  = new ExternalOffset<FTimespan>(0x00D8, false);                // 0x00D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offHorizontalFieldOfView                                      = new ExternalOffset<float>(0x00E0);                           // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offVerticalFieldOfView                                        = new ExternalOffset<float>(0x00E4);                           // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FRotator>                          _offViewRotation                                               = new ExternalOffset<FRotator>(0x00E8, false);                 // 0x00E8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FGuid>                             _offPlayerGuid                                                 = new ExternalOffset<FGuid>(0x0120, false);                    // 0x0120(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnEndReached                                                   => _offOnEndReached.GetValue();
	public FScriptMulticastDelegate                           OnMediaClosed                                                  => _offOnMediaClosed.GetValue();
	public FScriptMulticastDelegate                           OnMediaOpened                                                  => _offOnMediaOpened.GetValue();
	public FScriptMulticastDelegate                           OnMediaOpenFailed                                              => _offOnMediaOpenFailed.GetValue();
	public FScriptMulticastDelegate                           OnPlaybackResumed                                              => _offOnPlaybackResumed.GetValue();
	public FScriptMulticastDelegate                           OnPlaybackSuspended                                            => _offOnPlaybackSuspended.GetValue();
	public FScriptMulticastDelegate                           OnSeekCompleted                                                => _offOnSeekCompleted.GetValue();
	public FScriptMulticastDelegate                           OnTracksChanged                                                => _offOnTracksChanged.GetValue();
	public FTimespan                                          CacheAhead                                                     => _offCacheAhead.GetValue();
	public FTimespan                                          CacheBehind                                                    => _offCacheBehind.GetValue();
	public FTimespan                                          CacheBehindGame                                                => _offCacheBehindGame.GetValue();
	public byte/*(bool)*/                                     NativeAudioOut                                                 => _offNativeAudioOut.GetValue();
	public byte/*(bool)*/                                     PlayOnOpen                                                     => _offPlayOnOpen.GetValue();
	public UMediaPlaylist                                     Playlist                                                       => _offPlaylist.GetValue();
	public int                                                PlaylistIndex                                                  => _offPlaylistIndex.GetValue();
	public FTimespan                                          TimeDelay                                                      => _offTimeDelay.GetValue();
	public float                                              HorizontalFieldOfView                                          => _offHorizontalFieldOfView.GetValue();
	public float                                              VerticalFieldOfView                                            => _offVerticalFieldOfView.GetValue();
	public FRotator                                           ViewRotation                                                   => _offViewRotation.GetValue();
	public FGuid                                              PlayerGuid                                                     => _offPlayerGuid.GetValue();
	#endregion


}

// Class MediaAssets.MediaPlaylist
// 0x0010 (0x0038 - 0x0028)
public class UMediaPlaylist : UObject
{
	#region Offsets
	private ExternalOffset<TArray<UMediaSource>>              _offItems                                                      = new ExternalOffset<TArray<UMediaSource>>(0x0028, false);     // 0x0028(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<UMediaSource>                               Items                                                          => _offItems.GetValue();
	#endregion


}

// Class MediaAssets.MediaSoundComponent
// 0x00A5 (0x0665 - 0x05C0)
public class UMediaSoundComponent : USynthComponent
{
	#region Offsets
	private ExternalOffset<EMediaSoundChannels>               _offChannels                                                   = new ExternalOffset<EMediaSoundChannels>(0x0640, false);      // 0x0640(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offDynamicRateAdjustment                                      = new ExternalOffset<byte/*(bool)*/>(0x0644);                  // 0x0644(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offRateAdjustmentFactor                                       = new ExternalOffset<float>(0x0648);                           // 0x0648(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFloatRange>                       _offRateAdjustmentRange                                        = new ExternalOffset<FFloatRange>(0x064C, false);              // 0x064C(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMediaPlayer>                      _offMediaPlayer                                                = new ExternalOffset<UMediaPlayer>(0x0660, true);              // 0x0660(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public EMediaSoundChannels                                Channels                                                       => _offChannels.GetValue();
	public byte/*(bool)*/                                     DynamicRateAdjustment                                          => _offDynamicRateAdjustment.GetValue();
	public float                                              RateAdjustmentFactor                                           => _offRateAdjustmentFactor.GetValue();
	public FFloatRange                                        RateAdjustmentRange                                            => _offRateAdjustmentRange.GetValue();
	public UMediaPlayer                                       MediaPlayer                                                    => _offMediaPlayer.GetValue();
	#endregion


}

// Class MediaAssets.MediaTexture
// 0x0078 (0x00F0 - 0x0078)
public class UMediaTexture : UTexture
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<ETextureAddress>>      _offAddressX                                                   = new ExternalOffset<TEnumAsByte<ETextureAddress>>(0x00D0, false); // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ETextureAddress>>      _offAddressY                                                   = new ExternalOffset<TEnumAsByte<ETextureAddress>>(0x00D1, false); // 0x00D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offAutoClear                                                  = new ExternalOffset<byte/*(bool)*/>(0x00D2);                  // 0x00D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offClearColor                                                 = new ExternalOffset<FLinearColor>(0x00D4, false);             // 0x00D4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMediaPlayer>                      _offMediaPlayer                                                = new ExternalOffset<UMediaPlayer>(0x00E8, true);              // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TEnumAsByte<ETextureAddress>                       AddressX                                                       => _offAddressX.GetValue();
	public TEnumAsByte<ETextureAddress>                       AddressY                                                       => _offAddressY.GetValue();
	public byte/*(bool)*/                                     AutoClear                                                      => _offAutoClear.GetValue();
	public FLinearColor                                       ClearColor                                                     => _offClearColor.GetValue();
	public UMediaPlayer                                       MediaPlayer                                                    => _offMediaPlayer.GetValue();
	#endregion


}

// Class MediaAssets.PlatformMediaSource
// 0x0010 (0x0038 - 0x0028)
public class UPlatformMediaSource : UMediaSource
{
	#region Offsets
	private ExternalOffset<UMediaSource>                      _offMediaSource                                                = new ExternalOffset<UMediaSource>(0x0030, true);              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UMediaSource                                       MediaSource                                                    => _offMediaSource.GetValue();
	#endregion


}

// Class MediaAssets.StreamMediaSource
// 0x0010 (0x0048 - 0x0038)
public class UStreamMediaSource : UBaseMediaSource
{
	#region Offsets
	private ExternalOffset<FString>                           _offStreamUrl                                                  = new ExternalOffset<FString>(0x0038, false);                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                            StreamUrl                                                      => _offStreamUrl.GetValue();
	#endregion


}

// Class MediaAssets.TimeSynchronizableMediaSource
// 0x0001 (0x0039 - 0x0038)
public class UTimeSynchronizableMediaSource : UBaseMediaSource
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbUseTimeSynchronization                                    = new ExternalOffset<byte/*(bool)*/>(0x0038);                  // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bUseTimeSynchronization                                        => _offbUseTimeSynchronization.GetValue();
	#endregion


}


}