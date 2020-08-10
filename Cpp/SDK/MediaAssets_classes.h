#pragma once

// Name: Sq, Version: b21


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class MediaAssets.MediaSource
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UMediaSource : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaSource");
		return ptr;
	}


	bool Validate();
	struct FString GetUrl();
};

// Class MediaAssets.BaseMediaSource
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_01EE - 0x0000 // Minimum to subtract -> (0008)
class UBaseMediaSource : public UMediaSource
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_01EE, struct FName,                                                          PlayerName);                                               // 0x0030(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.BaseMediaSource");
		return ptr;
	}


};

// Class MediaAssets.FileMediaSource
// 0x0011 (FullSize[0x0049] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_01F2 - 0x0000 // Minimum to subtract -> (0000)
class UFileMediaSource : public UBaseMediaSource
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_01F2, struct FString,                                                        FilePath);                                                 // 0x0038(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_01F2, bool,                                                                  PrecacheFile);                                             // 0x0048(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.FileMediaSource");
		return ptr;
	}


	void SetFilePath(const struct FString& Path);
};

// Class MediaAssets.MediaBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaBlueprintFunctionLibrary");
		return ptr;
	}


	static void STATIC_EnumerateWebcamCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter);
	static void STATIC_EnumerateVideoCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter);
	static void STATIC_EnumerateAudioCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter);
};

// Class MediaAssets.MediaPlayer
// 0x0108 (FullSize[0x0130] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_01F7 - 0x0000 // Minimum to subtract -> (0000)
class UMediaPlayer : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_01F7, struct FScriptMulticastDelegate,                                       OnEndReached);                                             // 0x0028(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_01F7, struct FScriptMulticastDelegate,                                       OnMediaClosed);                                            // 0x0038(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_01F7, struct FScriptMulticastDelegate,                                       OnMediaOpened);                                            // 0x0048(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_01F7, struct FScriptMulticastDelegate,                                       OnMediaOpenFailed);                                        // 0x0058(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_01F7, struct FScriptMulticastDelegate,                                       OnPlaybackResumed);                                        // 0x0068(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_01F7, struct FScriptMulticastDelegate,                                       OnPlaybackSuspended);                                      // 0x0078(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_01F7, struct FScriptMulticastDelegate,                                       OnSeekCompleted);                                          // 0x0088(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0070 PADDING_01F7, struct FScriptMulticastDelegate,                                       OnTracksChanged);                                          // 0x0098(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_01F7, struct FTimespan,                                                      CacheAhead);                                               // 0x00A8(0x0008)  (BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0088 PADDING_01F7, struct FTimespan,                                                      CacheBehind);                                              // 0x00B0(0x0008)  (BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0090 PADDING_01F7, struct FTimespan,                                                      CacheBehindGame);                                          // 0x00B8(0x0008)  (BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0098 PADDING_01F7, bool,                                                                  NativeAudioOut);                                           // 0x00C0(0x0001)  (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0099 PADDING_01F7, bool,                                                                  PlayOnOpen);                                               // 0x00C1(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x009C PADDING_01F7, unsigned char,                                                         Shuffle);                                                  // 0x00C4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x009C PADDING_01F7, unsigned char,                                                         Loop);                                                     // 0x00C4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_01F7, class UMediaPlaylist*,                                                 Playlist);                                                 // 0x00C8(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_01F7, int,                                                                   PlaylistIndex);                                            // 0x00D0(0x0004)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_01F7, struct FTimespan,                                                      TimeDelay);                                                // 0x00D8(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_01F7, float,                                                                 HorizontalFieldOfView);                                    // 0x00E0(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00BC PADDING_01F7, float,                                                                 VerticalFieldOfView);                                      // 0x00E4(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_01F7, struct FRotator,                                                       ViewRotation);                                             // 0x00E8(0x000C)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_01F7, struct FGuid,                                                          PlayerGuid);                                               // 0x0120(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaPlayer");
		return ptr;
	}


	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float Rate, bool Unthinned);
	bool SetViewRotation(const struct FRotator& Rotation, bool Absolute);
	bool SetViewField(float Horizontal, float Vertical, bool Absolute);
	bool SetVideoTrackFrameRate(int TrackIndex, int FormatIndex, float FrameRate);
	bool SetTrackFormat(EMediaPlayerTrack TrackType, int TrackIndex, int FormatIndex);
	void SetTimeDelay(const struct FTimespan& TimeDelay);
	bool SetRate(float Rate);
	bool SetNativeVolume(float Volume);
	bool SetLooping(bool Looping);
	void SetDesiredPlayerName(const struct FName& PlayerName);
	void SetBlockOnTime(const struct FTimespan& Time);
	bool SelectTrack(EMediaPlayerTrack TrackType, int TrackIndex);
	bool Seek(const struct FTimespan& Time);
	bool Rewind();
	bool Reopen();
	bool Previous();
	bool Play();
	bool Pause();
	bool OpenUrl(const struct FString& URL);
	bool OpenSourceWithOptions(class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options);
	void OpenSourceLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options, bool* bSuccess);
	bool OpenSource(class UMediaSource* MediaSource);
	bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int Index);
	bool OpenPlaylist(class UMediaPlaylist* InPlaylist);
	bool OpenFile(const struct FString& FilePath);
	bool Next();
	bool IsReady();
	bool IsPreparing();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	bool IsConnecting();
	bool IsClosed();
	bool IsBuffering();
	bool HasError();
	struct FRotator GetViewRotation();
	struct FString GetVideoTrackType(int TrackIndex, int FormatIndex);
	struct FFloatRange GetVideoTrackFrameRates(int TrackIndex, int FormatIndex);
	float GetVideoTrackFrameRate(int TrackIndex, int FormatIndex);
	struct FIntPoint GetVideoTrackDimensions(int TrackIndex, int FormatIndex);
	float GetVideoTrackAspectRatio(int TrackIndex, int FormatIndex);
	float GetVerticalFieldOfView();
	struct FString GetUrl();
	struct FString GetTrackLanguage(EMediaPlayerTrack TrackType, int TrackIndex);
	int GetTrackFormat(EMediaPlayerTrack TrackType, int TrackIndex);
	struct FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int TrackIndex);
	struct FTimespan GetTimeDelay();
	struct FTimespan GetTime();
	void GetSupportedRates(TArray<struct FFloatRange>* OutRates, bool Unthinned);
	int GetSelectedTrack(EMediaPlayerTrack TrackType);
	float GetRate();
	int GetPlaylistIndex();
	class UMediaPlaylist* GetPlaylist();
	struct FName GetPlayerName();
	int GetNumTracks(EMediaPlayerTrack TrackType);
	int GetNumTrackFormats(EMediaPlayerTrack TrackType, int TrackIndex);
	struct FText GetMediaName();
	struct FTimespan GetLastVideoSampleProcessedTime();
	struct FTimespan GetLastAudioSampleProcessedTime();
	float GetHorizontalFieldOfView();
	struct FTimespan GetDuration();
	struct FName GetDesiredPlayerName();
	struct FString GetAudioTrackType(int TrackIndex, int FormatIndex);
	int GetAudioTrackSampleRate(int TrackIndex, int FormatIndex);
	int GetAudioTrackChannels(int TrackIndex, int FormatIndex);
	void Close();
	bool CanPlayUrl(const struct FString& URL);
	bool CanPlaySource(class UMediaSource* MediaSource);
	bool CanPause();
};

