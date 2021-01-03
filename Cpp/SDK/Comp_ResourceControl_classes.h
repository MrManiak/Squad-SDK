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

// BlueprintGeneratedClass Comp_ResourceControl.Comp_ResourceControl_C
// 0x005C (FullSize[0x0134] - InheritedSize[0x00D8])
class UComp_ResourceControl_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Resource_Quantity;                                         // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Resource_Rate;                                             // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max_Vehicle_Velocity;                                      // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5MC8[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                Resource_Gain_Timer;                                       // 0x00F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               Ammo_Transaction;                                          // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Pickup_Transaction;                                        // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6Q7G[0x6];                                     // 0x00FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASQVehicle*                                  Current_Vehicle;                                           // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Animation_Repeat_Rate;                                     // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MZ71[0x4];                                     // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                Animation_Delay_Timer;                                     // 0x0110(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           My_PC;                                                     // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQVehicleResource*                          Current_Resource_Weapon;                                   // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Should_Validate_Player;                                    // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2T7T[0x3];                                     // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Last_Hand_Anim_Time;                                       // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max_Altitude_In_Meters;                                    // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Comp_ResourceControl.Comp_ResourceControl_C");
		return ptr;
	}



	void Validate_Distance_to_FOB(class ASQVehicle* Vehicle, class ASQForwardBase* fob, bool* Result);
	void Validate_Soldier(bool* Alive);
	void Setup_Resource_Weapon();
	void Validate_Owner(bool* Valid);
	void Validate_Transaction(bool Ammo, bool Pickup, class ASQVehicle* Vehicle, bool* Valid_Transaction, bool* Has_Con_Weapon, bool* Has_Ammo_Weapon, bool* Is_Loading, bool* Zone_has_Points);
	void Validate_Resource_Point(class ASQVehicle* Vehicle, bool* Valid, class ASQForwardBase** fob, class AActor** CapZone);
	void Server_Start_Supply(bool Ammo, bool Pickup, class ASQVehicle* Vehicle);
	void ReceiveBeginPlay();
	void Server_Stop_Supply();
	void Invoke_Use_Resources();
	void Server_Use_Resources();
	void Stop_Resource_Supply();
	void Start_Resource_Supply(bool Ammo_Transaction, bool Pickup_Transaction, class ASQVehicle* Current_Vehicle);
	void Client_Resource_Timer();
	void Play_Hand_Animation();
	void ExecuteUbergraph_Comp_ResourceControl(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
