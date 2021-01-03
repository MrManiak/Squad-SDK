#pragma once

// Name: S, Version: b


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

// BlueprintGeneratedClass BP_GenericVehicleOpenTurretWeapon.BP_GenericVehicleOpenTurretWeapon_C
// 0x000C (FullSize[0x0B20] - InheritedSize[0x0B14])
class ABP_GenericVehicleOpenTurretWeapon_C : public ABP_GenericDeployableWeapon_C
{
public:
	unsigned char                                      UnknownData_V8CF[0x4];                                     // 0x0B14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0B18(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GenericVehicleOpenTurretWeapon.BP_GenericVehicleOpenTurretWeapon_C");
		return ptr;
	}



	void CameraOnSoldier();
	void CameraOnWeapon();
	void ExecuteUbergraph_BP_GenericVehicleOpenTurretWeapon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
