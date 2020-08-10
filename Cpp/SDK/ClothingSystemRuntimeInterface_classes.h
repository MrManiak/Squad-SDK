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

// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_02F6 - 0x0000 // Minimum to subtract -> (0000)
class UClothingAssetBase : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_02F6, struct FString,                                                        ImportedFilePath);                                         // 0x0028(0x0010)  (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_02F6, struct FGuid,                                                          AssetGuid);                                                // 0x0038(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingAssetBase");
		return ptr;
	}


};

// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UClothingSimulationFactory : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingSimulationFactory");
		return ptr;
	}


};

// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UClothingSimulationInteractor : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor");
		return ptr;
	}


	void PhysicsAssetUpdated();
	void ClothConfigUpdated();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
