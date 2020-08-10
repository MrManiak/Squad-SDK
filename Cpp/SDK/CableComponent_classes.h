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

// Class CableComponent.CableComponent
// 0x007F (FullSize[0x04A8] - InheritedSize[0x0429])
// LastOffsetWithSize(0x0429)
#define PADDING_02E1 - 0x0000 // Minimum to subtract -> (0007)
class UCableComponent : public UMeshComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_02E1, bool,                                                                  bAttachStart);                                             // 0x0430(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_02E1, bool,                                                                  bAttachEnd);                                               // 0x0431(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000F PADDING_02E1, struct FComponentReference,                                            AttachEndTo);                                              // 0x0438(0x0028)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0037 PADDING_02E1, struct FName,                                                          AttachEndToSocketName);                                    // 0x0460(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003F PADDING_02E1, struct FVector,                                                        EndLocation);                                              // 0x0468(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x004B PADDING_02E1, float,                                                                 CableLength);                                              // 0x0474(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x004F PADDING_02E1, int,                                                                   NumSegments);                                              // 0x0478(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0053 PADDING_02E1, float,                                                                 SubstepTime);                                              // 0x047C(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0057 PADDING_02E1, int,                                                                   SolverIterations);                                         // 0x0480(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005B PADDING_02E1, bool,                                                                  bEnableStiffness);                                         // 0x0484(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005C PADDING_02E1, bool,                                                                  bEnableCollision);                                         // 0x0485(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005F PADDING_02E1, float,                                                                 CollisionFriction);                                        // 0x0488(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0063 PADDING_02E1, struct FVector,                                                        CableForce);                                               // 0x048C(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x006F PADDING_02E1, float,                                                                 CableGravityScale);                                        // 0x0498(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0073 PADDING_02E1, float,                                                                 CableWidth);                                               // 0x049C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0077 PADDING_02E1, int,                                                                   NumSides);                                                 // 0x04A0(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x007B PADDING_02E1, float,                                                                 TileMaterial);                                             // 0x04A4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CableComponent.CableComponent");
		return ptr;
	}


	void SetAttachEndToComponent(class USceneComponent* Component, const struct FName& SocketName);
	void SetAttachEndTo(class AActor* Actor, const struct FName& ComponentProperty, const struct FName& SocketName);
	void GetCableParticleLocations(TArray<struct FVector>* Locations);
	class USceneComponent* GetAttachedComponent();
	class AActor* GetAttachedActor();
};

// Class CableComponent.CableActor
// 0x0018 (FullSize[0x0250] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_02E2 - 0x0000 // Minimum to subtract -> (0010)
class ACableActor : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_02E2, class UCableComponent*,                                                CableComponent);                                           // 0x0248(0x0008)  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CableComponent.CableActor");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
