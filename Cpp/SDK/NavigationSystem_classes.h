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

// Class NavigationSystem.NavigationData
// 0x0178 (FullSize[0x03B0] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_08AC - 0x0000 // Minimum to subtract -> (0018)
class ANavigationData : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0018 PADDING_08AC, class UPrimitiveComponent*,                                            RenderingComp);                                            // 0x0250(0x0008)  (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_08AC, struct FNavDataConfig,                                                 NavDataConfig);                                            // 0x0258(0x0068)  (Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0088 PADDING_08AC, unsigned char,                                                         bEnableDrawing);                                           // 0x02C0(0x0001) BIT_FIELD (Edit, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0088 PADDING_08AC, unsigned char,                                                         bForceRebuildOnLoad);                                      // 0x02C0(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0088 PADDING_08AC, unsigned char,                                                         bCanBeMainNavData);                                        // 0x02C0(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0088 PADDING_08AC, unsigned char,                                                         bCanSpawnOnRebuild);                                       // 0x02C0(0x0001) BIT_FIELD (Edit, Config, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0088 PADDING_08AC, unsigned char,                                                         bRebuildAtRuntime);                                        // 0x02C0(0x0001) BIT_FIELD (Config, Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x008C PADDING_08AC, ERuntimeGenerationType,                                                RuntimeGeneration);                                        // 0x02C4(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0090 PADDING_08AC, float,                                                                 ObservedPathsTickInterval);                                // 0x02C8(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0094 PADDING_08AC, uint32_t,                                                              DataVersion);                                              // 0x02CC(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0168 PADDING_08AC, TArray<struct FSupportedAreaData>,                                     SupportedAreas);                                           // 0x03A0(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationData");
		return ptr;
	}


};

// Class NavigationSystem.AbstractNavData
// 0x0058 (FullSize[0x0408] - InheritedSize[0x03B0])
// LastOffsetWithSize(0x03B0)
class AAbstractNavData : public ANavigationData
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.AbstractNavData");
		return ptr;
	}


};

// Class NavigationSystem.CrowdManagerBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UCrowdManagerBase : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.CrowdManagerBase");
		return ptr;
	}


};

// Class NavigationSystem.NavArea
// 0x001A (FullSize[0x0042] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_08AF - 0x0000 // Minimum to subtract -> (0008)
class UNavArea : public UNavAreaBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_08AF, float,                                                                 DefaultCost);                                              // 0x0030(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_08AF, float,                                                                 FixedAreaEnteringCost);                                    // 0x0034(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0010 PADDING_08AF, struct FColor,                                                         DrawColor);                                                // 0x0038(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_08AF, struct FNavAgentSelector,                                              SupportedAgents);                                          // 0x003C(0x0004)  (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_08AF, unsigned char,                                                         bSupportsAgent0);                                          // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_08AF, unsigned char,                                                         bSupportsAgent1);                                          // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_08AF, unsigned char,                                                         bSupportsAgent2);                                          // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_08AF, unsigned char,                                                         bSupportsAgent3);                                          // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_08AF, unsigned char,                                                         bSupportsAgent4);                                          // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_08AF, unsigned char,                                                         bSupportsAgent5);                                          // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_08AF, unsigned char,                                                         bSupportsAgent6);                                          // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_08AF, unsigned char,                                                         bSupportsAgent7);                                          // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0019 PADDING_08AF, unsigned char,                                                         bSupportsAgent8);                                          // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0019 PADDING_08AF, unsigned char,                                                         bSupportsAgent9);                                          // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0019 PADDING_08AF, unsigned char,                                                         bSupportsAgent10);                                         // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0019 PADDING_08AF, unsigned char,                                                         bSupportsAgent11);                                         // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0019 PADDING_08AF, unsigned char,                                                         bSupportsAgent12);                                         // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0019 PADDING_08AF, unsigned char,                                                         bSupportsAgent13);                                         // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0019 PADDING_08AF, unsigned char,                                                         bSupportsAgent14);                                         // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0019 PADDING_08AF, unsigned char,                                                         bSupportsAgent15);                                         // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea");
		return ptr;
	}


};

