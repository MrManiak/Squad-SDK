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

// Class GeometryCollectionEngine.ChaosDestructionListener
// 0x0118 (FullSize[0x0298] - InheritedSize[0x0180])
// LastOffsetWithSize(0x018F)
#define PADDING_005C - 0x0000 // Minimum to subtract -> (008D)
class UChaosDestructionListener : public USceneComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x008D PADDING_005C, struct FChaosCollisionEventRequestSettings,                            CollisionEventRequestSettings);                            // 0x021C(0x0018)  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A5 PADDING_005C, struct FChaosBreakingEventRequestSettings,                             BreakingEventRequestSettings);                             // 0x0234(0x0018)  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00BD PADDING_005C, struct FChaosTrailingEventRequestSettings,                             TrailingEventRequestSettings);                             // 0x024C(0x0018)  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0179 PADDING_005C, struct FScriptMulticastDelegate,                                       OnCollisionEvents);                                        // 0x0308(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0189 PADDING_005C, struct FScriptMulticastDelegate,                                       OnBreakingEvents);                                         // 0x0318(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0199 PADDING_005C, struct FScriptMulticastDelegate,                                       OnTrailingEvents);                                         // 0x0328(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.ChaosDestructionListener");
		return ptr;
	}


	void SortTrailingEvents(TArray<struct FChaosTrailingEventData>* TrailingEvents, EChaosTrailingSortMethod SortMethod);
	void SortCollisionEvents(TArray<struct FChaosCollisionEventData>* CollisionEvents, EChaosCollisionSortMethod SortMethod);
	void SortBreakingEvents(TArray<struct FChaosBreakingEventData>* BreakingEvents, EChaosBreakingSortMethod SortMethod);
	void SetTrailingEventRequestSettings(const struct FChaosTrailingEventRequestSettings& InSettings);
	void SetTrailingEventEnabled(bool bIsEnabled);
	void SetCollisionEventRequestSettings(const struct FChaosCollisionEventRequestSettings& InSettings);
	void SetCollisionEventEnabled(bool bIsEnabled);
	void SetBreakingEventRequestSettings(const struct FChaosBreakingEventRequestSettings& InSettings);
	void SetBreakingEventEnabled(bool bIsEnabled);
	void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
	void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
	bool IsEventListening();
	void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
	void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
};

// Class GeometryCollectionEngine.GeometryCollectionActor
// 0x0020 (FullSize[0x0258] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_005F - 0x0000 // Minimum to subtract -> (0010)
class AGeometryCollectionActor : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_005F, class UGeometryCollectionComponent*,                                   GeometryCollectionComponent);                              // 0x0248(0x0008)  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_005F, class UGeometryCollectionDebugDrawComponent*,                          GeometryCollectionDebugDrawComponent);                     // 0x0250(0x0008)  (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionActor");
		return ptr;
	}


	bool RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit);
};

// Class GeometryCollectionEngine.GeometryCollectionCache
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0063 - 0x0000 // Minimum to subtract -> (0000)
class UGeometryCollectionCache : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0063, struct FRecordedTransformTrack,                                        RecordedData);                                             // 0x0028(0x0010)  (NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0063, class UGeometryCollection*,                                            SupportedCollection);                                      // 0x0038(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0063, struct FGuid,                                                          CompatibleCollectionState);                                // 0x0040(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionCache");
		return ptr;
	}


};

