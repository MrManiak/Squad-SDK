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

// Class NVIDIAGfeSDK.HighlightsFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UHighlightsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsFunctionLibrary");
		return ptr;
	}


	static void STATIC_Poll();
	static void STATIC_ChekIfHighlightsAvailable(const struct FGfeSDKCreateResponse& InitProperties, bool* VideoGranted, bool* ScreenshotsGranted, EGfeSDKPermission* Video, EGfeSDKPermission* Screenshots);
};

// Class NVIDIAGfeSDK.InitHighlights
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0055 - 0x0000 // Minimum to subtract -> (0008)
class UInitHighlights : public UBlueprintAsyncActionBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0055, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0030(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0055, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0040(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.InitHighlights");
		return ptr;
	}


	static class UInitHighlights* STATIC_InitHighlights(class UObject* WorldContextObject, const struct FString& InGameName, bool Video, bool Screenshots);
};

// Class NVIDIAGfeSDK.HighlightsConfigureAsync
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0059 - 0x0000 // Minimum to subtract -> (0008)
class UHighlightsConfigureAsync : public UBlueprintAsyncActionBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0059, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0030(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0059, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0040(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsConfigureAsync");
		return ptr;
	}


	static class UHighlightsConfigureAsync* STATIC_HighlightsConfigure(class UObject* WorldContextObject, const struct FGfeSDKHighlightConfigParams& ConfigParams);
};

// Class NVIDIAGfeSDK.HighlightsOpenGroupAsync
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_005D - 0x0000 // Minimum to subtract -> (0008)
class UHighlightsOpenGroupAsync : public UBlueprintAsyncActionBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_005D, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0030(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_005D, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0040(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsOpenGroupAsync");
		return ptr;
	}


	static class UHighlightsOpenGroupAsync* STATIC_HighlightsOpenGroup(class UObject* WorldContextObject, const struct FGfeSDKHighlightOpenGroupParams& Params);
};

// Class NVIDIAGfeSDK.HighlightsCloseGroupAsync
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0063 - 0x0000 // Minimum to subtract -> (0008)
class UHighlightsCloseGroupAsync : public UBlueprintAsyncActionBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0063, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0030(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0063, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0040(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsCloseGroupAsync");
		return ptr;
	}


	static class UHighlightsCloseGroupAsync* STATIC_HighlightsCloseGroup(class UObject* WorldContextObject, const struct FString& GroupId, bool DestroyHighlights);
};

// Class NVIDIAGfeSDK.HighlightsSetScreenshotAsync
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0069 - 0x0000 // Minimum to subtract -> (0008)
class UHighlightsSetScreenshotAsync : public UBlueprintAsyncActionBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0069, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0030(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0069, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0040(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsSetScreenshotAsync");
		return ptr;
	}


	static class UHighlightsSetScreenshotAsync* STATIC_HighlightsSetScreenshot(class UObject* WorldContextObject, const struct FString& GroupId, const struct FString& HighlightId);
};

// Class NVIDIAGfeSDK.HighlightsSetVideoAsync
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0070 - 0x0000 // Minimum to subtract -> (0008)
class UHighlightsSetVideoAsync : public UBlueprintAsyncActionBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0070, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0030(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0070, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0040(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsSetVideoAsync");
		return ptr;
	}


	static class UHighlightsSetVideoAsync* STATIC_HighlightsSetVideo(class UObject* WorldContextObject, const struct FString& GroupId, const struct FString& HighlightId, int StartDelta, int EndDelta);
};

// Class NVIDIAGfeSDK.HighlightsSummaryAsync
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0072 - 0x0000 // Minimum to subtract -> (0008)
class UHighlightsSummaryAsync : public UBlueprintAsyncActionBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0072, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0030(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0072, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0040(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsSummaryAsync");
		return ptr;
	}


	static class UHighlightsSummaryAsync* STATIC_HighlightsOpenSummary(class UObject* WorldContextObject, const struct FGfeSDKHighlightSummaryParams& Params);
};

// Class NVIDIAGfeSDK.HighlightsGetNumberAsync
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0078 - 0x0000 // Minimum to subtract -> (0008)
class UHighlightsGetNumberAsync : public UBlueprintAsyncActionBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0078, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0030(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0078, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0040(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsGetNumberAsync");
		return ptr;
	}


	static class UHighlightsGetNumberAsync* STATIC_HighlightsGetNumberOfHighlights(class UObject* WorldContextObject, const struct FString& GroupId, EGfeSDKHighlightType TagFilter, EGfeSDKHighlightSignificance SignificanceFilter);
};

// Class NVIDIAGfeSDK.RequestPermissionsAsync
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_007B - 0x0000 // Minimum to subtract -> (0008)
class URequestPermissionsAsync : public UBlueprintAsyncActionBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_007B, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0030(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_007B, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0040(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.RequestPermissionsAsync");
		return ptr;
	}


	static class URequestPermissionsAsync* STATIC_GFERequestPermissions(class UObject* WorldContextObject, bool Video, bool Screenshots);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
