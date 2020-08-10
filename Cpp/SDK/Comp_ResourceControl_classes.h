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

// BlueprintGeneratedClass Comp_ResourceControl.Comp_ResourceControl_C
// 0x006C (FullSize[0x0134] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_0CC3 - 0x0000 // Minimum to subtract -> (0010)
class UComp_ResourceControl_C : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0CC3, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x00D8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0CC3, float,                                                                 Resource_Quantity);                                        // 0x00E0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001C PADDING_0CC3, float,                                                                 Resource_Rate);                                            // 0x00E4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0CC3, float,                                                                 Max_Vehicle_Velocity);                                     // 0x00E8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0CC3, struct FTimerHandle,                                                   Resource_Gain_Timer);                                      // 0x00F0(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0CC3, bool,                                                                  Ammo_Transaction);                                         // 0x00F8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0031 PADDING_0CC3, bool,                                                                  Pickup_Transaction);                                       // 0x00F9(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0CC3, class ASQVehicle*,                                                     Current_Vehicle);                                          // 0x0100(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0CC3, float,                                                                 Animation_Repeat_Rate);                                    // 0x0108(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0CC3, struct FTimerHandle,                                                   Animation_Delay_Timer);                                    // 0x0110(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0CC3, class APlayerController*,                                              My_PC);                                                    // 0x0118(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0CC3, class ASQVehicleResource*,                                             Current_Resource_Weapon);                                  // 0x0120(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0CC3, bool,                                                                  Should_Validate_Player);                                   // 0x0128(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0064 PADDING_0CC3, float,                                                                 Last_Hand_Anim_Time);                                      // 0x012C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0CC3, float,                                                                 Max_Altitude_In_Meters);                                   // 0x0130(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

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
