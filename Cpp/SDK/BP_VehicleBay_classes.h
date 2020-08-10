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

// BlueprintGeneratedClass BP_VehicleBay.BP_VehicleBay_C
// 0x00D9 (FullSize[0x04A9] - InheritedSize[0x03D0])
// LastOffsetWithSize(0x03D0)
#define PADDING_02E8 - 0x0000 // Minimum to subtract -> (0000)
class ABP_VehicleBay_C : public ABP_Deployable_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_02E8, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x03D0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_02E8, class USceneComponent*,                                                SoundLocation);                                            // 0x03D8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_02E8, class UChildActorComponent*,                                           Console);                                                  // 0x03E0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_02E8, class UStaticMeshComponent*,                                           Preview_Vehicle_Mesh);                                     // 0x03E8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_02E8, class USQMapIconComponent*,                                            SQMapIcon);                                                // 0x03F0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_02E8, class USQVehicleDepotComponent*,                                       SQVehicleDepotRepair);                                     // 0x03F8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_02E8, class UBoxComponent*,                                                  Repair_rearm_radius);                                      // 0x0400(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_02E8, class UBoxComponent*,                                                  ShovelZone);                                               // 0x0408(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_02E8, class ASQForwardBase*,                                                 My_FOB);                                                   // 0x0410(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_02E8, class UClass*,                                                         Vehicle_Radial);                                           // 0x0418(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_02E8, int,                                                                   Max_Vehicles);                                             // 0x0420(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0054 PADDING_02E8, int,                                                                   Max_Queue_Limit);                                          // 0x0424(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_02E8, bool,                                                                  Squad_Leader_Only);                                        // 0x0428(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x005C PADDING_02E8, float,                                                                 Last_Build_Start_Time);                                    // 0x042C(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_02E8, TArray<class UClass*>,                                                 Construction_Queue);                                       // 0x0430(0x0010)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify)
		DEFINE_MEMBER_NNN(0x0070 PADDING_02E8, class UMaterialInstanceDynamic*,                                       MID_Preview);                                              // 0x0440(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_02E8, class UMaterialInterface*,                                             Preview_Material);                                         // 0x0448(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_02E8, class USoundBase*,                                                     SFX_Obstruction);                                          // 0x0450(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_02E8, class USoundBase*,                                                     SFX_BuildingStarted);                                      // 0x0458(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_02E8, class USoundBase*,                                                     SFX_BuildingComplete);                                     // 0x0460(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_02E8, class USoundBase*,                                                     SFX_QueueUpdated);                                         // 0x0468(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_02E8, class USoundBase*,                                                     SFX_QueueFull);                                            // 0x0470(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_02E8, class USoundBase*,                                                     SFX_InsufficientFunds);                                    // 0x0478(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_02E8, struct FScriptMulticastDelegate,                                       Queue_Updated);                                            // 0x0480(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_02E8, bool,                                                                  Require_FOB);                                              // 0x0490(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_02E8, TArray<class ASQVehicle*>,                                             Current_Vehicles);                                         // 0x0498(0x0010)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_02E8, bool,                                                                  Instant_Spawn_Test);                                       // 0x04A8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VehicleBay.BP_VehicleBay_C");
		return ptr;
	}


	bool Has_Vehicle_Capacity();
	void Is_Pending_Construction(bool* Constructing);
	void Is_Constructing(bool* Constructing);
	void Get_Fob(class ASQForwardBase** fob);
	bool Can_Afford(int Construction, int Ammo);
	void Validate_Spawning(class UClass* Spawn_Action, bool* Valid, bool* Can_Afford, bool* Has_Capacity);
	void Get_Construction_Queue(TArray<class UClass*>* Construction_Queue);
	float Get_Build_Percent();
	void OnRep_Construction_Queue();
	void Manage_Build_Visuals();
	void UserConstructionScript();
	void OnLoaded_D39A2818470E6F858FAB8ABCE253D0FE(class UObject* Loaded);
	void SetTeam(int Team);
	void ReceiveTick(float DeltaSeconds);
	void Request_Spawn_Vehicle(class UClass* Class);
	void Finish_Building();
	void Build_Next_Queue_Item();
	void ReceiveBeginPlay();
	void Load_Mesh();
	void Add_Vehicle_To_Queue(class UClass* NewItem);
	void Try_Play_Sound(class USoundBase* Sound);
	void Play_Vehicle_Bay_Sound(class USoundBase* Sound);
	void Notify_Error(class UClass* Spawn_Action);
	void MC_Sound_Event(class USoundBase* Sound);
	void ExecuteUbergraph_BP_VehicleBay(int EntryPoint);
	void Queue_Updated__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