// Class NavigationSystem.NavArea_Default
// 0x0006 (FullSize[0x0048] - InheritedSize[0x0042])
// LastOffsetWithSize(0x0042)
class UNavArea_Default : public UNavArea
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Default");
		return ptr;
	}


};

// Class NavigationSystem.NavArea_LowHeight
// 0x0006 (FullSize[0x0048] - InheritedSize[0x0042])
// LastOffsetWithSize(0x0042)
class UNavArea_LowHeight : public UNavArea
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_LowHeight");
		return ptr;
	}


};

// Class NavigationSystem.NavArea_Null
// 0x0006 (FullSize[0x0048] - InheritedSize[0x0042])
// LastOffsetWithSize(0x0042)
class UNavArea_Null : public UNavArea
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Null");
		return ptr;
	}


};

// Class NavigationSystem.NavArea_Obstacle
// 0x0006 (FullSize[0x0048] - InheritedSize[0x0042])
// LastOffsetWithSize(0x0042)
class UNavArea_Obstacle : public UNavArea
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Obstacle");
		return ptr;
	}


};

// Class NavigationSystem.NavAreaMeta
// 0x0006 (FullSize[0x0048] - InheritedSize[0x0042])
// LastOffsetWithSize(0x0042)
class UNavAreaMeta : public UNavArea
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta");
		return ptr;
	}


};

// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// 0x0080 (FullSize[0x00C8] - InheritedSize[0x0048])
// LastOffsetWithSize(0x0042)
#define PADDING_08B5 - 0x0000 // Minimum to subtract -> (0006)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0006 PADDING_08B5, class UClass*,                                                         Agent0Area);                                               // 0x0048(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000E PADDING_08B5, class UClass*,                                                         Agent1Area);                                               // 0x0050(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0016 PADDING_08B5, class UClass*,                                                         Agent2Area);                                               // 0x0058(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001E PADDING_08B5, class UClass*,                                                         Agent3Area);                                               // 0x0060(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0026 PADDING_08B5, class UClass*,                                                         Agent4Area);                                               // 0x0068(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002E PADDING_08B5, class UClass*,                                                         Agent5Area);                                               // 0x0070(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0036 PADDING_08B5, class UClass*,                                                         Agent6Area);                                               // 0x0078(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003E PADDING_08B5, class UClass*,                                                         Agent7Area);                                               // 0x0080(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0046 PADDING_08B5, class UClass*,                                                         Agent8Area);                                               // 0x0088(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x004E PADDING_08B5, class UClass*,                                                         Agent9Area);                                               // 0x0090(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0056 PADDING_08B5, class UClass*,                                                         Agent10Area);                                              // 0x0098(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005E PADDING_08B5, class UClass*,                                                         Agent11Area);                                              // 0x00A0(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0066 PADDING_08B5, class UClass*,                                                         Agent12Area);                                              // 0x00A8(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x006E PADDING_08B5, class UClass*,                                                         Agent13Area);                                              // 0x00B0(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0076 PADDING_08B5, class UClass*,                                                         Agent14Area);                                              // 0x00B8(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x007E PADDING_08B5, class UClass*,                                                         Agent15Area);                                              // 0x00C0(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta_SwitchByAgent");
		return ptr;
	}


};

// Class NavigationSystem.NavCollision
// 0x0080 (FullSize[0x00A9] - InheritedSize[0x0029])
// LastOffsetWithSize(0x0029)
#define PADDING_08B6 - 0x0000 // Minimum to subtract -> (0057)
class UNavCollision : public UNavCollisionBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0057 PADDING_08B6, TArray<struct FNavCollisionCylinder>,                                  CylinderCollision);                                        // 0x0080(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0067 PADDING_08B6, TArray<struct FNavCollisionBox>,                                       BoxCollision);                                             // 0x0090(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0077 PADDING_08B6, class UClass*,                                                         AreaClass);                                                // 0x00A0(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x007F PADDING_08B6, unsigned char,                                                         bGatherConvexGeometry);                                    // 0x00A8(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x007F PADDING_08B6, unsigned char,                                                         bCreateOnClient);                                          // 0x00A8(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavCollision");
		return ptr;
	}


};

