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

// Class GameplayTags.BlueprintGameplayTagLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.BlueprintGameplayTagLibrary");
		return ptr;
	}


	static bool STATIC_RemoveGameplayTag(struct FGameplayTagContainer* TagContainer, const struct FGameplayTag& Tag);
	static bool STATIC_NotEqual_TagTag(const struct FGameplayTag& A, const struct FString& B);
	static bool STATIC_NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const struct FString& B);
	static bool STATIC_NotEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);
	static bool STATIC_NotEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);
	static bool STATIC_MatchesTag(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, bool bExactMatch);
	static bool STATIC_MatchesAnyTags(const struct FGameplayTag& TagOne, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	static struct FGameplayTagContainer STATIC_MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& Value);
	static struct FGameplayTag STATIC_MakeLiteralGameplayTag(const struct FGameplayTag& Value);
	static struct FGameplayTagQuery STATIC_MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery);
	static struct FGameplayTagContainer STATIC_MakeGameplayTagContainerFromTag(const struct FGameplayTag& SingleTag);
	static struct FGameplayTagContainer STATIC_MakeGameplayTagContainerFromArray(TArray<struct FGameplayTag> GameplayTags);
	static bool STATIC_IsTagQueryEmpty(const struct FGameplayTagQuery& TagQuery);
	static bool STATIC_IsGameplayTagValid(const struct FGameplayTag& GameplayTag);
	static bool STATIC_HasTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool bExactMatch);
	static bool STATIC_HasAnyTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	static bool STATIC_HasAllTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	static bool STATIC_HasAllMatchingGameplayTags(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTagContainer& OtherContainer);
	static struct FName STATIC_GetTagName(const struct FGameplayTag& GameplayTag);
	static int STATIC_GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer);
	static struct FString STATIC_GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer);
	static struct FString STATIC_GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag);
	static void STATIC_GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* ActorClass, const struct FGameplayTagQuery& GameplayTagQuery, TArray<class AActor*>* OutActors);
	static bool STATIC_EqualEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);
	static bool STATIC_EqualEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);
	static bool STATIC_DoesTagAssetInterfaceHaveTag(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTag& Tag);
	static bool STATIC_DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery);
	static void STATIC_BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer, TArray<struct FGameplayTag>* GameplayTags);
	static void STATIC_AppendGameplayTagContainers(struct FGameplayTagContainer* InOutTagContainer, const struct FGameplayTagContainer& InTagContainer);
	static void STATIC_AddGameplayTag(struct FGameplayTagContainer* TagContainer, const struct FGameplayTag& Tag);
};

// Class GameplayTags.GameplayTagAssetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UGameplayTagAssetInterface : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagAssetInterface");
		return ptr;
	}


	bool HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck);
	bool HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer);
	bool HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer);
	void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer);
};

// Class GameplayTags.EditableGameplayTagQuery
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_08F7 - 0x0000 // Minimum to subtract -> (0000)
class UEditableGameplayTagQuery : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_08F7, struct FString,                                                        UserDescription);                                          // 0x0028(0x0010)  (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_08F7, class UEditableGameplayTagQueryExpression*,                            RootExpression);                                           // 0x0048(0x0008)  (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_08F7, struct FGameplayTagQuery,                                              TagQueryExportText_Helper);                                // 0x0050(0x0048)  (NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQuery");
		return ptr;
	}


};

