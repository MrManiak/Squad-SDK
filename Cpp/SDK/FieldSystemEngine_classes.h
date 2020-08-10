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

// Class FieldSystemEngine.FieldSystemActor
// 0x0018 (FullSize[0x0250] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_0032 - 0x0000 // Minimum to subtract -> (0010)
class AFieldSystemActor : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0032, class UFieldSystemComponent*,                                          FieldSystemComponent);                                     // 0x0248(0x0008)  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemActor");
		return ptr;
	}


};

// Class FieldSystemEngine.FieldSystem
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UFieldSystem : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystem");
		return ptr;
	}


};

// Class FieldSystemEngine.FieldSystemComponent
// 0x001B (FullSize[0x0420] - InheritedSize[0x0405])
// LastOffsetWithSize(0x0408)
#define PADDING_0034 - 0x0000 // Minimum to subtract -> (0000)
class UFieldSystemComponent : public UPrimitiveComponent
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0034, class UFieldSystem*,                                                   FieldSystem);                                              // 0x0408(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemComponent");
		return ptr;
	}


	void ResetFieldSystem();
	void ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& Position, const struct FVector& Direction, float Radius, float Magnitude);
	void ApplyStrainField(bool Enabled, const struct FVector& Position, float Radius, float Magnitude, int Iterations);
	void ApplyStayDynamicField(bool Enabled, const struct FVector& Position, float Radius);
	void ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& Position, float Radius, float Magnitude);
	void ApplyRadialForce(bool Enabled, const struct FVector& Position, float Magnitude);
	void ApplyPhysicsField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
	void ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude);
	void AddFieldCommand(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
};

// Class FieldSystemEngine.FieldSystemMetaData
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
class UFieldSystemMetaData : public UActorComponent
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaData");
		return ptr;
	}


};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// 0x0004 (FullSize[0x00DC] - InheritedSize[0x00D8])
// LastOffsetWithSize(0x00C8)
#define PADDING_0037 - 0x0000 // Minimum to subtract -> (0010)
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0037, int,                                                                   Iterations);                                               // 0x00D8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaDataIteration");
		return ptr;
	}


	class UFieldSystemMetaDataIteration* SetMetaDataIteration(int Iterations);
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// 0x0001 (FullSize[0x00D9] - InheritedSize[0x00D8])
// LastOffsetWithSize(0x00C8)
#define PADDING_0038 - 0x0000 // Minimum to subtract -> (0010)
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0038, TEnumAsByte<EFieldResolutionType>,                                     ResolutionType);                                           // 0x00D8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution");
		return ptr;
	}


	class UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType> ResolutionType);
};

// Class FieldSystemEngine.FieldNodeBase
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
class UFieldNodeBase : public UActorComponent
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeBase");
		return ptr;
	}


};

// Class FieldSystemEngine.FieldNodeInt
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
// LastOffsetWithSize(0x00C8)
class UFieldNodeInt : public UFieldNodeBase
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeInt");
		return ptr;
	}


};

// Class FieldSystemEngine.FieldNodeFloat
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
// LastOffsetWithSize(0x00C8)
class UFieldNodeFloat : public UFieldNodeBase
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeFloat");
		return ptr;
	}


};

// Class FieldSystemEngine.FieldNodeVector
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
// LastOffsetWithSize(0x00C8)
class UFieldNodeVector : public UFieldNodeBase
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeVector");
		return ptr;
	}


};

// Class FieldSystemEngine.UniformInteger
// 0x0004 (FullSize[0x00DC] - InheritedSize[0x00D8])
// LastOffsetWithSize(0x00C8)
#define PADDING_003F - 0x0000 // Minimum to subtract -> (0010)
class UUniformInteger : public UFieldNodeInt
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_003F, int,                                                                   Magnitude);                                                // 0x00D8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.UniformInteger");
		return ptr;
	}


	class UUniformInteger* SetUniformInteger(int Magnitude);
};

// Class FieldSystemEngine.RadialIntMask
// 0x0019 (FullSize[0x00F1] - InheritedSize[0x00D8])
// LastOffsetWithSize(0x00C8)
#define PADDING_0040 - 0x0000 // Minimum to subtract -> (0010)
class URadialIntMask : public UFieldNodeInt
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0040, float,                                                                 Radius);                                                   // 0x00D8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0040, struct FVector,                                                        Position);                                                 // 0x00DC(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0040, int,                                                                   InteriorValue);                                            // 0x00E8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0040, int,                                                                   ExteriorValue);                                            // 0x00EC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0040, TEnumAsByte<ESetMaskConditionType>,                                    SetMaskCondition);                                         // 0x00F0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.RadialIntMask");
		return ptr;
	}


	class URadialIntMask* SetRadialIntMask(float Radius, const struct FVector& Position, int InteriorValue, int ExteriorValue, TEnumAsByte<ESetMaskConditionType> SetMaskConditionIn);
};

