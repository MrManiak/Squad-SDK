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

// Class CoreUObject.Object
// 0x0028
// LastOffsetWithSize(0x0000)
#define PADDING_007F - 0x0000 // Minimum to subtract -> (0000)
class UObject
{
public:
	static TUObjectArray*                                                  GObjects;                                                                               // 0x0000(0x0008) 
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_007F, void*,                                                                 VfTable);                                                  // 0x0000(0x0008) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0008 PADDING_007F, int,                                                                   Flags);                                                    // 0x0008(0x0004) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x000C PADDING_007F, int,                                                                   InternalIndex);                                            // 0x000C(0x0004) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0010 PADDING_007F, class UClass*,                                                         Class);                                                    // 0x0010(0x0008) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0018 PADDING_007F, FName,                                                                 Name);                                                     // 0x0018(0x0008) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0020 PADDING_007F, class UObject*,                                                        Outer);                                                    // 0x0020(0x0008) NOT AUTO-GENERATED PROPERTY
	};

	static inline TUObjectArray& GetGlobalObjects()
	{
		return *GObjects;
	}

	std::string GetName() const;

	std::string GetFullName() const;

	template<typename T>
	static T* FindObject(const std::string& name)
	{
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);
	
			if (object == nullptr)
			{
				continue;
			}
	
			if (object->GetFullName() == name)
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	template<typename T>
	static T* FindObject()
	{
		auto v = T::StaticClass();
		for (int i = 0; i < UFT::UObject::GetGlobalObjects().Num(); ++i)
		{
			auto object = UFT::UObject::GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->IsA(v))
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	template<typename T>
	static std::vector<T*> FindObjects(const std::string& name)
	{
		std::vector<T*> ret;
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->GetFullName() == name)
			{
				ret.push_back(static_cast<T*>(object));
			}
		}
		return ret;
	}

	template<typename T>
	static std::vector<T*> FindObjects()
	{
		std::vector<T*> ret;
		auto v = T::StaticClass();
		for (int i = 0; i < UFT::UObject::GetGlobalObjects().Num(); ++i)
		{
			auto object = UFT::UObject::GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->IsA(v))
			{
				ret.push_back(static_cast<T*>(object));
			}
		}
		return ret;
	}

	static UClass* FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	template<typename T>
	static T* GetObjectCasted(std::size_t index)
	{
		return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
	}

	bool IsA(UClass* cmp) const;

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Object");
		return ptr;
	}

	inline void ProcessEvent(class UFunction* function, void* parms)
	{
		GetVFunction<void(*)(UObject*, class UFunction*, void*)>(this, 66)(this, function, parms); //55 up to 79 is wrong
	}


	void ExecuteUbergraph(int EntryPoint);
};

// Class CoreUObject.Field
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0082 - 0x0000 // Minimum to subtract -> (0000)
class UField : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0082, class UField*,                                                         Next);                                                     // 0x0028(0x0008) NOT AUTO-GENERATED PROPERTY
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Field");
		return ptr;
	}


};

// Class CoreUObject.Property
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
class UProperty : public UField
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Property");
		return ptr;
	}


};

// Class CoreUObject.ObjectPropertyBase
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
class UObjectPropertyBase : public UProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ObjectPropertyBase");
		return ptr;
	}


};

// Class CoreUObject.SoftObjectProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
// LastOffsetWithSize(0x0030)
class USoftObjectProperty : public UObjectPropertyBase
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.SoftObjectProperty");
		return ptr;
	}


};

// Class CoreUObject.SoftClassProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0030)
class USoftClassProperty : public USoftObjectProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.SoftClassProperty");
		return ptr;
	}


};

// Class CoreUObject.StrProperty
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
class UStrProperty : public UProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.StrProperty");
		return ptr;
	}


};

// Class CoreUObject.StructProperty
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
class UStructProperty : public UProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.StructProperty");
		return ptr;
	}


};

// Class CoreUObject.NumericProperty
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
class UNumericProperty : public UProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.NumericProperty");
		return ptr;
	}


};

// Class CoreUObject.UInt16Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
// LastOffsetWithSize(0x0030)
class UUInt16Property : public UNumericProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.UInt16Property");
		return ptr;
	}


};

// Class CoreUObject.UInt32Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
// LastOffsetWithSize(0x0030)
class UUInt32Property : public UNumericProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.UInt32Property");
		return ptr;
	}


};

// Class CoreUObject.UInt64Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
// LastOffsetWithSize(0x0030)
class UUInt64Property : public UNumericProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.UInt64Property");
		return ptr;
	}


};

// Class CoreUObject.WeakObjectProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
// LastOffsetWithSize(0x0030)
class UWeakObjectProperty : public UObjectPropertyBase
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.WeakObjectProperty");
		return ptr;
	}


};

