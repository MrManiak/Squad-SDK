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

// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_039B - 0x0000 // Minimum to subtract -> (0000)
class UMaterialShaderQualitySettings : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_039B, TMap<struct FName COMMA class UShaderPlatformQualitySettings*>,        ForwardSettingMap);                                        // 0x0028(0x0050)  (ZeroConstructor, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MaterialShaderQualitySettings.MaterialShaderQualitySettings");
		return ptr;
	}


};

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_039D - 0x0000 // Minimum to subtract -> (0000)
class UShaderPlatformQualitySettings : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_039D, struct FMaterialQualityOverrides,                                      QualityOverrides[0x3]);                                    // 0x0028(0x0008)  (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
