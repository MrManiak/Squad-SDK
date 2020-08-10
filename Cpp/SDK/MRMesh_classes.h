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

// Class MRMesh.MeshReconstructorBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UMeshReconstructorBase : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MRMesh.MeshReconstructorBase");
		return ptr;
	}


	void StopReconstruction();
	void StartReconstruction();
	void PauseReconstruction();
	bool IsReconstructionStarted();
	bool IsReconstructionPaused();
	void DisconnectMRMesh();
	void ConnectMRMesh(class UMRMeshComponent* Mesh);
};

// Class MRMesh.MockDataMeshTrackerComponent
// 0x00F0 (FullSize[0x0270] - InheritedSize[0x0180])
// LastOffsetWithSize(0x018F)
#define PADDING_0028 - 0x0000 // Minimum to subtract -> (0089)
class UMockDataMeshTrackerComponent : public USceneComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0089 PADDING_0028, struct FScriptMulticastDelegate,                                       OnMeshTrackerUpdated);                                     // 0x0218(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0099 PADDING_0028, bool,                                                                  ScanWorld);                                                // 0x0228(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x009A PADDING_0028, bool,                                                                  RequestNormals);                                           // 0x0229(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x009B PADDING_0028, bool,                                                                  RequestVertexConfidence);                                  // 0x022A(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x009C PADDING_0028, EMeshTrackerVertexColorMode,                                           VertexColorMode);                                          // 0x022B(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A1 PADDING_0028, TArray<struct FColor>,                                                 BlockVertexColors);                                        // 0x0230(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B1 PADDING_0028, struct FLinearColor,                                                   VertexColorFromConfidenceZero);                            // 0x0240(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C1 PADDING_0028, struct FLinearColor,                                                   VertexColorFromConfidenceOne);                             // 0x0250(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00D1 PADDING_0028, float,                                                                 UpdateInterval);                                           // 0x0260(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00D9 PADDING_0028, class UMRMeshComponent*,                                               MRMesh);                                                   // 0x0268(0x0008)  (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MRMesh.MockDataMeshTrackerComponent");
		return ptr;
	}


	void OnMockDataMeshTrackerUpdated__DelegateSignature(int Index, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence);
	void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
};

// Class MRMesh.MRMeshComponent
// 0x003B (FullSize[0x0440] - InheritedSize[0x0405])
// LastOffsetWithSize(0x0408)
#define PADDING_0029 - 0x0000 // Minimum to subtract -> (0008)
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0029, class UMaterialInterface*,                                             Material);                                                 // 0x0410(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0029, bool,                                                                  bCreateMeshProxySections);                                 // 0x0418(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0011 PADDING_0029, bool,                                                                  bUpdateNavMeshOnMeshUpdate);                               // 0x0419(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0012 PADDING_0029, bool,                                                                  bNeverCreateCollisionMesh);                                // 0x041A(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0029, class UBodySetup*,                                                     CachedBodySetup);                                          // 0x0420(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0029, TArray<class UBodySetup*>,                                             BodySetups);                                               // 0x0428(0x0010)  (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0029, class UMaterialInterface*,                                             WireframeMaterial);                                        // 0x0438(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MRMesh.MRMeshComponent");
		return ptr;
	}


	bool IsConnected();
	void ForceNavMeshUpdate();
	void Clear();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