// Class CoreUObject.TextProperty
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
class UTextProperty : public UProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.TextProperty");
		return ptr;
	}


};

// Class CoreUObject.Interface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UInterface : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Interface");
		return ptr;
	}


};

// Class CoreUObject.GCObjectReferencer
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UGCObjectReferencer : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.GCObjectReferencer");
		return ptr;
	}


};

// Class CoreUObject.TextBuffer
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UTextBuffer : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.TextBuffer");
		return ptr;
	}


};

// Class CoreUObject.Struct
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
#define PADDING_00AD - 0x0000 // Minimum to subtract -> (000C)
class UStruct : public UField
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x000C PADDING_00AD, unsigned char,                                                         pad_UHK84YXJM9[4]);                                        // 0x003C(0x0004) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0010 PADDING_00AD, class UStruct*,                                                        SuperField);                                               // 0x0040(0x0008) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0018 PADDING_00AD, class UField*,                                                         Children);                                                 // 0x0048(0x0008) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0020 PADDING_00AD, int,                                                                   PropertySize);                                             // 0x0050(0x0004) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0024 PADDING_00AD, int,                                                                   MinAlignment);                                             // 0x0054(0x0004) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0028 PADDING_00AD, TArray<unsigned char>,                                                                Script);                                                   // 0x0058(0x0010) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0038 PADDING_00AD, class UProperty*,                                                      PropertyLink);                                             // 0x0068(0x0008) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0040 PADDING_00AD, class UProperty*,                                                      RefLink);                                                  // 0x0070(0x0008) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0048 PADDING_00AD, class UProperty*,                                                      DestructorLink);                                           // 0x0078(0x0008) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0050 PADDING_00AD, class UProperty*,                                                      PostConstructLink);                                        // 0x0080(0x0008) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0058 PADDING_00AD, TArray<class UProperty*>,                                                                ScriptAndPropertyObjectReferences);                        // 0x0088(0x0010) NOT AUTO-GENERATED PROPERTY
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Struct");
		return ptr;
	}


};

// Class CoreUObject.ScriptStruct
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
// LastOffsetWithSize(0x0098)
class UScriptStruct : public UStruct
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ScriptStruct");
		return ptr;
	}


};

// Class CoreUObject.Package
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UPackage : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Package");
		return ptr;
	}


};

// Class CoreUObject.Class
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
// LastOffsetWithSize(0x0098)
class UClass : public UStruct
{
public:
	//union
	//{
	//};
	template<typename T>
	inline T* CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}

	inline UObject* CreateDefaultObject()
	{
		return GetVFunction<UObject * (*)(UClass*)>(this, 107)(this);
	}

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Class");
		return ptr;
	}


};

// Class CoreUObject.Function
// 0x0030 (FullSize[0x00C8] - InheritedSize[0x0098])
// LastOffsetWithSize(0x0098)
#define PADDING_00B8 - 0x0000 // Minimum to subtract -> (0000)
class UFunction : public UStruct
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_00B8, int32_t,                                                               FunctionFlags);                                            // 0x0098(0x0004) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0004 PADDING_00B8, int8_t,                                                                NumParms);                                                 // 0x009C(0x0001) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0005 PADDING_00B8, unsigned char,                                                         pad_9ETBMAE6JG[1]);                                        // 0x009D(0x0001) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0006 PADDING_00B8, int16_t,                                                               ParmsSize);                                                // 0x009E(0x0002) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0008 PADDING_00B8, uint16_t,                                                              ReturnValueOffset);                                        // 0x00A0(0x0002) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x000A PADDING_00B8, uint16_t,                                                              RPCId);                                                    // 0x00A2(0x0002) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x000C PADDING_00B8, uint16_t,                                                              RPCResponseId);                                            // 0x00A4(0x0002) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x000E PADDING_00B8, unsigned char,                                                         pad_JWE1C3RB1G[2]);                                        // 0x00A6(0x0002) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0010 PADDING_00B8, class UProperty*,                                                      FirstPropertyToInit);                                      // 0x00A8(0x0008) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0018 PADDING_00B8, class UFunction*,                                                      EventGraphFunction);                                       // 0x00B0(0x0008) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0020 PADDING_00B8, int,                                                                   EventGraphCallOffset);                                     // 0x00B8(0x0004) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0024 PADDING_00B8, unsigned char,                                                         pad_8EW0JORPFS[4]);                                        // 0x00BC(0x0004) NOT AUTO-GENERATED PROPERTY
		DEFINE_MEMBER_NNN(0x0028 PADDING_00B8, void*,                                                                 Func);                                                     // 0x00C0(0x0008) NOT AUTO-GENERATED PROPERTY
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Function");
		return ptr;
	}


};

// Class CoreUObject.DelegateFunction
// 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
class UDelegateFunction : public UFunction
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.DelegateFunction");
		return ptr;
	}


};