// Class FieldSystemEngine.UniformScalar
// 0x0004 (FullSize[0x00DC] - InheritedSize[0x00D8])
// LastOffsetWithSize(0x00C8)
#define PADDING_0043 - 0x0000 // Minimum to subtract -> (0010)
class UUniformScalar : public UFieldNodeFloat
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0043, float,                                                                 Magnitude);                                                // 0x00D8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.UniformScalar");
		return ptr;
	}


	class UUniformScalar* SetUniformScalar(float Magnitude);
};

// Class FieldSystemEngine.RadialFalloff
// 0x0021 (FullSize[0x00F9] - InheritedSize[0x00D8])
// LastOffsetWithSize(0x00C8)
#define PADDING_0045 - 0x0000 // Minimum to subtract -> (0010)
class URadialFalloff : public UFieldNodeFloat
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0045, float,                                                                 Magnitude);                                                // 0x00D8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0045, float,                                                                 MinRange);                                                 // 0x00DC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0045, float,                                                                 MaxRange);                                                 // 0x00E0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0045, float,                                                                 Default);                                                  // 0x00E4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0045, float,                                                                 Radius);                                                   // 0x00E8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0045, struct FVector,                                                        Position);                                                 // 0x00EC(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0045, TEnumAsByte<EFieldFalloffType>,                                        Falloff);                                                  // 0x00F8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.RadialFalloff");
		return ptr;
	}


	class URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, const struct FVector& Position, TEnumAsByte<EFieldFalloffType> Falloff);
};

// Class FieldSystemEngine.PlaneFalloff
// 0x002D (FullSize[0x0105] - InheritedSize[0x00D8])
// LastOffsetWithSize(0x00C8)
#define PADDING_0047 - 0x0000 // Minimum to subtract -> (0010)
class UPlaneFalloff : public UFieldNodeFloat
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0047, float,                                                                 Magnitude);                                                // 0x00D8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0047, float,                                                                 MinRange);                                                 // 0x00DC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0047, float,                                                                 MaxRange);                                                 // 0x00E0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0047, float,                                                                 Default);                                                  // 0x00E4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0047, float,                                                                 distance);                                                 // 0x00E8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0047, struct FVector,                                                        Position);                                                 // 0x00EC(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0047, struct FVector,                                                        Normal);                                                   // 0x00F8(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003C PADDING_0047, TEnumAsByte<EFieldFalloffType>,                                        Falloff);                                                  // 0x0104(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.PlaneFalloff");
		return ptr;
	}


	class UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float distance, const struct FVector& Position, const struct FVector& Normal, TEnumAsByte<EFieldFalloffType> Falloff);
};

// Class FieldSystemEngine.BoxFalloff
// 0x0049 (FullSize[0x0121] - InheritedSize[0x00D8])
// LastOffsetWithSize(0x00C8)
#define PADDING_0049 - 0x0000 // Minimum to subtract -> (0010)
class UBoxFalloff : public UFieldNodeFloat
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0049, float,                                                                 Magnitude);                                                // 0x00D8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0049, float,                                                                 MinRange);                                                 // 0x00DC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0049, float,                                                                 MaxRange);                                                 // 0x00E0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0049, float,                                                                 Default);                                                  // 0x00E4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0049, struct FTransform,                                                     Transform);                                                // 0x00F0(0x0030)  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0049, TEnumAsByte<EFieldFalloffType>,                                        Falloff);                                                  // 0x0120(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.BoxFalloff");
		return ptr;
	}


	class UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, const struct FTransform& Transform, TEnumAsByte<EFieldFalloffType> Falloff);
};

// Class FieldSystemEngine.NoiseField
// 0x0038 (FullSize[0x0110] - InheritedSize[0x00D8])
// LastOffsetWithSize(0x00C8)
#define PADDING_004C - 0x0000 // Minimum to subtract -> (0010)
class UNoiseField : public UFieldNodeFloat
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_004C, float,                                                                 MinRange);                                                 // 0x00D8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_004C, float,                                                                 MaxRange);                                                 // 0x00DC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_004C, struct FTransform,                                                     Transform);                                                // 0x00E0(0x0030)  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.NoiseField");
		return ptr;
	}


	class UNoiseField* SetNoiseField(float MinRange, float MaxRange, const struct FTransform& Transform);
};