// Class NavigationSystem.NavigationGraph
// 0x0058 (FullSize[0x0408] - InheritedSize[0x03B0])
// LastOffsetWithSize(0x03B0)
class ANavigationGraph : public ANavigationData
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraph");
		return ptr;
	}


};

// Class NavigationSystem.NavigationGraphNode
// 0x0010 (FullSize[0x0248] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
class ANavigationGraphNode : public AActor
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNode");
		return ptr;
	}


};

// Class NavigationSystem.NavigationGraphNodeComponent
// 0x00C0 (FullSize[0x0240] - InheritedSize[0x0180])
// LastOffsetWithSize(0x018F)
#define PADDING_08B9 - 0x0000 // Minimum to subtract -> (0089)
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0089 PADDING_08B9, struct FNavGraphNode,                                                  Node);                                                     // 0x0218(0x0018)  (NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A1 PADDING_08B9, class UNavigationGraphNodeComponent*,                                  NextNodeComponent);                                        // 0x0230(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A9 PADDING_08B9, class UNavigationGraphNodeComponent*,                                  PrevNodeComponent);                                        // 0x0238(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNodeComponent");
		return ptr;
	}


};

// Class NavigationSystem.NavigationInvokerComponent
// 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_08BA - 0x0000 // Minimum to subtract -> (0010)
class UNavigationInvokerComponent : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_08BA, float,                                                                 TileGenerationRadius);                                     // 0x00D8(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0014 PADDING_08BA, float,                                                                 TileRemovalRadius);                                        // 0x00DC(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationInvokerComponent");
		return ptr;
	}


};

// Class NavigationSystem.NavigationPath
// 0x0021 (FullSize[0x0049] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_08BB - 0x0000 // Minimum to subtract -> (0000)
class UNavigationPath : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_08BB, struct FScriptMulticastDelegate,                                       PathUpdatedNotifier);                                      // 0x0028(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_08BB, TArray<struct FVector>,                                                PathPoints);                                               // 0x0038(0x0010)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_08BB, TEnumAsByte<ENavigationOptionFlag>,                                    RecalculateOnInvalidation);                                // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationPath");
		return ptr;
	}


	bool IsValid();
	bool IsStringPulled();
	bool IsPartial();
	float GetPathLength();
	float GetPathCost();
	struct FString GetDebugString();
	void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag> DoRecalculation);
	void EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor);
};

// Class NavigationSystem.NavigationPathGenerator
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UNavigationPathGenerator : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationPathGenerator");
		return ptr;
	}


};

// Class NavigationSystem.NavigationQueryFilter
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_08BD - 0x0000 // Minimum to subtract -> (0000)
class UNavigationQueryFilter : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_08BD, TArray<struct FNavigationFilterArea>,                                  Areas);                                                    // 0x0028(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_08BD, struct FNavigationFilterFlags,                                         IncludeFlags);                                             // 0x0038(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_08BD, struct FNavigationFilterFlags,                                         ExcludeFlags);                                             // 0x003C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationQueryFilter");
		return ptr;
	}


};

