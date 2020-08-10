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

// Class AudioCapture.AudioCaptureComponent
// 0x0084 (FullSize[0x0644] - InheritedSize[0x05C0])
// LastOffsetWithSize(0x0610)
#define PADDING_0320 - 0x0000 // Minimum to subtract -> (0030)
class UAudioCaptureComponent : public USynthComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0030 PADDING_0320, int,                                                                   JitterLatencyFrames);                                      // 0x0640(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioCapture.AudioCaptureComponent");
		return ptr;
	}


};

// Class AudioCapture.AudioCapture
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UAudioCapture : public UAudioGenerator
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioCapture.AudioCapture");
		return ptr;
	}


	void StopCapturingAudio();
	void StartCapturingAudio();
	bool IsCapturingAudio();
	bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo* OutInfo);
};

// Class AudioCapture.AudioCaptureFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioCapture.AudioCaptureFunctionLibrary");
		return ptr;
	}


	static class UAudioCapture* STATIC_CreateAudioCapture();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
