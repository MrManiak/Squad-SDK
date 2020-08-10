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

// Class ImgMediaFactory.ImgMediaSettings
// 0x0039 (FullSize[0x0061] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0135 - 0x0000 // Minimum to subtract -> (0000)
class UImgMediaSettings : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0135, struct FFrameRate,                                                     DefaultFrameRate);                                         // 0x0028(0x0008)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0135, float,                                                                 CacheBehindPercentage);                                    // 0x0030(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_0135, float,                                                                 CacheSizeGB);                                              // 0x0034(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0135, int,                                                                   CacheThreads);                                             // 0x0038(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0135, int,                                                                   CacheThreadStackSizeKB);                                   // 0x003C(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0135, float,                                                                 GlobalCacheSizeGB);                                        // 0x0040(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0135, bool,                                                                  UseGlobalCache);                                           // 0x0044(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0135, uint32_t,                                                              ExrDecoderThreads);                                        // 0x0048(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0135, struct FString,                                                        DefaultProxy);                                             // 0x0050(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0135, bool,                                                                  UseDefaultProxy);                                          // 0x0060(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ImgMediaFactory.ImgMediaSettings");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