// Class NavigationSystem.NavigationSystemV1
// 0x01B5 (FullSize[0x01DD] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_08BE - 0x0000 // Minimum to subtract -> (0000)
class UNavigationSystemV1 : public UNavigationSystemBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_08BE, class ANavigationData*,                                                MainNavData);                                              // 0x0028(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_08BE, class ANavigationData*,                                                AbstractNavData);                                          // 0x0030(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_08BE, unsigned char,                                                         bAutoCreateNavigationData);                                // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0038 PADDING_08BE, unsigned char,                                                         bSpawnNavDataInNavBoundsLevel);                            // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0038 PADDING_08BE, unsigned char,                                                         bAllowClientSideNavigation);                               // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0038 PADDING_08BE, unsigned char,                                                         bShouldDiscardSubLevelNavData);                            // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0038 PADDING_08BE, unsigned char,                                                         bTickWhilePaused);                                         // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0038 PADDING_08BE, unsigned char,                                                         bSupportRebuilding);                                       // 0x0060(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0038 PADDING_08BE, unsigned char,                                                         bInitialBuildingLocked);                                   // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0039 PADDING_08BE, unsigned char,                                                         bSkipAgentHeightCheckWhenPickingNavData);                  // 0x0061(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003C PADDING_08BE, ENavDataGatheringModeConfig,                                           DataGatheringMode);                                        // 0x0064(0x0001)  (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0040 PADDING_08BE, unsigned char,                                                         bGenerateNavigationOnlyAroundNavigationInvokers);          // 0x0068(0x0001) BIT_FIELD (Edit, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0044 PADDING_08BE, float,                                                                 ActiveTilesUpdateInterval);                                // 0x006C(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0048 PADDING_08BE, TArray<struct FNavDataConfig>,                                         SupportedAgents);                                          // 0x0070(0x0010)  (Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0058 PADDING_08BE, float,                                                                 DirtyAreasUpdateFreq);                                     // 0x0080(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_08BE, TArray<class ANavigationData*>,                                        NavDataSet);                                               // 0x0088(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0070 PADDING_08BE, TArray<class ANavigationData*>,                                        NavDataRegistrationQueue);                                 // 0x0098(0x0010)  (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_08BE, struct FScriptMulticastDelegate,                                       OnNavDataRegisteredEvent);                                 // 0x0108(0x0010)  (ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_08BE, struct FScriptMulticastDelegate,                                       OnNavigationGenerationFinishedDelegate);                   // 0x0118(0x0010)  (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01DC PADDING_08BE, EFNavigationSystemRunMode,                                             OperationMode);                                            // 0x0204(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemV1");
		return ptr;
	}


	void UnregisterNavigationInvoker(class AActor* Invoker);
	static void STATIC_SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal);
	static void STATIC_SimpleMoveToActor(class AController* Controller, class AActor* Goal);
	void SetMaxSimultaneousTileGenerationJobsCount(int MaxNumberOfJobs);
	void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);
	void ResetMaxSimultaneousTileGenerationJobsCount();
	void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
	static struct FVector STATIC_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
	void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);
	static bool STATIC_NavigationRaycast(class UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, struct FVector* HitLocation, class UClass* FilterClass, class AController* Querier);
	bool K2_ReplaceAreaInOctreeData(class UObject* Object, class UClass* OldArea, class UClass* NewArea);
	static bool STATIC_K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, struct FVector* ProjectedLocation, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
	static bool STATIC_K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	static bool STATIC_K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	static bool STATIC_K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	static bool STATIC_IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);
	static bool STATIC_IsNavigationBeingBuilt(class UObject* WorldContextObject);
	static struct FVector STATIC_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	static struct FVector STATIC_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	static TEnumAsByte<ENavigationQueryResult> STATIC_GetPathLength(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathLength, class ANavigationData* NavData, class UClass* FilterClass);
	static TEnumAsByte<ENavigationQueryResult> STATIC_GetPathCost(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathCost, class ANavigationData* NavData, class UClass* FilterClass);
	static class UNavigationSystemV1* STATIC_GetNavigationSystem(class UObject* WorldContextObject);
	static class UNavigationPath* STATIC_FindPathToLocationSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass);
	static class UNavigationPath* STATIC_FindPathToActorSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass);
};

// Class NavigationSystem.NavigationSystemModuleConfig
// 0x0008 (FullSize[0x0049] - InheritedSize[0x0041])
// LastOffsetWithSize(0x0041)
#define PADDING_08BF - 0x0000 // Minimum to subtract -> (0007)
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_08BF, unsigned char,                                                         bStrictlyStatic);                                          // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0007 PADDING_08BF, unsigned char,                                                         bCreateOnClient);                                          // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0007 PADDING_08BF, unsigned char,                                                         bAutoSpawnMissingNavData);                                 // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0007 PADDING_08BF, unsigned char,                                                         bSpawnNavDataInNavBoundsLevel);                            // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemModuleConfig");
		return ptr;
	}


};

