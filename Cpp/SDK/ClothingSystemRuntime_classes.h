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

// Class ClothingSystemRuntime.ClothingAssetCustomData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UClothingAssetCustomData : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntime.ClothingAssetCustomData");
		return ptr;
	}


};

// Class ClothingSystemRuntime.ClothingAsset
// 0x0130 (FullSize[0x0178] - InheritedSize[0x0048])
// LastOffsetWithSize(0x0048)
#define PADDING_002F - 0x0000 // Minimum to subtract -> (0000)
class UClothingAsset : public UClothingAssetBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_002F, class UPhysicsAsset*,                                                  PhysicsAsset);                                             // 0x0048(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_002F, struct FClothConfig,                                                   ClothConfig);                                              // 0x0050(0x00D4)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_002F, TArray<struct FClothLODData>,                                          LODData);                                                  // 0x0128(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_002F, TArray<int>,                                                           LodMap);                                                   // 0x0138(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0100 PADDING_002F, TArray<struct FName>,                                                  UsedBoneNames);                                            // 0x0148(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0110 PADDING_002F, TArray<int>,                                                           UsedBoneIndices);                                          // 0x0158(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0120 PADDING_002F, int,                                                                   ReferenceBoneIndex);                                       // 0x0168(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0128 PADDING_002F, class UClothingAssetCustomData*,                                       customData);                                               // 0x0170(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntime.ClothingAsset");
		return ptr;
	}


};

// Class ClothingSystemRuntime.ClothingSimulationFactoryNv
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntime.ClothingSimulationFactoryNv");
		return ptr;
	}


};

// Class ClothingSystemRuntime.ClothingSimulationInteractorNv
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntime.ClothingSimulationInteractorNv");
		return ptr;
	}


	void SetAnimDriveSpringStiffness(float InStiffness);
	void SetAnimDriveDamperStiffness(float InStiffness);
	void EnableGravityOverride(const struct FVector& InVector);
	void DisableGravityOverride();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
