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

// Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_024B - 0x0000 // Minimum to subtract -> (0008)
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_024B, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0030(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_024B, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0040(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_024B, struct FAppleImageUtilsImageConversionResult,                          ConversionResult);                                         // 0x0060(0x0020)  (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy");
		return ptr;
	}


	static class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* STATIC_CreateProxyObjectForConvertToTIFF(class UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
	static class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* STATIC_CreateProxyObjectForConvertToPNG(class UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
	static class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* STATIC_CreateProxyObjectForConvertToJPEG(class UTexture* SourceImage, int Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
	static class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* STATIC_CreateProxyObjectForConvertToHEIF(class UTexture* SourceImage, int Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
};

// Class AppleImageUtils.AppleImageInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UAppleImageInterface : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AppleImageUtils.AppleImageInterface");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