// Class NavigationSystem.NavigationTestingActor
// 0x00C8 (FullSize[0x0300] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_08C0 - 0x0000 // Minimum to subtract -> (0020)
class ANavigationTestingActor : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0020 PADDING_08C0, class UCapsuleComponent*,                                              CapsuleComponent);                                         // 0x0258(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0028 PADDING_08C0, class UNavigationInvokerComponent*,                                    InvokerComponent);                                         // 0x0260(0x0008)  (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0030 PADDING_08C0, unsigned char,                                                         bActAsNavigationInvoker);                                  // 0x0268(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0038 PADDING_08C0, struct FNavAgentProperties,                                            NavAgentProps);                                            // 0x0270(0x0030)  (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0068 PADDING_08C0, struct FVector,                                                        QueryingExtent);                                           // 0x02A0(0x000C)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0078 PADDING_08C0, class ANavigationData*,                                                MyNavData);                                                // 0x02B0(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_08C0, struct FVector,                                                        ProjectedLocation);                                        // 0x02B8(0x000C)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x008C PADDING_08C0, unsigned char,                                                         bProjectedLocationValid);                                  // 0x02C4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x008C PADDING_08C0, unsigned char,                                                         bSearchStart);                                             // 0x02C4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x008C PADDING_08C0, unsigned char,                                                         bBacktracking);                                            // 0x02C4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x008C PADDING_08C0, unsigned char,                                                         bUseHierarchicalPathfinding);                              // 0x02C4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x008C PADDING_08C0, unsigned char,                                                         bGatherDetailedInfo);                                      // 0x02C4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x008C PADDING_08C0, unsigned char,                                                         bDrawDistanceToWall);                                      // 0x02C4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x008C PADDING_08C0, unsigned char,                                                         bShowNodePool);                                            // 0x02C4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x008C PADDING_08C0, unsigned char,                                                         bShowBestPath);                                            // 0x02C4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x008D PADDING_08C0, unsigned char,                                                         bShowDiffWithPreviousStep);                                // 0x02C5(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x008D PADDING_08C0, unsigned char,                                                         bShouldBeVisibleInGame);                                   // 0x02C5(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0090 PADDING_08C0, TEnumAsByte<ENavCostDisplay>,                                          CostDisplayMode);                                          // 0x02C8(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0094 PADDING_08C0, struct FVector2D,                                                      TextCanvasOffset);                                         // 0x02CC(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x009C PADDING_08C0, unsigned char,                                                         bPathExist);                                               // 0x02D4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x009C PADDING_08C0, unsigned char,                                                         bPathIsPartial);                                           // 0x02D4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x009C PADDING_08C0, unsigned char,                                                         bPathSearchOutOfNodes);                                    // 0x02D4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_08C0, float,                                                                 PathfindingTime);                                          // 0x02D8(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A4 PADDING_08C0, float,                                                                 PathCost);                                                 // 0x02DC(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_08C0, int,                                                                   PathfindingSteps);                                         // 0x02E0(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_08C0, class ANavigationTestingActor*,                                        OtherActor);                                               // 0x02E8(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_08C0, class UClass*,                                                         FilterClass);                                              // 0x02F0(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_08C0, int,                                                                   ShowStepIndex);                                            // 0x02F8(0x0004)  (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C4 PADDING_08C0, float,                                                                 OffsetFromCornersDistance);                                // 0x02FC(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationTestingActor");
		return ptr;
	}


};

// Class NavigationSystem.NavLinkComponent
// 0x001B (FullSize[0x0420] - InheritedSize[0x0405])
// LastOffsetWithSize(0x0408)
#define PADDING_08C1 - 0x0000 // Minimum to subtract -> (0008)
class UNavLinkComponent : public UPrimitiveComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_08C1, TArray<struct FNavigationLink>,                                        Links);                                                    // 0x0410(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkComponent");
		return ptr;
	}


};

// Class NavigationSystem.NavRelevantComponent
// 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_08C2 - 0x0000 // Minimum to subtract -> (0034)
class UNavRelevantComponent : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0034 PADDING_08C2, unsigned char,                                                         bAttachToOwnersRoot);                                      // 0x00FC(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0038 PADDING_08C2, class UObject*,                                                        CachedNavParent);                                          // 0x0100(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavRelevantComponent");
		return ptr;
	}


	void SetNavigationRelevancy(bool bRelevant);
};

