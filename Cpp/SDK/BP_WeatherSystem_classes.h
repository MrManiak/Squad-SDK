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

// BlueprintGeneratedClass BP_WeatherSystem.BP_WeatherSystem_C
// 0x0144 (FullSize[0x037C] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_008F - 0x0000 // Minimum to subtract -> (0010)
class ABP_WeatherSystem_C : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_008F, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0248(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0018 PADDING_008F, class UAudioComponent*,                                                WeatherAudio);                                             // 0x0250(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_008F, class UBillboardComponent*,                                            WeatherIcon);                                              // 0x0258(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_008F, class UArrowComponent*,                                                WindDirection);                                            // 0x0260(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_008F, class USphereComponent*,                                               WeatherEffectCoverage);                                    // 0x0268(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_008F, class USceneComponent*,                                                DefaultSceneRoot);                                         // 0x0270(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_008F, int,                                                                   AreaRadius);                                               // 0x0278(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_008F, class UParticleSystem*,                                                ParticleSystem);                                           // 0x0280(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_008F, struct FTransform,                                                     SpawnTransform);                                           // 0x0290(0x0030)  (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0088 PADDING_008F, class AActor*,                                                         LocalPlayer);                                              // 0x02C0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_008F, class UParticleSystemComponent*,                                       ParticleSystemRef);                                        // 0x02C8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_008F, float,                                                                 CameraUpdateFrequency);                                    // 0x02D0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x009C PADDING_008F, bool,                                                                  SystemActive);                                             // 0x02D4(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x009D PADDING_008F, TEnumAsByte<EN_Weather>,                                               WeatherType);                                              // 0x02D5(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_008F, class UParticleSystemComponent*,                                       DistantParticles);                                         // 0x02D8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_008F, TArray<class UObject*>,                                                NegativeAreas);                                            // 0x02E0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_008F, bool,                                                                  UseArea);                                                  // 0x02F0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00B9 PADDING_008F, TEnumAsByte<EPhysicalSurface>,                                         PreviousMat);                                              // 0x02F1(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00BA PADDING_008F, TEnumAsByte<EPhysicalSurface>,                                         RoomsFloor);                                               // 0x02F2(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00BB PADDING_008F, TEnumAsByte<EPhysicalSurface>,                                         RoomFrontWall);                                            // 0x02F3(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00BC PADDING_008F, TEnumAsByte<EPhysicalSurface>,                                         RoomBackWall);                                             // 0x02F4(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00BD PADDING_008F, TEnumAsByte<EPhysicalSurface>,                                         RoomLeftWall);                                             // 0x02F5(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00BE PADDING_008F, TEnumAsByte<EPhysicalSurface>,                                         RoomRightWall);                                            // 0x02F6(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00BF PADDING_008F, TEnumAsByte<EPhysicalSurface>,                                         RoomCeiling);                                              // 0x02F7(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_008F, float,                                                                 CeilingHeight);                                            // 0x02F8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C4 PADDING_008F, float,                                                                 RoomWidth);                                                // 0x02FC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_008F, float,                                                                 RoomLenght);                                               // 0x0300(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00CC PADDING_008F, bool,                                                                  PlayerIsInside);                                           // 0x0304(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_008F, class UParticleSystem*,                                                ClearWeather);                                             // 0x0308(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_008F, class UParticleSystem*,                                                Sandstorm);                                                // 0x0310(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_008F, class UParticleSystem*,                                                LightSnow);                                                // 0x0318(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_008F, class UParticleSystem*,                                                HeavySnow);                                                // 0x0320(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_008F, class UParticleSystem*,                                                LightRain);                                                // 0x0328(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_008F, class UParticleSystem*,                                                HeavyRain);                                                // 0x0330(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0100 PADDING_008F, class UParticleSystemComponent*,                                       WeatherCylinder);                                          // 0x0338(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0108 PADDING_008F, class UParticleSystem*,                                                Sandstorm_Cylinder);                                       // 0x0340(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0110 PADDING_008F, class UParticleSystem*,                                                LightSnow_Cylinder);                                       // 0x0348(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0118 PADDING_008F, class UParticleSystem*,                                                HeavySnow_Cylinder);                                       // 0x0350(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0120 PADDING_008F, class UParticleSystem*,                                                LightRain_Cylinder);                                       // 0x0358(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0128 PADDING_008F, class UParticleSystem*,                                                HeavyRain_Cylinder);                                       // 0x0360(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0130 PADDING_008F, bool,                                                                  UseWeatherCylinder);                                       // 0x0368(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x0134 PADDING_008F, float,                                                                 ParticleSystemOffset);                                     // 0x036C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0138 PADDING_008F, bool,                                                                  GlobalWind);                                               // 0x0370(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x013C PADDING_008F, float,                                                                 WindAngle);                                                // 0x0374(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0140 PADDING_008F, float,                                                                 WindStrength);                                             // 0x0378(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeatherSystem.BP_WeatherSystem_C");
		return ptr;
	}


	void SetupGlobalWind();
	void SetupWindMaterial();
	void drawRoom(float* CeilingHeight, float* RoomWidth, float* RoomLenght, TEnumAsByte<EPhysicalSurface>* FloorType);
	void SpawnParticleSystem();
	void WeatherSystemDirection();
	void SpawnDistantParticleSystem();
	void SetRadius();
	void UserConstructionScript();
	void CheckRoomType();
	void CheckRoofMaterial();
	void ResetSpawningParticles();
	void LeaveNegativeArea();
	void EnterNegativeArea();
	void ApplyWeatherToMap();
	void SetEffectLocation();
	void CheckPlayerProximity();
	void UpdateWeatherDirection();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_WeatherSystem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
