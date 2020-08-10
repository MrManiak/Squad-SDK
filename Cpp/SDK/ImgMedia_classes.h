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

// Class ImgMedia.ImgMediaSource
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_040F - 0x0000 // Minimum to subtract -> (0000)
class UImgMediaSource : public UBaseMediaSource
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_040F, struct FFrameRate,                                                     FrameRateOverride);                                        // 0x0038(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_040F, struct FString,                                                        ProxyOverride);                                            // 0x0040(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_040F, struct FDirectoryPath,                                                 SequencePath);                                             // 0x0050(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ImgMedia.ImgMediaSource");
		return ptr;
	}


	void SetSequencePath(const struct FString& Path);
	struct FString GetSequencePath();
	void GetProxies(TArray<struct FString>* OutProxies);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