// Class NavigationSystem.NavLinkCustomComponent
// 0x0071 (FullSize[0x0179] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_08C3 - 0x0000 // Minimum to subtract -> (0008)
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_08C3, uint32_t,                                                              NavLinkUserId);                                            // 0x0110(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0010 PADDING_08C3, class UClass*,                                                         EnabledAreaClass);                                         // 0x0118(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0018 PADDING_08C3, class UClass*,                                                         DisabledAreaClass);                                        // 0x0120(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0020 PADDING_08C3, struct FNavAgentSelector,                                              SupportedAgents);                                          // 0x0128(0x0004)  (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0024 PADDING_08C3, struct FVector,                                                        LinkRelativeStart);                                        // 0x012C(0x000C)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0030 PADDING_08C3, struct FVector,                                                        LinkRelativeEnd);                                          // 0x0138(0x000C)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x003C PADDING_08C3, TEnumAsByte<ENavLinkDirection>,                                        LinkDirection);                                            // 0x0144(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0040 PADDING_08C3, unsigned char,                                                         bLinkEnabled);                                             // 0x0148(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0040 PADDING_08C3, unsigned char,                                                         bNotifyWhenEnabled);                                       // 0x0148(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0040 PADDING_08C3, unsigned char,                                                         bNotifyWhenDisabled);                                      // 0x0148(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0040 PADDING_08C3, unsigned char,                                                         bCreateBoxObstacle);                                       // 0x0148(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0044 PADDING_08C3, struct FVector,                                                        ObstacleOffset);                                           // 0x014C(0x000C)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0050 PADDING_08C3, struct FVector,                                                        ObstacleExtent);                                           // 0x0158(0x000C)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0060 PADDING_08C3, class UClass*,                                                         ObstacleAreaClass);                                        // 0x0168(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0068 PADDING_08C3, float,                                                                 BroadcastRadius);                                          // 0x0170(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x006C PADDING_08C3, float,                                                                 BroadcastInterval);                                        // 0x0174(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0070 PADDING_08C3, TEnumAsByte<ECollisionChannel>,                                        BroadcastChannel);                                         // 0x0178(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomComponent");
		return ptr;
	}


};

// Class NavigationSystem.NavLinkCustomInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UNavLinkCustomInterface : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomInterface");
		return ptr;
	}


};

// Class NavigationSystem.NavLinkHostInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UNavLinkHostInterface : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkHostInterface");
		return ptr;
	}


};

// Class NavigationSystem.NavLinkRenderingComponent
// 0x000B (FullSize[0x0410] - InheritedSize[0x0405])
// LastOffsetWithSize(0x0408)
class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkRenderingComponent");
		return ptr;
	}


};

// Class NavigationSystem.NavLinkTrivial
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
// LastOffsetWithSize(0x0048)
class UNavLinkTrivial : public UNavLinkDefinition
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkTrivial");
		return ptr;
	}


};

// Class NavigationSystem.NavMeshBoundsVolume
// 0x0004 (FullSize[0x0284] - InheritedSize[0x0280])
// LastOffsetWithSize(0x0280)
#define PADDING_08C8 - 0x0000 // Minimum to subtract -> (0000)
class ANavMeshBoundsVolume : public AVolume
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_08C8, struct FNavAgentSelector,                                              SupportedAgents);                                          // 0x0280(0x0004)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavMeshBoundsVolume");
		return ptr;
	}


};

// Class NavigationSystem.NavMeshRenderingComponent
// 0x000B (FullSize[0x0410] - InheritedSize[0x0405])
// LastOffsetWithSize(0x0408)
class UNavMeshRenderingComponent : public UPrimitiveComponent
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavMeshRenderingComponent");
		return ptr;
	}


};

// Class NavigationSystem.NavModifierComponent
// 0x0015 (FullSize[0x011D] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_08CA - 0x0000 // Minimum to subtract -> (0000)
class UNavModifierComponent : public UNavRelevantComponent
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_08CA, class UClass*,                                                         AreaClass);                                                // 0x0108(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_08CA, struct FVector,                                                        FailsafeExtent);                                           // 0x0110(0x000C)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_08CA, unsigned char,                                                         bIncludeAgentHeight);                                      // 0x011C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavModifierComponent");
		return ptr;
	}


	void SetAreaClass(class UClass* NewAreaClass);
};

