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

// Class VariantManagerContent.LevelVariantSets
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_045F - 0x0000 // Minimum to subtract -> (0000)
class ULevelVariantSets : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_045F, class UBlueprintGeneratedClass*,                                       DirectorClass);                                            // 0x0028(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0008 PADDING_045F, TArray<class UVariantSet*>,                                            VariantSets);                                              // 0x0030(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSets");
		return ptr;
	}


	class UVariantSet* GetVariantSetByName(const struct FString& VariantSetName);
	class UVariantSet* GetVariantSet(int VariantSetIndex);
	int GetNumVariantSets();
};

// Class VariantManagerContent.LevelVariantSetsActor
// 0x0028 (FullSize[0x0260] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_0460 - 0x0000 // Minimum to subtract -> (0010)
class ALevelVariantSetsActor : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0460, struct FSoftObjectPath,                                                LevelVariantSets);                                         // 0x0248(0x0018)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSetsActor");
		return ptr;
	}


	bool SwitchOnVariantByName(const struct FString& VariantSetName, const struct FString& VariantName);
	bool SwitchOnVariantByIndex(int VariantSetIndex, int VariantIndex);
	void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);
	class ULevelVariantSets* GetLevelVariantSets(bool bLoad);
};

// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class ULevelVariantSetsFunctionDirector : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSetsFunctionDirector");
		return ptr;
	}


};

// Class VariantManagerContent.PropertyValue
// 0x0111 (FullSize[0x0139] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0462 - 0x0000 // Minimum to subtract -> (0058)
class UPropertyValue : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0058 PADDING_0462, TArray<class UProperty*>,                                              Properties);                                               // 0x0080(0x0010)  (ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0462, TArray<int>,                                                           PropertyIndices);                                          // 0x0090(0x0010)  (ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0462, TArray<struct FCapturedPropSegment>,                                   CapturedPropSegments);                                     // 0x00A0(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0462, struct FString,                                                        FullDisplayString);                                        // 0x00B0(0x0010)  (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0462, struct FName,                                                          PropertySetterName);                                       // 0x00C0(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0462, TMap<struct FString COMMA struct FString>,                             PropertySetterParameterDefaults);                          // 0x00C8(0x0050)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_0462, bool,                                                                  bHasRecordedData);                                         // 0x0118(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_0462, class UClass*,                                                         LeafPropertyClass);                                        // 0x0120(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0100 PADDING_0462, TArray<unsigned char>,                                                 ValueBytes);                                               // 0x0128(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0110 PADDING_0462, EPropertyValueCategory,                                                PropCategory);                                             // 0x0138(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValue");
		return ptr;
	}


	bool HasRecordedData();
	struct FText GetPropertyTooltip();
	struct FString GetFullDisplayString();
};

// Class VariantManagerContent.PropertyValueTransform
// 0x006F (FullSize[0x01A8] - InheritedSize[0x0139])
// LastOffsetWithSize(0x0139)
class UPropertyValueTransform : public UPropertyValue
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueTransform");
		return ptr;
	}


};

// Class VariantManagerContent.PropertyValueVisibility
// 0x006F (FullSize[0x01A8] - InheritedSize[0x0139])
// LastOffsetWithSize(0x0139)
class UPropertyValueVisibility : public UPropertyValue
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueVisibility");
		return ptr;
	}


};

// Class VariantManagerContent.PropertyValueColor
// 0x006F (FullSize[0x01A8] - InheritedSize[0x0139])
// LastOffsetWithSize(0x0139)
class UPropertyValueColor : public UPropertyValue
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueColor");
		return ptr;
	}


};

// Class VariantManagerContent.PropertyValueMaterial
// 0x006F (FullSize[0x01A8] - InheritedSize[0x0139])
// LastOffsetWithSize(0x0139)
class UPropertyValueMaterial : public UPropertyValue
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueMaterial");
		return ptr;
	}


};

// Class VariantManagerContent.Variant
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0467 - 0x0000 // Minimum to subtract -> (0000)
class UVariant : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0467, struct FText,                                                          DisplayText);                                              // 0x0028(0x0018)  (Deprecated, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0467, TArray<class UVariantObjectBinding*>,                                  ObjectBindings);                                           // 0x0058(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.Variant");
		return ptr;
	}


	void SwitchOn();
	void SetDisplayText(const struct FText& NewDisplayText);
	int GetNumActors();
	struct FText GetDisplayText();
	class AActor* GetActor(int ActorIndex);
};

// Class VariantManagerContent.VariantObjectBinding
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0468 - 0x0000 // Minimum to subtract -> (0000)
class UVariantObjectBinding : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0468, struct FSoftObjectPath,                                                ObjectPtr);                                                // 0x0028(0x0018)  (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0468, TLazyObjectPtr<class UObject>,                                         LazyObjectPtr);                                            // 0x0040(0x001C)  (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0468, TArray<class UPropertyValue*>,                                         CapturedProperties);                                       // 0x0060(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0468, TArray<struct FFunctionCaller>,                                        FunctionCallers);                                          // 0x0070(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.VariantObjectBinding");
		return ptr;
	}


};

// Class VariantManagerContent.VariantSet
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0469 - 0x0000 // Minimum to subtract -> (0000)
class UVariantSet : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0469, struct FText,                                                          DisplayText);                                              // 0x0028(0x0018)  (Deprecated, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0469, bool,                                                                  bExpanded);                                                // 0x0058(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0469, TArray<class UVariant*>,                                               Variants);                                                 // 0x0060(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.VariantSet");
		return ptr;
	}


	void SetDisplayText(const struct FText& NewDisplayText);
	class UVariant* GetVariantByName(const struct FString& VariantName);
	class UVariant* GetVariant(int VariantIndex);
	int GetNumVariants();
	struct FText GetDisplayText();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