// Class FieldSystemEngine.UniformVector
// 0x0010 (FullSize[0x00E8] - InheritedSize[0x00D8])
// LastOffsetWithSize(0x00C8)
#define PADDING_004D - 0x0000 // Minimum to subtract -> (0010)
class UUniformVector : public UFieldNodeVector
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_004D, float,                                                                 Magnitude);                                                // 0x00D8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_004D, struct FVector,                                                        Direction);                                                // 0x00DC(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.UniformVector");
		return ptr;
	}


	class UUniformVector* SetUniformVector(float Magnitude, const struct FVector& Direction);
};

// Class FieldSystemEngine.RadialVector
// 0x0010 (FullSize[0x00E8] - InheritedSize[0x00D8])
// LastOffsetWithSize(0x00C8)
#define PADDING_0052 - 0x0000 // Minimum to subtract -> (0010)
class URadialVector : public UFieldNodeVector
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0052, float,                                                                 Magnitude);                                                // 0x00D8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0052, struct FVector,                                                        Position);                                                 // 0x00DC(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.RadialVector");
		return ptr;
	}


	class URadialVector* SetRadialVector(float Magnitude, const struct FVector& Position);
};

// Class FieldSystemEngine.RandomVector
// 0x0004 (FullSize[0x00DC] - InheritedSize[0x00D8])
// LastOffsetWithSize(0x00C8)
#define PADDING_0056 - 0x0000 // Minimum to subtract -> (0010)
class URandomVector : public UFieldNodeVector
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0056, float,                                                                 Magnitude);                                                // 0x00D8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.RandomVector");
		return ptr;
	}


	class URandomVector* SetRandomVector(float Magnitude);
};

// Class FieldSystemEngine.OperatorField
// 0x0019 (FullSize[0x00F1] - InheritedSize[0x00D8])
// LastOffsetWithSize(0x00C8)
#define PADDING_0058 - 0x0000 // Minimum to subtract -> (0010)
class UOperatorField : public UFieldNodeBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0058, float,                                                                 Magnitude);                                                // 0x00D8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0058, class UFieldNodeBase*,                                                 RightField);                                               // 0x00E0(0x0008)  (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0058, class UFieldNodeBase*,                                                 LeftField);                                                // 0x00E8(0x0008)  (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0058, TEnumAsByte<EFieldOperationType>,                                      Operation);                                                // 0x00F0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.OperatorField");
		return ptr;
	}


	class UOperatorField* SetOperatorField(float Magnitude, class UFieldNodeBase* RightField, class UFieldNodeBase* LeftField, TEnumAsByte<EFieldOperationType> Operation);
};

// Class FieldSystemEngine.ToIntegerField
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
// LastOffsetWithSize(0x00C8)
#define PADDING_005B - 0x0000 // Minimum to subtract -> (0010)
class UToIntegerField : public UFieldNodeInt
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_005B, class UFieldNodeFloat*,                                                FloatField);                                               // 0x00D8(0x0008)  (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.ToIntegerField");
		return ptr;
	}


	class UToIntegerField* SetToIntegerField(class UFieldNodeFloat* FloatField);
};

// Class FieldSystemEngine.ToFloatField
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
// LastOffsetWithSize(0x00C8)
#define PADDING_005E - 0x0000 // Minimum to subtract -> (0010)
class UToFloatField : public UFieldNodeFloat
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_005E, class UFieldNodeInt*,                                                  IntField);                                                 // 0x00D8(0x0008)  (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.ToFloatField");
		return ptr;
	}


	class UToFloatField* SetToFloatField(class UFieldNodeInt* IntegerField);
};

// Class FieldSystemEngine.CullingField
// 0x0011 (FullSize[0x00E9] - InheritedSize[0x00D8])
// LastOffsetWithSize(0x00C8)
#define PADDING_0064 - 0x0000 // Minimum to subtract -> (0010)
class UCullingField : public UFieldNodeBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0064, class UFieldNodeBase*,                                                 Culling);                                                  // 0x00D8(0x0008)  (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0064, class UFieldNodeBase*,                                                 Field);                                                    // 0x00E0(0x0008)  (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0064, TEnumAsByte<EFieldCullingOperationType>,                               Operation);                                                // 0x00E8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.CullingField");
		return ptr;
	}


	class UCullingField* SetCullingField(class UFieldNodeBase* Culling, class UFieldNodeBase* Field, TEnumAsByte<EFieldCullingOperationType> Operation);
};

// Class FieldSystemEngine.ReturnResultsTerminal
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
// LastOffsetWithSize(0x00C8)
class UReturnResultsTerminal : public UFieldNodeBase
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.ReturnResultsTerminal");
		return ptr;
	}


	class UReturnResultsTerminal* SetReturnResultsTerminal();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