// Class NavigationSystem.NavModifierVolume
// 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
// LastOffsetWithSize(0x0280)
#define PADDING_08CB - 0x0000 // Minimum to subtract -> (0008)
class ANavModifierVolume : public AVolume
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_08CB, class UClass*,                                                         AreaClass);                                                // 0x0288(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavModifierVolume");
		return ptr;
	}


	void SetAreaClass(class UClass* NewAreaClass);
};

// Class NavigationSystem.NavNodeInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UNavNodeInterface : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavNodeInterface");
		return ptr;
	}


};

// Class NavigationSystem.NavSystemConfigOverride
// 0x0019 (FullSize[0x0251] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_08CD - 0x0000 // Minimum to subtract -> (0010)
class ANavSystemConfigOverride : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_08CD, class UNavigationSystemConfig*,                                        NavigationSystemConfig);                                   // 0x0248(0x0008)  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0018 PADDING_08CD, unsigned char,                                                         bLoadOnClient);                                            // 0x0250(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavSystemConfigOverride");
		return ptr;
	}


};

// Class NavigationSystem.NavTestRenderingComponent
// 0x000B (FullSize[0x0410] - InheritedSize[0x0405])
// LastOffsetWithSize(0x0408)
class UNavTestRenderingComponent : public UPrimitiveComponent
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavTestRenderingComponent");
		return ptr;
	}


};

// Class NavigationSystem.RecastFilter_UseDefaultArea
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
// LastOffsetWithSize(0x0040)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastFilter_UseDefaultArea");
		return ptr;
	}


};

