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

// Class ChaosSolverEngine.ChaosEventListenerComponent
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
class UChaosEventListenerComponent : public UActorComponent
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosEventListenerComponent");
		return ptr;
	}


};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// 0x0168 (FullSize[0x0240] - InheritedSize[0x00D8])
// LastOffsetWithSize(0x00C8)
#define PADDING_001E - 0x0000 // Minimum to subtract -> (00D8)
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x00D8 PADDING_001E, TMap<class UPrimitiveComponent* COMMA struct FChaosHandlerSet>,        CollisionEventRegistrations);                              // 0x01A0(0x0050)  (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0128 PADDING_001E, TMap<class UPrimitiveComponent* COMMA struct FBreakEventCallbackWrapper>, BreakEventRegistrations);                                  // 0x01F0(0x0050)  (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosGameplayEventDispatcher");
		return ptr;
	}


};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UChaosNotifyHandlerInterface : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosNotifyHandlerInterface");
		return ptr;
	}


};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary");
		return ptr;
	}


	static struct FHitResult STATIC_ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision);
};

// Class ChaosSolverEngine.ChaosSolver
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UChaosSolver : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolver");
		return ptr;
	}


};

// Class ChaosSolverEngine.ChaosSolverActor
// 0x0080 (FullSize[0x02B8] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_0023 - 0x0000 // Minimum to subtract -> (0010)
class AChaosSolverActor : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0023, float,                                                                 TimeStepMultiplier);                                       // 0x0248(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0023, int,                                                                   CollisionIterations);                                      // 0x024C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0023, int,                                                                   PushOutIterations);                                        // 0x0250(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0023, int,                                                                   PushOutPairIterations);                                    // 0x0254(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0023, float,                                                                 ClusterConnectionFactor);                                  // 0x0258(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0023, EClusterConnectionTypeEnum,                                            ClusterUnionConnectionType);                               // 0x025C(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0025 PADDING_0023, bool,                                                                  DoGenerateCollisionData);                                  // 0x025D(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0023, struct FSolverCollisionFilterSettings,                                 CollisionFilterSettings);                                  // 0x0260(0x0010)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0023, bool,                                                                  DoGenerateBreakingData);                                   // 0x0270(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003C PADDING_0023, struct FSolverBreakingFilterSettings,                                  BreakingFilterSettings);                                   // 0x0274(0x0010)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x004C PADDING_0023, bool,                                                                  DoGenerateTrailingData);                                   // 0x0284(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0023, struct FSolverTrailingFilterSettings,                                  TrailingFilterSettings);                                   // 0x0288(0x0010)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0023, bool,                                                                  bHasFloor);                                                // 0x0298(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0064 PADDING_0023, float,                                                                 FloorHeight);                                              // 0x029C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0023, float,                                                                 MassScale);                                                // 0x02A0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x006C PADDING_0023, struct FChaosDebugSubstepControl,                                      ChaosDebugSubstepControl);                                 // 0x02A4(0x0003)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0023, class UBillboardComponent*,                                            SpriteComponent);                                          // 0x02A8(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0023, class UChaosGameplayEventDispatcher*,                                  GameplayEventDispatcherComponent);                         // 0x02B0(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolverActor");
		return ptr;
	}


	void SetSolverActive(bool bActive);
	void SetAsCurrentWorldSolver();
};

// Class ChaosSolverEngine.ChaosSolverSettings
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0025 - 0x0000 // Minimum to subtract -> (0018)
class UChaosSolverSettings : public UDeveloperSettings
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0018 PADDING_0025, struct FSoftClassPath,                                                 DefaultChaosSolverActorClass);                             // 0x0040(0x0018)  (Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolverSettings");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