// Class GameplayTags.EditableGameplayTagQueryExpression
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UEditableGameplayTagQueryExpression : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression");
		return ptr;
	}


};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_08F9 - 0x0000 // Minimum to subtract -> (0000)
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_08F9, struct FGameplayTagContainer,                                          Tags);                                                     // 0x0028(0x0020)  (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch");
		return ptr;
	}


};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_08FA - 0x0000 // Minimum to subtract -> (0000)
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_08FA, struct FGameplayTagContainer,                                          Tags);                                                     // 0x0028(0x0020)  (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch");
		return ptr;
	}


};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_08FB - 0x0000 // Minimum to subtract -> (0000)
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_08FB, struct FGameplayTagContainer,                                          Tags);                                                     // 0x0028(0x0020)  (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch");
		return ptr;
	}


};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_08FC - 0x0000 // Minimum to subtract -> (0000)
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_08FC, TArray<class UEditableGameplayTagQueryExpression*>,                    Expressions);                                              // 0x0028(0x0010)  (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch");
		return ptr;
	}


};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_08FD - 0x0000 // Minimum to subtract -> (0000)
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_08FD, TArray<class UEditableGameplayTagQueryExpression*>,                    Expressions);                                              // 0x0028(0x0010)  (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch");
		return ptr;
	}


};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_08FE - 0x0000 // Minimum to subtract -> (0000)
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_08FE, TArray<class UEditableGameplayTagQueryExpression*>,                    Expressions);                                              // 0x0028(0x0010)  (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch");
		return ptr;
	}


};

// Class GameplayTags.GameplayTagsManager
// 0x0138 (FullSize[0x0160] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_08FF - 0x0000 // Minimum to subtract -> (0098)
class UGameplayTagsManager : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0098 PADDING_08FF, TArray<struct FGameplayTagSource>,                                     TagSources);                                               // 0x00C0(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0128 PADDING_08FF, TArray<class UDataTable*>,                                             GameplayTagTables);                                        // 0x0150(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsManager");
		return ptr;
	}


};

// Class GameplayTags.GameplayTagsList
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0900 - 0x0000 // Minimum to subtract -> (0000)
class UGameplayTagsList : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0900, struct FString,                                                        ConfigFileName);                                           // 0x0028(0x0010)  (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0900, TArray<struct FGameplayTagTableRow>,                                   GameplayTagList);                                          // 0x0038(0x0010)  (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsList");
		return ptr;
	}


};

// Class GameplayTags.RestrictedGameplayTagsList
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0901 - 0x0000 // Minimum to subtract -> (0000)
class URestrictedGameplayTagsList : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0901, struct FString,                                                        ConfigFileName);                                           // 0x0028(0x0010)  (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0901, TArray<struct FRestrictedGameplayTagTableRow>,                         RestrictedGameplayTagList);                                // 0x0038(0x0010)  (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.RestrictedGameplayTagsList");
		return ptr;
	}


};

// Class GameplayTags.GameplayTagsSettings
// 0x0070 (FullSize[0x00B8] - InheritedSize[0x0048])
// LastOffsetWithSize(0x0048)
#define PADDING_0902 - 0x0000 // Minimum to subtract -> (0000)
class UGameplayTagsSettings : public UGameplayTagsList
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0902, bool,                                                                  ImportTagsFromConfig);                                     // 0x0048(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0001 PADDING_0902, bool,                                                                  WarnOnInvalidTags);                                        // 0x0049(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0002 PADDING_0902, bool,                                                                  FastReplication);                                          // 0x004A(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0902, struct FString,                                                        InvalidTagCharacters);                                     // 0x0050(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0902, TArray<struct FGameplayTagCategoryRemap>,                              CategoryRemapping);                                        // 0x0060(0x0010)  (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0902, TArray<struct FSoftObjectPath>,                                        GameplayTagTableList);                                     // 0x0070(0x0010)  (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0902, TArray<struct FGameplayTagRedirect>,                                   GameplayTagRedirects);                                     // 0x0080(0x0010)  (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0902, TArray<struct FName>,                                                  CommonlyReplicatedTags);                                   // 0x0090(0x0010)  (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0902, int,                                                                   NumBitsForContainerSize);                                  // 0x00A0(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005C PADDING_0902, int,                                                                   NetIndexFirstBitSegment);                                  // 0x00A4(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0902, TArray<struct FRestrictedConfigInfo>,                                  RestrictedConfigFiles);                                    // 0x00A8(0x0010)  (Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsSettings");
		return ptr;
	}


};

// Class GameplayTags.GameplayTagsDeveloperSettings
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0903 - 0x0000 // Minimum to subtract -> (0000)
class UGameplayTagsDeveloperSettings : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0903, struct FString,                                                        DeveloperConfigName);                                      // 0x0028(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsDeveloperSettings");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
