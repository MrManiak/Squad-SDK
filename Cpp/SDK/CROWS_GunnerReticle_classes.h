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

// WidgetBlueprintGeneratedClass CROWS_GunnerReticle.CROWS_GunnerReticle_C
// 0x00E4 (FullSize[0x033C] - InheritedSize[0x0258])
// LastOffsetWithSize(0x0258)
#define PADDING_0350 - 0x0000 // Minimum to subtract -> (0008)
class UCROWS_GunnerReticle_C : public USQVehicleViewWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0350, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0260(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0350, class UTextBlock*,                                                     armed_stat);                                               // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0350, class UImage*,                                                         BlinkingLight01);                                          // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0350, class UImage*,                                                         Body);                                                     // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0350, class UImage*,                                                         Cracked_Screen);                                           // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0350, class UImage*,                                                         Image_22);                                                 // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0350, class UImage*,                                                         Image_54);                                                 // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0350, class UImage*,                                                         Image_55);                                                 // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0350, class UImage*,                                                         LightBleed);                                               // 0x02A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0350, class UImage*,                                                         MainReticle);                                              // 0x02A8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0350, class UTextBlock*,                                                     rangeFinder_Distance);                                     // 0x02B0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0350, class UTextBlock*,                                                     stabilizationIndicator);                                   // 0x02B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0350, class UCanvasPanel*,                                                   Unzoomed);                                                 // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0350, class UImage*,                                                         UnzoomedImage);                                            // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0350, class UImage*,                                                         Weapon);                                                   // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0350, class UTextBlock*,                                                     WEAPONANDAMMO);                                            // 0x02D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0350, class UTextBlock*,                                                     weaponstatusmessage);                                      // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0350, struct FRotator,                                                       LastRot);                                                  // 0x02E8(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x009C PADDING_0350, float,                                                                 OffsetX);                                                  // 0x02F4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0350, struct FRotator,                                                       RotInterp);                                                // 0x02F8(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00AC PADDING_0350, float,                                                                 OffsetY);                                                  // 0x0304(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0350, float,                                                                 Range);                                                    // 0x0308(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0350, class ABP_CROWS_Turret_C*,                                             CROWS_TurretRef);                                          // 0x0310(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0350, class ASQVehicleWeapon*,                                               CurrentWeapon);                                            // 0x0318(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_0350, class UMaterialInstanceDynamic*,                                       ReticleMat);                                               // 0x0320(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0350, class ASQVehicleSeat*,                                                 TurretRef);                                                // 0x0328(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_0350, class ASQVehicleWeapon*,                                               LastWeapon);                                               // 0x0330(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_0350, float,                                                                 TurretHealth);                                             // 0x0338(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CROWS_GunnerReticle.CROWS_GunnerReticle_C");
		return ptr;
	}


	void UpdateCurrentWeapon();
	void SetWeaponName(struct FText* NewParam);
	void RangeFinder();
	void TunnelOffset(float RangeOfMotion, float Multiplier, float InterpSpeed, class UWidget* TunnelImg, class UWidget* Reticle);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateWeaponRotation();
	void UpdateAmmo();
	void UpdateZoomLevelReticle();
	void Construct();
	void UpdateStabilizationIndicator();
	void UpdateTurretHealth();
	void ExecuteUbergraph_CROWS_GunnerReticle(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
