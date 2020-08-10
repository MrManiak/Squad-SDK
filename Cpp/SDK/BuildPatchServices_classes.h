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

// Class BuildPatchServices.BuildPatchManifest
// 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0354 - 0x0000 // Minimum to subtract -> (0000)
class UBuildPatchManifest : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0354, unsigned char,                                                         ManifestFileVersion);                                      // 0x0028(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0001 PADDING_0354, bool,                                                                  bIsFileData);                                              // 0x0029(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0004 PADDING_0354, uint32_t,                                                              AppID);                                                    // 0x002C(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0354, struct FString,                                                        AppName);                                                  // 0x0030(0x0010)  (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0354, struct FString,                                                        BuildVersion);                                             // 0x0040(0x0010)  (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0354, struct FString,                                                        LaunchExe);                                                // 0x0050(0x0010)  (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0354, struct FString,                                                        LaunchCommand);                                            // 0x0060(0x0010)  (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0354, struct FString,                                                        PrereqName);                                               // 0x00C0(0x0010)  (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0354, struct FString,                                                        PrereqPath);                                               // 0x00D0(0x0010)  (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0354, struct FString,                                                        PrereqArgs);                                               // 0x00E0(0x0010)  (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_0354, TArray<struct FFileManifestData>,                                      FileManifestList);                                         // 0x00F0(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_0354, TArray<struct FChunkInfoData>,                                         ChunkList);                                                // 0x0100(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_0354, TArray<struct FCustomFieldData>,                                       CustomFields);                                             // 0x0110(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BuildPatchServices.BuildPatchManifest");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
