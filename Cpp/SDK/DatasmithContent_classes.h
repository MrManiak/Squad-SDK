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

// Class DatasmithContent.DatasmithObjectTemplate
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UDatasmithObjectTemplate : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithObjectTemplate");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithActorTemplate
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithActorTemplate");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithAdditionalData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UDatasmithAdditionalData : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAdditionalData");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithAreaLightActor
// 0x0068 (FullSize[0x02A0] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_0048 - 0x0000 // Minimum to subtract -> (0010)
class ADatasmithAreaLightActor : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0048, EDatasmithAreaLightActorType,                                          LightType);                                                // 0x0248(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0011 PADDING_0048, EDatasmithAreaLightActorShape,                                         LightShape);                                               // 0x0249(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0048, struct FVector2D,                                                      Dimensions);                                               // 0x024C(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0048, float,                                                                 Intensity);                                                // 0x0254(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0048, ELightUnits,                                                           IntensityUnits);                                           // 0x0258(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0048, struct FLinearColor,                                                   Color);                                                    // 0x025C(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0034 PADDING_0048, float,                                                                 Temperature);                                              // 0x026C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0048, class UTextureLightProfile*,                                           IESTexture);                                               // 0x0270(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0048, bool,                                                                  bUseIESBrightness);                                        // 0x0278(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0044 PADDING_0048, float,                                                                 IESBrightnessScale);                                       // 0x027C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0048, struct FRotator,                                                       Rotation);                                                 // 0x0280(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0054 PADDING_0048, float,                                                                 SourceRadius);                                             // 0x028C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0048, float,                                                                 SourceLength);                                             // 0x0290(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005C PADDING_0048, float,                                                                 AttenuationRadius);                                        // 0x0294(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0048, float,                                                                 SpotlightInnerAngle);                                      // 0x0298(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0064 PADDING_0048, float,                                                                 SpotlightOuterAngle);                                      // 0x029C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAreaLightActor");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithAreaLightActorTemplate
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_004B - 0x0000 // Minimum to subtract -> (0008)
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_004B, EDatasmithAreaLightActorType,                                          LightType);                                                // 0x0030(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0009 PADDING_004B, EDatasmithAreaLightActorShape,                                         LightShape);                                               // 0x0031(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_004B, struct FVector2D,                                                      Dimensions);                                               // 0x0034(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_004B, struct FLinearColor,                                                   Color);                                                    // 0x003C(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_004B, float,                                                                 Intensity);                                                // 0x004C(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_004B, ELightUnits,                                                           IntensityUnits);                                           // 0x0050(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002C PADDING_004B, float,                                                                 Temperature);                                              // 0x0054(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_004B, bool,                                                                  bUseIESBrightness);                                        // 0x0080(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005C PADDING_004B, float,                                                                 IESBrightnessScale);                                       // 0x0084(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_004B, struct FRotator,                                                       Rotation);                                                 // 0x0088(0x000C)  (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x006C PADDING_004B, float,                                                                 SourceRadius);                                             // 0x0094(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0070 PADDING_004B, float,                                                                 SourceLength);                                             // 0x0098(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0074 PADDING_004B, float,                                                                 AttenuationRadius);                                        // 0x009C(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAreaLightActorTemplate");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithAssetImportData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UDatasmithAssetImportData : public UAssetImportData
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAssetImportData");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithStaticMeshImportData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshImportData");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithStaticMeshCADImportData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshCADImportData");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithSceneImportData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UDatasmithSceneImportData : public UAssetImportData
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneImportData");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithTranslatedSceneImportData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UDatasmithTranslatedSceneImportData : public UDatasmithSceneImportData
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithTranslatedSceneImportData");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithCADImportSceneData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCADImportSceneData");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithMDLSceneImportData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithMDLSceneImportData");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithGLTFSceneImportData
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0065 - 0x0000 // Minimum to subtract -> (0000)
class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0065, struct FString,                                                        Generator);                                                // 0x0028(0x0010)  (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0065, float,                                                                 Version);                                                  // 0x0038(0x0004)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0065, struct FString,                                                        Author);                                                   // 0x0040(0x0010)  (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0065, struct FString,                                                        License);                                                  // 0x0050(0x0010)  (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0065, struct FString,                                                        Source);                                                   // 0x0060(0x0010)  (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithGLTFSceneImportData");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0067 - 0x0000 // Minimum to subtract -> (0000)
class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0067, struct FString,                                                        SourceMeshName);                                           // 0x0028(0x0010)  (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshGLTFImportData");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithDeltaGenAssetImportData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithDeltaGenAssetImportData");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithDeltaGenSceneImportData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UDatasmithDeltaGenSceneImportData : public UDatasmithSceneImportData
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithDeltaGenSceneImportData");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithVREDAssetImportData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithVREDAssetImportData");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithVREDSceneImportData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UDatasmithVREDSceneImportData : public UDatasmithSceneImportData
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithVREDSceneImportData");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithIFCSceneImportData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UDatasmithIFCSceneImportData : public UDatasmithSceneImportData
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithIFCSceneImportData");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithStaticMeshIFCImportData
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0079 - 0x0000 // Minimum to subtract -> (0000)
class UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0079, struct FString,                                                        SourceGlobalId);                                           // 0x0028(0x0010)  (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshIFCImportData");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithAssetUserData
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_007D - 0x0000 // Minimum to subtract -> (0000)
class UDatasmithAssetUserData : public UAssetUserData
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_007D, TMap<struct FName COMMA struct FString>,                               MetaData);                                                 // 0x0028(0x0050)  (Edit, BlueprintVisible, ZeroConstructor, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAssetUserData");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithCineCameraActorTemplate
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_007E - 0x0000 // Minimum to subtract -> (0008)
class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_007E, struct FDatasmithCameraLookatTrackingSettingsTemplate,                 LookatTrackingSettings);                                   // 0x0030(0x0030)  (NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCineCameraActorTemplate");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithCineCameraComponentTemplate
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0081 - 0x0000 // Minimum to subtract -> (0008)
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0081, struct FDatasmithCameraFilmbackSettingsTemplate,                       FilmbackSettings);                                         // 0x0030(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0081, struct FDatasmithCameraLensSettingsTemplate,                           LensSettings);                                             // 0x0038(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0081, struct FDatasmithCameraFocusSettingsTemplate,                          FocusSettings);                                            // 0x003C(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0081, float,                                                                 CurrentFocalLength);                                       // 0x0044(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0081, float,                                                                 CurrentAperture);                                          // 0x0048(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0081, struct FDatasmithPostProcessSettingsTemplate,                          PostProcessSettings);                                      // 0x0050(0x0040)  (NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCineCameraComponentTemplate");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithContentBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithContentBlueprintLibrary");
		return ptr;
	}


	static struct FString STATIC_GetDatasmithUserDataValueForKey(class UObject* Object, const struct FName& Key);
	static void STATIC_GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, const struct FString& StringToMatch, TArray<struct FName>* OutKeys, TArray<struct FString>* OutValues);
	static class UDatasmithAssetUserData* STATIC_GetDatasmithUserData(class UObject* Object);
};