// Class GeometryCollectionEngine.GeometryCollectionComponent
// 0x03EF (FullSize[0x0818] - InheritedSize[0x0429])
// LastOffsetWithSize(0x0429)
#define PADDING_0066 - 0x0000 // Minimum to subtract -> (000F)
class UGeometryCollectionComponent : public UMeshComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x000F PADDING_0066, class AChaosSolverActor*,                                              ChaosSolverActor);                                         // 0x0438(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00F7 PADDING_0066, class UGeometryCollection*,                                            RestCollection);                                           // 0x0520(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00FF PADDING_0066, TArray<class AFieldSystemActor*>,                                      InitializationFields);                                     // 0x0528(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x010F PADDING_0066, bool,                                                                  Simulating);                                               // 0x0538(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0117 PADDING_0066, EObjectStateTypeEnum,                                                  ObjectType);                                               // 0x0540(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0118 PADDING_0066, bool,                                                                  EnableClustering);                                         // 0x0541(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x011B PADDING_0066, int,                                                                   ClusterGroupIndex);                                        // 0x0544(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x011F PADDING_0066, int,                                                                   MaxClusterLevel);                                          // 0x0548(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0127 PADDING_0066, TArray<float>,                                                         DamageThreshold);                                          // 0x0550(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0137 PADDING_0066, EClusterConnectionTypeEnum,                                            ClusterConnectionType);                                    // 0x0560(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x013B PADDING_0066, int,                                                                   CollisionGroup);                                           // 0x0564(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x013F PADDING_0066, float,                                                                 CollisionSampleFraction);                                  // 0x0568(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0147 PADDING_0066, class UChaosPhysicalMaterial*,                                         PhysicalMaterial);                                         // 0x0570(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x014F PADDING_0066, EInitialVelocityTypeEnum,                                              InitialVelocityType);                                      // 0x0578(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0153 PADDING_0066, struct FVector,                                                        InitialLinearVelocity);                                    // 0x057C(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x015F PADDING_0066, struct FVector,                                                        InitialAngularVelocity);                                   // 0x0588(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x016F PADDING_0066, struct FGeomComponentCacheParameters,                                  CacheParameters);                                          // 0x0598(0x0050)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01BF PADDING_0066, struct FScriptMulticastDelegate,                                       NotifyGeometryCollectionPhysicsStateChange);               // 0x05E8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01CF PADDING_0066, struct FScriptMulticastDelegate,                                       NotifyGeometryCollectionPhysicsLoadingStateChange);        // 0x05F8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x020F PADDING_0066, struct FScriptMulticastDelegate,                                       OnChaosBreakEvent);                                        // 0x0638(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x021F PADDING_0066, float,                                                                 DesiredCacheTime);                                         // 0x0648(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0223 PADDING_0066, bool,                                                                  CachePlayback);                                            // 0x064C(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0227 PADDING_0066, struct FScriptMulticastDelegate,                                       OnChaosPhysicsCollision);                                  // 0x0650(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0237 PADDING_0066, bool,                                                                  bNotifyBreaks);                                            // 0x0660(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0238 PADDING_0066, bool,                                                                  bNotifyCollisions);                                        // 0x0661(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x03E7 PADDING_0066, class UBodySetup*,                                                     DummyBodySetup);                                           // 0x0810(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionComponent");
		return ptr;
	}


	void SetNotifyBreaks(bool bNewNotifyBreaks);
	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
	void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
	void ApplyKinematicField(float Radius, const struct FVector& Position);
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// 0x00D0 (FullSize[0x0308] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_0068 - 0x0000 // Minimum to subtract -> (0010)
class AGeometryCollectionDebugDrawActor : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0068, struct FGeometryCollectionDebugDrawWarningMessage,                     WarningMessage);                                           // 0x0248(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0068, struct FGeometryCollectionDebugDrawActorSelectedRigidBody,             SelectedRigidBody);                                        // 0x0250(0x0018)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0068, bool,                                                                  bDebugDrawWholeCollection);                                // 0x0268(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0031 PADDING_0068, bool,                                                                  bDebugDrawHierarchy);                                      // 0x0269(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0032 PADDING_0068, bool,                                                                  bDebugDrawClustering);                                     // 0x026A(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0033 PADDING_0068, EGeometryCollectionDebugDrawActorHideGeometry,                         HideGeometry);                                             // 0x026B(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0034 PADDING_0068, bool,                                                                  bShowRigidBodyId);                                         // 0x026C(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0035 PADDING_0068, bool,                                                                  bShowRigidBodyCollision);                                  // 0x026D(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0036 PADDING_0068, bool,                                                                  bCollisionAtOrigin);                                       // 0x026E(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0037 PADDING_0068, bool,                                                                  bShowRigidBodyTransform);                                  // 0x026F(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0068, bool,                                                                  bShowRigidBodyInertia);                                    // 0x0270(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0039 PADDING_0068, bool,                                                                  bShowRigidBodyVelocity);                                   // 0x0271(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003A PADDING_0068, bool,                                                                  bShowRigidBodyForce);                                      // 0x0272(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003B PADDING_0068, bool,                                                                  bShowRigidBodyInfos);                                      // 0x0273(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003C PADDING_0068, bool,                                                                  bShowTransformIndex);                                      // 0x0274(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003D PADDING_0068, bool,                                                                  bShowTransform);                                           // 0x0275(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003E PADDING_0068, bool,                                                                  bShowParent);                                              // 0x0276(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003F PADDING_0068, bool,                                                                  bShowLevel);                                               // 0x0277(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0068, bool,                                                                  bShowConnectivityEdges);                                   // 0x0278(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0041 PADDING_0068, bool,                                                                  bShowGeometryIndex);                                       // 0x0279(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0042 PADDING_0068, bool,                                                                  bShowGeometryTransform);                                   // 0x027A(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0043 PADDING_0068, bool,                                                                  bShowBoundingBox);                                         // 0x027B(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0044 PADDING_0068, bool,                                                                  bShowFaces);                                               // 0x027C(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0045 PADDING_0068, bool,                                                                  bShowFaceIndices);                                         // 0x027D(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0046 PADDING_0068, bool,                                                                  bShowFaceNormals);                                         // 0x027E(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0047 PADDING_0068, bool,                                                                  bShowSingleFace);                                          // 0x027F(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0068, int,                                                                   SingleFaceIndex);                                          // 0x0280(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x004C PADDING_0068, bool,                                                                  bShowVertices);                                            // 0x0284(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x004D PADDING_0068, bool,                                                                  bShowVertexIndices);                                       // 0x0285(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x004E PADDING_0068, bool,                                                                  bShowVertexNormals);                                       // 0x0286(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x004F PADDING_0068, bool,                                                                  bUseActiveVisualization);                                  // 0x0287(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0068, float,                                                                 PointThickness);                                           // 0x0288(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0054 PADDING_0068, float,                                                                 LineThickness);                                            // 0x028C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0068, bool,                                                                  bTextShadow);                                              // 0x0290(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005C PADDING_0068, float,                                                                 TextScale);                                                // 0x0294(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0068, float,                                                                 NormalScale);                                              // 0x0298(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0064 PADDING_0068, float,                                                                 AxisScale);                                                // 0x029C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0068, float,                                                                 ArrowScale);                                               // 0x02A0(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x006C PADDING_0068, struct FColor,                                                         RigidBodyIdColor);                                         // 0x02A4(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0068, float,                                                                 RigidBodyTransformScale);                                  // 0x02A8(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0074 PADDING_0068, struct FColor,                                                         RigidBodyCollisionColor);                                  // 0x02AC(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0068, struct FColor,                                                         RigidBodyInertiaColor);                                    // 0x02B0(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x007C PADDING_0068, struct FColor,                                                         RigidBodyVelocityColor);                                   // 0x02B4(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0068, struct FColor,                                                         RigidBodyForceColor);                                      // 0x02B8(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0084 PADDING_0068, struct FColor,                                                         RigidBodyInfoColor);                                       // 0x02BC(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0068, struct FColor,                                                         TransformIndexColor);                                      // 0x02C0(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x008C PADDING_0068, float,                                                                 TransformScale);                                           // 0x02C4(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0068, struct FColor,                                                         LevelColor);                                               // 0x02C8(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0094 PADDING_0068, struct FColor,                                                         ParentColor);                                              // 0x02CC(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0068, float,                                                                 ConnectivityEdgeThickness);                                // 0x02D0(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x009C PADDING_0068, struct FColor,                                                         GeometryIndexColor);                                       // 0x02D4(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0068, float,                                                                 GeometryTransformScale);                                   // 0x02D8(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A4 PADDING_0068, struct FColor,                                                         BoundingBoxColor);                                         // 0x02DC(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0068, struct FColor,                                                         FaceColor);                                                // 0x02E0(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00AC PADDING_0068, struct FColor,                                                         FaceIndexColor);                                           // 0x02E4(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0068, struct FColor,                                                         FaceNormalColor);                                          // 0x02E8(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B4 PADDING_0068, struct FColor,                                                         SingleFaceColor);                                          // 0x02EC(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0068, struct FColor,                                                         VertexColor);                                              // 0x02F0(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00BC PADDING_0068, struct FColor,                                                         VertexIndexColor);                                         // 0x02F4(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0068, struct FColor,                                                         VertexNormalColor);                                        // 0x02F8(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_0068, class UBillboardComponent*,                                            SpriteComponent);                                          // 0x0300(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor");
		return ptr;
	}


};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_006C - 0x0000 // Minimum to subtract -> (0010)
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_006C, class AGeometryCollectionDebugDrawActor*,                              GeometryCollectionDebugDrawActor);                         // 0x00D8(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_006C, class AGeometryCollectionRenderLevelSetActor*,                         GeometryCollectionRenderLevelSetActor);                    // 0x00E0(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent");
		return ptr;
	}


};