// Class MediaAssets.MediaPlaylist
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_01F9 - 0x0000 // Minimum to subtract -> (0000)
class UMediaPlaylist : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_01F9, TArray<class UMediaSource*>,                                           Items);                                                    // 0x0028(0x0010)  (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaPlaylist");
		return ptr;
	}


	bool Replace(int Index, class UMediaSource* Replacement);
	bool RemoveAt(int Index);
	bool Remove(class UMediaSource* MediaSource);
	int Num();
	void Insert(class UMediaSource* MediaSource, int Index);
	class UMediaSource* GetRandom(int* OutIndex);
	class UMediaSource* GetPrevious(int* InOutIndex);
	class UMediaSource* GetNext(int* InOutIndex);
	class UMediaSource* Get(int Index);
	bool AddUrl(const struct FString& URL);
	bool AddFile(const struct FString& FilePath);
	bool Add(class UMediaSource* MediaSource);
};

// Class MediaAssets.MediaSoundComponent
// 0x00A5 (FullSize[0x0665] - InheritedSize[0x05C0])
// LastOffsetWithSize(0x0610)
#define PADDING_01FE - 0x0000 // Minimum to subtract -> (0030)
class UMediaSoundComponent : public USynthComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0030 PADDING_01FE, EMediaSoundChannels,                                                   Channels);                                                 // 0x0640(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0034 PADDING_01FE, bool,                                                                  DynamicRateAdjustment);                                    // 0x0644(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_01FE, float,                                                                 RateAdjustmentFactor);                                     // 0x0648(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003C PADDING_01FE, struct FFloatRange,                                                    RateAdjustmentRange);                                      // 0x064C(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_01FE, class UMediaPlayer*,                                                   MediaPlayer);                                              // 0x0660(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaSoundComponent");
		return ptr;
	}


	void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize);
	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
	void SetEnvelopeFollowingsettings(int AttackTimeMsec, int ReleaseTimeMsec);
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);
	TArray<struct FMediaSoundComponentSpectralData> GetSpectralData();
	class UMediaPlayer* GetMediaPlayer();
	float GetEnvelopeValue();
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings);
};

// Class MediaAssets.MediaTexture
// 0x0078 (FullSize[0x00F0] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_0200 - 0x0000 // Minimum to subtract -> (0058)
class UMediaTexture : public UTexture
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0058 PADDING_0200, TEnumAsByte<ETextureAddress>,                                          AddressX);                                                 // 0x00D0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0059 PADDING_0200, TEnumAsByte<ETextureAddress>,                                          AddressY);                                                 // 0x00D1(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005A PADDING_0200, bool,                                                                  AutoClear);                                                // 0x00D2(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005C PADDING_0200, struct FLinearColor,                                                   ClearColor);                                               // 0x00D4(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0200, class UMediaPlayer*,                                                   MediaPlayer);                                              // 0x00E8(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaTexture");
		return ptr;
	}


	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
	int GetWidth();
	class UMediaPlayer* GetMediaPlayer();
	int GetHeight();
	float GetAspectRatio();
};

// Class MediaAssets.PlatformMediaSource
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0202 - 0x0000 // Minimum to subtract -> (0008)
class UPlatformMediaSource : public UMediaSource
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0202, class UMediaSource*,                                                   MediaSource);                                              // 0x0030(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.PlatformMediaSource");
		return ptr;
	}


};

// Class MediaAssets.StreamMediaSource
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_0203 - 0x0000 // Minimum to subtract -> (0000)
class UStreamMediaSource : public UBaseMediaSource
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0203, struct FString,                                                        StreamUrl);                                                // 0x0038(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.StreamMediaSource");
		return ptr;
	}


};

// Class MediaAssets.TimeSynchronizableMediaSource
// 0x0001 (FullSize[0x0039] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_0206 - 0x0000 // Minimum to subtract -> (0000)
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0206, bool,                                                                  bUseTimeSynchronization);                                  // 0x0038(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.TimeSynchronizableMediaSource");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