// Class DatasmithContent.DatasmithCustomActionBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UDatasmithCustomActionBase : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCustomActionBase");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithImportedSequencesActor
// 0x0020 (FullSize[0x0258] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_0088 - 0x0000 // Minimum to subtract -> (0010)
class ADatasmithImportedSequencesActor : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0088, TArray<class ULevelSequence*>,                                         ImportedSequences);                                        // 0x0248(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithImportedSequencesActor");
		return ptr;
	}


	void PlayLevelSequence(class ULevelSequence* SequenceToPlay);
};

// Class DatasmithContent.DatasmithCommonTessellationOptions
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_008A - 0x0000 // Minimum to subtract -> (0000)
class UDatasmithCommonTessellationOptions : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_008A, struct FDatasmithTessellationOptions,                                  Options);                                                  // 0x0028(0x0010)  (Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCommonTessellationOptions");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithImportOptions
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_008C - 0x0000 // Minimum to subtract -> (0000)
class UDatasmithImportOptions : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_008C, EDatasmithImportSearchPackagePolicy,                                   SearchPackagePolicy);                                      // 0x0028(0x0001)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0001 PADDING_008C, EDatasmithImportAssetConflictPolicy,                                   MaterialConflictPolicy);                                   // 0x0029(0x0001)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0002 PADDING_008C, EDatasmithImportAssetConflictPolicy,                                   TextureConflictPolicy);                                    // 0x002A(0x0001)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0003 PADDING_008C, EDatasmithImportActorPolicy,                                           StaticMeshActorImportPolicy);                              // 0x002B(0x0001)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0004 PADDING_008C, EDatasmithImportActorPolicy,                                           LightImportPolicy);                                        // 0x002C(0x0001)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0005 PADDING_008C, EDatasmithImportActorPolicy,                                           CameraImportPolicy);                                       // 0x002D(0x0001)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0006 PADDING_008C, EDatasmithImportActorPolicy,                                           OtherActorImportPolicy);                                   // 0x002E(0x0001)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0007 PADDING_008C, EDatasmithImportMaterialQuality,                                       MaterialQuality);                                          // 0x002F(0x0001)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_008C, struct FDatasmithImportBaseOptions,                                    BaseOptions);                                              // 0x0034(0x0014)  (Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_008C, struct FDatasmithReimportOptions,                                      ReimportOptions);                                          // 0x0048(0x0002)  (Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_008C, struct FString,                                                        Filename);                                                 // 0x0050(0x0010)  (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_008C, struct FString,                                                        FilePath);                                                 // 0x0060(0x0010)  (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithImportOptions");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithLandscapeTemplate
// 0x0014 (FullSize[0x003C] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0092 - 0x0000 // Minimum to subtract -> (0008)
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0092, class UMaterialInterface*,                                             LandscapeMaterial);                                        // 0x0030(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0092, int,                                                                   StaticLightingLOD);                                        // 0x0038(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithLandscapeTemplate");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithLightComponentTemplate
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0094 - 0x0000 // Minimum to subtract -> (0008)
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0094, unsigned char,                                                         bVisible);                                                 // 0x0030(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_0094, unsigned char,                                                         CastShadows);                                              // 0x0034(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_0094, unsigned char,                                                         bUseTemperature);                                          // 0x0034(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_0094, unsigned char,                                                         bUseIESBrightness);                                        // 0x0034(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0094, float,                                                                 Intensity);                                                // 0x0038(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0094, float,                                                                 Temperature);                                              // 0x003C(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0094, float,                                                                 IESBrightnessScale);                                       // 0x0040(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0094, struct FLinearColor,                                                   LightColor);                                               // 0x0044(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0094, class UMaterialInterface*,                                             LightFunctionMaterial);                                    // 0x0058(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0094, class UTextureLightProfile*,                                           IESTexture);                                               // 0x0060(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithLightComponentTemplate");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithMaterialInstanceTemplate
// 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0097 - 0x0000 // Minimum to subtract -> (0008)
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0097, TMap<struct FName COMMA float>,                                        ScalarParameterValues);                                    // 0x0030(0x0050)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0097, TMap<struct FName COMMA struct FLinearColor>,                          VectorParameterValues);                                    // 0x0080(0x0050)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_0097, struct FDatasmithStaticParameterSetTemplate,                           StaticParameters);                                         // 0x0120(0x0050)  (NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithMaterialInstanceTemplate");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithPointLightComponentTemplate
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0098 - 0x0000 // Minimum to subtract -> (0008)
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0098, ELightUnits,                                                           IntensityUnits);                                           // 0x0030(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_0098, float,                                                                 SourceRadius);                                             // 0x0034(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0098, float,                                                                 SourceLength);                                             // 0x0038(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0098, float,                                                                 AttenuationRadius);                                        // 0x003C(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithPointLightComponentTemplate");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
// 0x0049 (FullSize[0x0071] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_009C - 0x0000 // Minimum to subtract -> (0008)
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_009C, struct FDatasmithPostProcessSettingsTemplate,                          Settings);                                                 // 0x0030(0x0040)  (NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_009C, unsigned char,                                                         bEnabled);                                                 // 0x0070(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_009C, unsigned char,                                                         bUnbound);                                                 // 0x0070(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithPostProcessVolumeTemplate");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithScene
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UDatasmithScene : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithScene");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithSceneActor
// 0x0018 (FullSize[0x0250] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_00A2 - 0x0000 // Minimum to subtract -> (0010)
class ADatasmithSceneActor : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_00A2, class UDatasmithScene*,                                                Scene);                                                    // 0x0248(0x0008)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneActor");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithSceneComponentTemplate
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_00A4 - 0x0000 // Minimum to subtract -> (0008)
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_00A4, struct FTransform,                                                     RelativeTransform);                                        // 0x0030(0x0030)  (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_00A4, TEnumAsByte<EComponentMobility>,                                       Mobility);                                                 // 0x0060(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneComponentTemplate");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithSkyLightComponentTemplate
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_00A7 - 0x0000 // Minimum to subtract -> (0008)
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_00A7, TEnumAsByte<ESkyLightSourceType>,                                      SourceType);                                               // 0x0030(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_00A7, int,                                                                   CubemapResolution);                                        // 0x0034(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_00A7, class UTextureCube*,                                                   Cubemap);                                                  // 0x0038(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSkyLightComponentTemplate");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithSpotLightComponentTemplate
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_00A8 - 0x0000 // Minimum to subtract -> (0008)
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_00A8, float,                                                                 InnerConeAngle);                                           // 0x0030(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_00A8, float,                                                                 OuterConeAngle);                                           // 0x0034(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSpotLightComponentTemplate");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_00AC - 0x0000 // Minimum to subtract -> (0008)
class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_00AC, class UStaticMesh*,                                                    StaticMesh);                                               // 0x0030(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_00AC, TArray<class UMaterialInterface*>,                                     OverrideMaterials);                                        // 0x0038(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshComponentTemplate");
		return ptr;
	}


};

// Class DatasmithContent.DatasmithStaticMeshTemplate
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_00AF - 0x0000 // Minimum to subtract -> (0008)
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_00AF, struct FDatasmithMeshSectionInfoMapTemplate,                           SectionInfoMap);                                           // 0x0030(0x0050)  (Edit, EditConst, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_00AF, int,                                                                   LightMapCoordinateIndex);                                  // 0x0080(0x0004)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005C PADDING_00AF, int,                                                                   LightMapResolution);                                       // 0x0084(0x0004)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_00AF, TArray<struct FDatasmithMeshBuildSettingsTemplate>,                    BuildSettings);                                            // 0x0088(0x0010)  (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0070 PADDING_00AF, TArray<struct FDatasmithStaticMaterialTemplate>,                       StaticMaterials);                                          // 0x0098(0x0010)  (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshTemplate");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
