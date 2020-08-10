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

// BlueprintGeneratedClass BP_UH60.BP_UH60_C
// 0x0171 (FullSize[0x0E29] - InheritedSize[0x0CB8])
// LastOffsetWithSize(0x0CB8)
#define PADDING_038B - 0x0000 // Minimum to subtract -> (0000)
class ABP_UH60_C : public ABP_Generic_Helicopter_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_038B, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0CB8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_038B, class USQVehicleExitPointComponent*,                                   SQVehicleExitPoint4);                                      // 0x0CC0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_038B, class USQVehicleExitPointComponent*,                                   SQVehicleExitPoint9);                                      // 0x0CC8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_038B, class USQVehicleExitPointComponent*,                                   SQVehicleExitPoint8);                                      // 0x0CD0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_038B, class USQVehicleExitPointComponent*,                                   SQVehicleExitPoint7);                                      // 0x0CD8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_038B, class USQVehicleExitPointComponent*,                                   SQVehicleExitPoint6);                                      // 0x0CE0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_038B, class USQVehicleExitPointComponent*,                                   SQVehicleExitPoint5);                                      // 0x0CE8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_038B, class UStaticMeshComponent*,                                           Engine_Stats_Plane_2);                                     // 0x0CF0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_038B, class UStaticMeshComponent*,                                           Direction_Plane);                                          // 0x0CF8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_038B, class UStaticMeshComponent*,                                           Camera_Plane);                                             // 0x0D00(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_038B, class UStaticMeshComponent*,                                           Engine_Stats_Plane);                                       // 0x0D08(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_038B, class UStaticMeshComponent*,                                           Map_Plane);                                                // 0x0D10(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_038B, class UStaticMeshComponent*,                                           Compass_Plane);                                            // 0x0D18(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_038B, class UStaticMeshComponent*,                                           Copilot_Plane);                                            // 0x0D20(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_038B, class UStaticMeshComponent*,                                           Main_Plane);                                               // 0x0D28(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_038B, class USQVehicleExitPointComponent*,                                   SQVehicleExitPoint3);                                      // 0x0D30(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_038B, class USQVehicleExitPointComponent*,                                   SQVehicleExitPoint2);                                      // 0x0D38(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_038B, class UStaticMeshComponent*,                                           NoPenetationCol);                                          // 0x0D40(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_038B, class UBoxComponent*,                                                  PawnBlockingVolume);                                       // 0x0D48(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_038B, class USQVehicleResourceWeaponInventoryComponent*,                     SQVehicleResourceWeaponInventory);                         // 0x0D50(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_038B, class UStaticMeshComponent*,                                           L_GunMount);                                               // 0x0D58(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_038B, class UStaticMeshComponent*,                                           R_GunMount);                                               // 0x0D60(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_038B, class UStaticMeshComponent*,                                           SupplyCrate2);                                             // 0x0D68(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_038B, class UStaticMeshComponent*,                                           SupplyCrate);                                              // 0x0D70(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_038B, class UWidgetComponent*,                                               DirectionScreen);                                          // 0x0D78(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_038B, class UWidgetComponent*,                                               ForwardCamera);                                            // 0x0D80(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_038B, class UWidgetComponent*,                                               EngineStats2);                                             // 0x0D88(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_038B, class UPointLightComponent*,                                           PointLight_1);                                             // 0x0D90(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_038B, class UPointLightComponent*,                                           PointLight3_1);                                            // 0x0D98(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_038B, class UPointLightComponent*,                                           PointLight2_1);                                            // 0x0DA0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_038B, class UPointLightComponent*,                                           PointLight1_1);                                            // 0x0DA8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_038B, class UWidgetComponent*,                                               EngineStats);                                              // 0x0DB0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0100 PADDING_038B, class UWidgetComponent*,                                               Compass);                                                  // 0x0DB8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0108 PADDING_038B, class UWidgetComponent*,                                               MapDisplay);                                               // 0x0DC0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0110 PADDING_038B, class UWidgetComponent*,                                               CopilotDisplay);                                           // 0x0DC8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0118 PADDING_038B, class UWidgetComponent*,                                               MainDisplay);                                              // 0x0DD0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0120 PADDING_038B, float,                                                                 Timeline_1_0_LightIntensity_859CD02A453ADBC451100F93F6EE56E8); // 0x0DD8(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0124 PADDING_038B, TEnumAsByte<ETimelineDirection>,                                       Timeline_1_0__Direction_859CD02A453ADBC451100F93F6EE56E8); // 0x0DDC(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0128 PADDING_038B, class UTimelineComponent*,                                             Timeline_1_1);                                             // 0x0DE0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0130 PADDING_038B, float,                                                                 Timeline_0_0_Progress_3BA5EA3845B56EB865203BA049C8B264);   // 0x0DE8(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0134 PADDING_038B, TEnumAsByte<ETimelineDirection>,                                       Timeline_0_0__Direction_3BA5EA3845B56EB865203BA049C8B264); // 0x0DEC(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0138 PADDING_038B, class UTimelineComponent*,                                             Timeline_0_1);                                             // 0x0DF0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0140 PADDING_038B, bool,                                                                  ReadyToFly);                                               // 0x0DF8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0148 PADDING_038B, class UMaterialInstanceDynamic*,                                       UH60_Mat);                                                 // 0x0E00(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0150 PADDING_038B, float,                                                                 ActivationProgress);                                       // 0x0E08(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0158 PADDING_038B, struct FTimerHandle,                                                   Warning_Light_On_Timer);                                   // 0x0E10(0x0008)  (Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0160 PADDING_038B, bool,                                                                  Warning_On_1);                                             // 0x0E18(0x0001)  (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
		DEFINE_MEMBER_NNN(0x0168 PADDING_038B, class UMaterial*,                                                      ScreenMat);                                                // 0x0E20(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0170 PADDING_038B, bool,                                                                  IsCASVariant);                                             // 0x0E28(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UH60.BP_UH60_C");
		return ptr;
	}


	void Set_Helicopter_Widget_Materials(bool* All_Valid_);
	void Set_Helicopter_Widgets_Visibility(ESlateVisibility InVisibility);
	void Get_UI_Tint(struct FLinearColor* Color);
	void Manage_Helicopter_Widgets(bool Enabled);
	void UserConstructionScript();
	void Timeline_0_0__FinishedFunc();
	void Timeline_0_0__UpdateFunc();
	void Timeline_1_0__FinishedFunc();
	void Timeline_1_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ActivationSequence();
	void DeactivationSequence();
	void Set_UI_Enabled(bool Enable_UI);
	void ExecuteUbergraph_BP_UH60(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