// Class CoreUObject.SparseDelegateFunction
// 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
class USparseDelegateFunction : public UDelegateFunction
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.SparseDelegateFunction");
		return ptr;
	}


};

// Class CoreUObject.DynamicClass
// 0x0168 (FullSize[0x0200] - InheritedSize[0x0098])
// LastOffsetWithSize(0x0098)
class UDynamicClass : public UClass
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.DynamicClass");
		return ptr;
	}


};

// Class CoreUObject.PackageMap
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UPackageMap : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.PackageMap");
		return ptr;
	}


};

// Class CoreUObject.Enum
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
class UEnum : public UField
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Enum");
		return ptr;
	}


};

// Class CoreUObject.EnumProperty
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
class UEnumProperty : public UProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.EnumProperty");
		return ptr;
	}


};

// Class CoreUObject.LinkerPlaceholderClass
// 0x0168 (FullSize[0x0200] - InheritedSize[0x0098])
// LastOffsetWithSize(0x0098)
class ULinkerPlaceholderClass : public UClass
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderClass");
		return ptr;
	}


};

// Class CoreUObject.LinkerPlaceholderExportObject
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class ULinkerPlaceholderExportObject : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderExportObject");
		return ptr;
	}


};

// Class CoreUObject.LinkerPlaceholderFunction
// 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
class ULinkerPlaceholderFunction : public UFunction
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderFunction");
		return ptr;
	}


};

// Class CoreUObject.MetaData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UMetaData : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.MetaData");
		return ptr;
	}


};

// Class CoreUObject.ObjectRedirector
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UObjectRedirector : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ObjectRedirector");
		return ptr;
	}


};

// Class CoreUObject.ArrayProperty
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
class UArrayProperty : public UProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ArrayProperty");
		return ptr;
	}


};

// Class CoreUObject.BoolProperty
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
class UBoolProperty : public UProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.BoolProperty");
		return ptr;
	}


};

// Class CoreUObject.ByteProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
// LastOffsetWithSize(0x0030)
class UByteProperty : public UNumericProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ByteProperty");
		return ptr;
	}


};

// Class CoreUObject.ObjectProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
// LastOffsetWithSize(0x0030)
class UObjectProperty : public UObjectPropertyBase
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ObjectProperty");
		return ptr;
	}


};

// Class CoreUObject.ClassProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0030)
class UClassProperty : public UObjectProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ClassProperty");
		return ptr;
	}


};

// Class CoreUObject.DelegateProperty
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
class UDelegateProperty : public UProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.DelegateProperty");
		return ptr;
	}


};

// Class CoreUObject.DoubleProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
// LastOffsetWithSize(0x0030)
class UDoubleProperty : public UNumericProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.DoubleProperty");
		return ptr;
	}


};

// Class CoreUObject.FloatProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
// LastOffsetWithSize(0x0030)
class UFloatProperty : public UNumericProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.FloatProperty");
		return ptr;
	}


};

// Class CoreUObject.IntProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
// LastOffsetWithSize(0x0030)
class UIntProperty : public UNumericProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.IntProperty");
		return ptr;
	}


};

// Class CoreUObject.Int16Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
// LastOffsetWithSize(0x0030)
class UInt16Property : public UNumericProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Int16Property");
		return ptr;
	}


};

// Class CoreUObject.Int64Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
// LastOffsetWithSize(0x0030)
class UInt64Property : public UNumericProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Int64Property");
		return ptr;
	}


};

// Class CoreUObject.Int8Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
// LastOffsetWithSize(0x0030)
class UInt8Property : public UNumericProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Int8Property");
		return ptr;
	}


};

// Class CoreUObject.InterfaceProperty
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
class UInterfaceProperty : public UProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.InterfaceProperty");
		return ptr;
	}


};

// Class CoreUObject.LazyObjectProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
// LastOffsetWithSize(0x0030)
class ULazyObjectProperty : public UObjectPropertyBase
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.LazyObjectProperty");
		return ptr;
	}


};

// Class CoreUObject.MapProperty
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
class UMapProperty : public UProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.MapProperty");
		return ptr;
	}


};

// Class CoreUObject.MulticastDelegateProperty
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
class UMulticastDelegateProperty : public UProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.MulticastDelegateProperty");
		return ptr;
	}


};

// Class CoreUObject.MulticastInlineDelegateProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
// LastOffsetWithSize(0x0030)
class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.MulticastInlineDelegateProperty");
		return ptr;
	}


};

// Class CoreUObject.MulticastSparseDelegateProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
// LastOffsetWithSize(0x0030)
class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.MulticastSparseDelegateProperty");
		return ptr;
	}


};

// Class CoreUObject.NameProperty
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
class UNameProperty : public UProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.NameProperty");
		return ptr;
	}


};

// Class CoreUObject.SetProperty
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
class USetProperty : public UProperty
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.SetProperty");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
