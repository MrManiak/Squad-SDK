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

// Class ReplicationGraph.ReplicationGraphNode
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0947 - 0x0000 // Minimum to subtract -> (0000)
class UReplicationGraphNode : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0947, TArray<class UReplicationGraphNode*>,                                  AllChildNodes);                                            // 0x0028(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode");
		return ptr;
	}


};

// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_0948 - 0x0000 // Minimum to subtract -> (0018)
class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0018 PADDING_0948, TArray<struct FTearOffActorInfo>,                                      TearOffActors);                                            // 0x0050(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection");
		return ptr;
	}


};

// Class ReplicationGraph.ReplicationGraph
// 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0949 - 0x0000 // Minimum to subtract -> (0000)
class UReplicationGraph : public UReplicationDriver
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0949, class UClass*,                                                         ReplicationConnectionManagerClass);                        // 0x0028(0x0008)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0949, class UNetDriver*,                                                     NetDriver);                                                // 0x0030(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0949, TArray<class UNetReplicationGraphConnection*>,                         Connections);                                              // 0x0038(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0949, TArray<class UNetReplicationGraphConnection*>,                         PendingConnections);                                       // 0x0048(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0949, TArray<class UReplicationGraphNode*>,                                  GlobalGraphNodes);                                         // 0x0098(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0949, TArray<class UReplicationGraphNode*>,                                  PrepareForReplicationNodes);                               // 0x00A8(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraph");
		return ptr;
	}


};

// Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D");
		return ptr;
	}


};

// Class ReplicationGraph.NetReplicationGraphConnection
// 0x0198 (FullSize[0x01C0] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_094B - 0x0000 // Minimum to subtract -> (0000)
class UNetReplicationGraphConnection : public UReplicationConnectionDriver
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_094B, class UNetConnection*,                                                 NetConnection);                                            // 0x0028(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0148 PADDING_094B, class AReplicationGraphDebugActor*,                                    DebugActor);                                               // 0x0170(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0168 PADDING_094B, TArray<struct FLastLocationGatherInfo>,                                LastGatherLocations);                                      // 0x0190(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0180 PADDING_094B, TArray<class UReplicationGraphNode*>,                                  ConnectionGraphNodes);                                     // 0x01A8(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0190 PADDING_094B, class UReplicationGraphNode_TearOff_ForConnection*,                    TearOffNode);                                              // 0x01B8(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.NetReplicationGraphConnection");
		return ptr;
	}


};

// Class ReplicationGraph.BasicReplicationGraph
// 0x0410 (FullSize[0x04C8] - InheritedSize[0x00B8])
// LastOffsetWithSize(0x00B8)
#define PADDING_094C - 0x0000 // Minimum to subtract -> (03E0)
class UBasicReplicationGraph : public UReplicationGraph
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x03E0 PADDING_094C, class UReplicationGraphNode_GridSpatialization2D*,                     GridNode);                                                 // 0x0498(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03E8 PADDING_094C, class UReplicationGraphNode_ActorList*,                                AlwaysRelevantNode);                                       // 0x04A0(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03F0 PADDING_094C, TArray<struct FConnectionAlwaysRelevantNodePair>,                      AlwaysRelevantForConnectionList);                          // 0x04A8(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0400 PADDING_094C, TArray<class AActor*>,                                                 ActorsWithoutNetConnection);                               // 0x04B8(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.BasicReplicationGraph");
		return ptr;
	}


};

// Class ReplicationGraph.ReplicationGraphNode_ActorList
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
class UReplicationGraphNode_ActorList : public UReplicationGraphNode
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_ActorList");
		return ptr;
	}


};

// Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets");
		return ptr;
	}


};

// Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
// 0x00A8 (FullSize[0x00F8] - InheritedSize[0x0050])
// LastOffsetWithSize(0x0038)
class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency");
		return ptr;
	}


};

// Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
// 0x00A8 (FullSize[0x00F8] - InheritedSize[0x0050])
// LastOffsetWithSize(0x0038)
class UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode");
		return ptr;
	}


};

// Class ReplicationGraph.ReplicationGraphNode_DormancyNode
// 0x00A8 (FullSize[0x00F8] - InheritedSize[0x0050])
// LastOffsetWithSize(0x0038)
class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_DormancyNode");
		return ptr;
	}


};

// Class ReplicationGraph.ReplicationGraphDebugActor
// 0x0020 (FullSize[0x0258] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_0952 - 0x0000 // Minimum to subtract -> (0010)
class AReplicationGraphDebugActor : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0952, class UReplicationGraph*,                                              ReplicationGraph);                                         // 0x0248(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0952, class UNetReplicationGraphConnection*,                                 ConnectionManager);                                        // 0x0250(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphDebugActor");
		return ptr;
	}


	void ServerStopDebugging();
	void ServerStartDebugging();
	void ServerSetPeriodFrameForClass(class UClass* Class, int PeriodFrame);
	void ServerSetCullDistanceForClass(class UClass* Class, float CullDistance);
	void ServerSetConditionalActorBreakpoint(class AActor* Actor);
	void ServerPrintAllActorInfo(const struct FString& Str);
	void ServerCellInfo();
	void ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, TArray<class AActor*> Actors);
};

// Class ReplicationGraph.ReplicationGraphNode_GridCell
// 0x0100 (FullSize[0x0150] - InheritedSize[0x0050])
// LastOffsetWithSize(0x0038)
#define PADDING_0953 - 0x0000 // Minimum to subtract -> (0108)
class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0108 PADDING_0953, class UReplicationGraphNode*,                                          DynamicNode);                                              // 0x0140(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0110 PADDING_0953, class UReplicationGraphNode_DormancyNode*,                             DormancyNode);                                             // 0x0148(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_GridCell");
		return ptr;
	}


};

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_0954 - 0x0000 // Minimum to subtract -> (0018)
class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0018 PADDING_0954, class UReplicationGraphNode*,                                          ChildNode);                                                // 0x0050(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant");
		return ptr;
	}


};

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
// 0x00E0 (FullSize[0x0130] - InheritedSize[0x0050])
// LastOffsetWithSize(0x0038)
#define PADDING_0955 - 0x0000 // Minimum to subtract -> (00D8)
class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x00D8 PADDING_0955, TArray<struct FAlwaysRelevantActorInfo>,                               PastRelevantActors);                                       // 0x0110(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_0955, class AActor*,                                                         LastViewer);                                               // 0x0120(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_0955, class AActor*,                                                         LastViewTarget);                                           // 0x0128(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