// Class NavigationSystem.RecastNavMesh
// 0x00DC (FullSize[0x048C] - InheritedSize[0x03B0])
// LastOffsetWithSize(0x03B0)
#define PADDING_08D0 - 0x0000 // Minimum to subtract -> (0058)
class ARecastNavMesh : public ANavigationData
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0058 PADDING_08D0, unsigned char,                                                         bDrawTriangleEdges);                                       // 0x0408(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_08D0, unsigned char,                                                         bDrawPolyEdges);                                           // 0x0408(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_08D0, unsigned char,                                                         bDrawFilledPolys);                                         // 0x0408(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_08D0, unsigned char,                                                         bDrawNavMeshEdges);                                        // 0x0408(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_08D0, unsigned char,                                                         bDrawTileBounds);                                          // 0x0408(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_08D0, unsigned char,                                                         bDrawPathCollidingGeometry);                               // 0x0408(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_08D0, unsigned char,                                                         bDrawTileLabels);                                          // 0x0408(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_08D0, unsigned char,                                                         bDrawPolygonLabels);                                       // 0x0408(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0059 PADDING_08D0, unsigned char,                                                         bDrawDefaultPolygonCost);                                  // 0x0409(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0059 PADDING_08D0, unsigned char,                                                         bDrawLabelsOnPathNodes);                                   // 0x0409(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0059 PADDING_08D0, unsigned char,                                                         bDrawNavLinks);                                            // 0x0409(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0059 PADDING_08D0, unsigned char,                                                         bDrawFailedNavLinks);                                      // 0x0409(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0059 PADDING_08D0, unsigned char,                                                         bDrawClusters);                                            // 0x0409(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0059 PADDING_08D0, unsigned char,                                                         bDrawOctree);                                              // 0x0409(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0059 PADDING_08D0, unsigned char,                                                         bDrawOctreeDetails);                                       // 0x0409(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0059 PADDING_08D0, unsigned char,                                                         bDrawMarkedForbiddenPolys);                                // 0x0409(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005A PADDING_08D0, unsigned char,                                                         bDistinctlyDrawTilesBeingBuilt);                           // 0x040A(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005A PADDING_08D0, unsigned char,                                                         bDrawNavMesh);                                             // 0x040A(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005C PADDING_08D0, float,                                                                 DrawOffset);                                               // 0x040C(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_08D0, unsigned char,                                                         bFixedTilePoolSize);                                       // 0x0410(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0064 PADDING_08D0, int,                                                                   TilePoolSize);                                             // 0x0414(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0068 PADDING_08D0, float,                                                                 TileSizeUU);                                               // 0x0418(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x006C PADDING_08D0, float,                                                                 CellSize);                                                 // 0x041C(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0070 PADDING_08D0, float,                                                                 CellHeight);                                               // 0x0420(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0074 PADDING_08D0, float,                                                                 AgentRadius);                                              // 0x0424(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0078 PADDING_08D0, float,                                                                 AgentHeight);                                              // 0x0428(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x007C PADDING_08D0, float,                                                                 AgentMaxHeight);                                           // 0x042C(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_08D0, float,                                                                 AgentMaxSlope);                                            // 0x0430(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0084 PADDING_08D0, float,                                                                 AgentMaxStepHeight);                                       // 0x0434(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0088 PADDING_08D0, float,                                                                 MinRegionArea);                                            // 0x0438(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x008C PADDING_08D0, float,                                                                 MergeRegionSize);                                          // 0x043C(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0090 PADDING_08D0, float,                                                                 MaxSimplificationError);                                   // 0x0440(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0094 PADDING_08D0, int,                                                                   MaxSimultaneousTileGenerationJobsCount);                   // 0x0444(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0098 PADDING_08D0, int,                                                                   TileNumberHardLimit);                                      // 0x0448(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x009C PADDING_08D0, int,                                                                   PolyRefTileBits);                                          // 0x044C(0x0004)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_08D0, int,                                                                   PolyRefNavPolyBits);                                       // 0x0450(0x0004)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A4 PADDING_08D0, int,                                                                   PolyRefSaltBits);                                          // 0x0454(0x0004)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_08D0, struct FVector,                                                        NavMeshOriginOffset);                                      // 0x0458(0x000C)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B4 PADDING_08D0, float,                                                                 DefaultDrawDistance);                                      // 0x0464(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_08D0, float,                                                                 DefaultMaxSearchNodes);                                    // 0x0468(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00BC PADDING_08D0, float,                                                                 DefaultMaxHierarchicalSearchNodes);                        // 0x046C(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_08D0, TEnumAsByte<ERecastPartitioning>,                                      RegionPartitioning);                                       // 0x0470(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C1 PADDING_08D0, TEnumAsByte<ERecastPartitioning>,                                      LayerPartitioning);                                        // 0x0471(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C4 PADDING_08D0, int,                                                                   RegionChunkSplits);                                        // 0x0474(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_08D0, int,                                                                   LayerChunkSplits);                                         // 0x0478(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00CC PADDING_08D0, unsigned char,                                                         bSortNavigationAreasByCost);                               // 0x047C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00CC PADDING_08D0, unsigned char,                                                         bPerformVoxelFiltering);                                   // 0x047C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00CC PADDING_08D0, unsigned char,                                                         bMarkLowHeightAreas);                                      // 0x047C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00CC PADDING_08D0, unsigned char,                                                         bFilterLowSpanSequences);                                  // 0x047C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00CC PADDING_08D0, unsigned char,                                                         bFilterLowSpanFromTileCache);                              // 0x047C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00CC PADDING_08D0, unsigned char,                                                         bDoFullyAsyncNavDataGathering);                            // 0x047C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00CC PADDING_08D0, unsigned char,                                                         bUseBetterOffsetsFromCorners);                             // 0x047C(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00CC PADDING_08D0, unsigned char,                                                         bStoreEmptyTileLayers);                                    // 0x047C(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00CD PADDING_08D0, unsigned char,                                                         bUseVirtualFilters);                                       // 0x047D(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00CD PADDING_08D0, unsigned char,                                                         bAllowNavLinkAsPathEnd);                                   // 0x047D(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00CD PADDING_08D0, unsigned char,                                                         bUseVoxelCache);                                           // 0x047D(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_08D0, float,                                                                 TileSetUpdateInterval);                                    // 0x0480(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00D4 PADDING_08D0, float,                                                                 HeuristicScale);                                           // 0x0484(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_08D0, float,                                                                 VerticalDeviationFromGroundCompensation);                  // 0x0488(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastNavMesh");
		return ptr;
	}


	bool K2_ReplaceAreaInTileBounds(const struct FBox& Bounds, class UClass* OldArea, class UClass* NewArea, bool ReplaceLinks);
};

// Class NavigationSystem.RecastNavMeshDataChunk
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastNavMeshDataChunk");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
