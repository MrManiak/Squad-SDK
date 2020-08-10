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

// BlueprintGeneratedClass BP_GenericVehicleOpenTurretWeapon.BP_GenericVehicleOpenTurretWeapon_C
// 0x000C (FullSize[0x0B20] - InheritedSize[0x0B14])
// LastOffsetWithSize(0x0B14)
#define PADDING_040C - 0x0000 // Minimum to subtract -> (0004)
class ABP_GenericVehicleOpenTurretWeapon_C : public ABP_GenericDeployableWeapon_C
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_040C, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0B18(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
	};

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