// Class GeometryCollectionEngine.GeometryCollection
// 0x0094 (FullSize[0x00BC] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_006F - 0x0000 // Minimum to subtract -> (0008)
class UGeometryCollection : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_006F, TArray<class UMaterialInterface*>,                                     Materials);                                                // 0x0030(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_006F, ECollisionTypeEnum,                                                    CollisionType);                                            // 0x0040(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0019 PADDING_006F, EImplicitTypeEnum,                                                     ImplicitType);                                             // 0x0041(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_006F, int,                                                                   MinLevelSetResolution);                                    // 0x0044(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_006F, int,                                                                   MaxLevelSetResolution);                                    // 0x0048(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_006F, int,                                                                   MinClusterLevelSetResolution);                             // 0x004C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_006F, int,                                                                   MaxClusterLevelSetResolution);                             // 0x0050(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002C PADDING_006F, float,                                                                 CollisionObjectReductionPercentage);                       // 0x0054(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_006F, bool,                                                                  bMassAsDensity);                                           // 0x0058(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0034 PADDING_006F, float,                                                                 Mass);                                                     // 0x005C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_006F, float,                                                                 MinimumMassClamp);                                         // 0x0060(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003C PADDING_006F, float,                                                                 CollisionParticlesFraction);                               // 0x0064(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_006F, int,                                                                   MaximumCollisionParticles);                                // 0x0068(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_006F, TArray<struct FGeometryCollectionSizeSpecificData>,                    SizeSpecificData);                                         // 0x0070(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_006F, bool,                                                                  EnableRemovePiecesOnFracture);                             // 0x0080(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_006F, TArray<class UMaterialInterface*>,                                     RemoveOnFractureMaterials);                                // 0x0088(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0070 PADDING_006F, struct FGuid,                                                          PersistentGuid);                                           // 0x0098(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0080 PADDING_006F, struct FGuid,                                                          StateGuid);                                                // 0x00A8(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0090 PADDING_006F, int,                                                                   BoneSelectedMaterialIndex);                                // 0x00B8(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollection");
		return ptr;
	}


};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// 0x002A (FullSize[0x0262] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_0071 - 0x0000 // Minimum to subtract -> (0010)
class AGeometryCollectionRenderLevelSetActor : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0071, class UVolumeTexture*,                                                 TargetVolumeTexture);                                      // 0x0248(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0071, class UMaterial*,                                                      RayMarchMaterial);                                         // 0x0250(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0071, float,                                                                 SurfaceTolerance);                                         // 0x0258(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0071, float,                                                                 Isovalue);                                                 // 0x025C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0071, bool,                                                                  Enabled);                                                  // 0x0260(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0029 PADDING_0071, bool,                                                                  RenderVolumeBoundingBox);                                  // 0x0261(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor");
		return ptr;
	}


};

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// 0x0088 (FullSize[0x0150] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_0074 - 0x0000 // Minimum to subtract -> (0018)
class USkeletalMeshSimulationComponent : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0018 PADDING_0074, class UChaosPhysicalMaterial*,                                         PhysicalMaterial);                                         // 0x00E0(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0074, class AChaosSolverActor*,                                              ChaosSolverActor);                                         // 0x00E8(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0074, class UPhysicsAsset*,                                                  OverridePhysicsAsset);                                     // 0x00F0(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0074, bool,                                                                  bSimulating);                                              // 0x00F8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0031 PADDING_0074, bool,                                                                  bNotifyCollisions);                                        // 0x00F9(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0032 PADDING_0074, EObjectStateTypeEnum,                                                  ObjectType);                                               // 0x00FA(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0034 PADDING_0074, float,                                                                 Density);                                                  // 0x00FC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0074, float,                                                                 MinMass);                                                  // 0x0100(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003C PADDING_0074, float,                                                                 MaxMass);                                                  // 0x0104(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0074, ECollisionTypeEnum,                                                    CollisionType);                                            // 0x0108(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0044 PADDING_0074, float,                                                                 ImplicitShapeParticlesPerUnitArea);                        // 0x010C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0074, int,                                                                   ImplicitShapeMinNumParticles);                             // 0x0110(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x004C PADDING_0074, int,                                                                   ImplicitShapeMaxNumParticles);                             // 0x0114(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0074, int,                                                                   MinLevelSetResolution);                                    // 0x0118(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0054 PADDING_0074, int,                                                                   MaxLevelSetResolution);                                    // 0x011C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0074, int,                                                                   CollisionGroup);                                           // 0x0120(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005C PADDING_0074, EInitialVelocityTypeEnum,                                              InitialVelocityType);                                      // 0x0124(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0074, struct FVector,                                                        InitialLinearVelocity);                                    // 0x0128(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x006C PADDING_0074, struct FVector,                                                        InitialAngularVelocity);                                   // 0x0134(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0074, struct FScriptMulticastDelegate,                                       OnChaosPhysicsCollision);                                  // 0x0140(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.SkeletalMeshSimulationComponent");
		return ptr;
	}


	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);
};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// 0x0090 (FullSize[0x0158] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_0075 - 0x0000 // Minimum to subtract -> (0018)
class UStaticMeshSimulationComponent : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0018 PADDING_0075, bool,                                                                  Simulating);                                               // 0x00E0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0019 PADDING_0075, bool,                                                                  bNotifyCollisions);                                        // 0x00E1(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001A PADDING_0075, EObjectStateTypeEnum,                                                  ObjectType);                                               // 0x00E2(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0075, float,                                                                 Mass);                                                     // 0x00E4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0075, ECollisionTypeEnum,                                                    CollisionType);                                            // 0x00E8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0021 PADDING_0075, EImplicitTypeEnum,                                                     ImplicitType);                                             // 0x00E9(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0075, int,                                                                   MinLevelSetResolution);                                    // 0x00EC(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0075, int,                                                                   MaxLevelSetResolution);                                    // 0x00F0(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002C PADDING_0075, EInitialVelocityTypeEnum,                                              InitialVelocityType);                                      // 0x00F4(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0075, struct FVector,                                                        InitialLinearVelocity);                                    // 0x00F8(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003C PADDING_0075, struct FVector,                                                        InitialAngularVelocity);                                   // 0x0104(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0075, float,                                                                 DamageThreshold);                                          // 0x0110(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0075, class UChaosPhysicalMaterial*,                                         PhysicalMaterial);                                         // 0x0118(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0075, class AChaosSolverActor*,                                              ChaosSolverActor);                                         // 0x0120(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0075, struct FScriptMulticastDelegate,                                       OnChaosPhysicsCollision);                                  // 0x0128(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0075, TArray<class UPrimitiveComponent*>,                                    SimulatedComponents);                                      // 0x0148(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.StaticMeshSimulationComponent");
		return ptr;
	}


	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);
	void ForceRecreatePhysicsState();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
