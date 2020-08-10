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

// WidgetBlueprintGeneratedClass RadialCenterVehicle.RadialCenterVehicle_C
// 0x0098 (FullSize[0x0390] - InheritedSize[0x02F8])
// LastOffsetWithSize(0x02F8)
#define PADDING_029E - 0x0000 // Minimum to subtract -> (0000)
class URadialCenterVehicle_C : public USQRadialButton
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_029E, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02F8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_029E, class UImage*,                                                         bigbackground);                                            // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_029E, class UTextBlock*,                                                     EnterExitText);                                            // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_029E, class UImage*,                                                         Icon);                                                     // 0x0310(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_029E, class UImage*,                                                         Image_3);                                                  // 0x0318(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_029E, class UImage*,                                                         smallcirclebackground);                                    // 0x0320(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_029E, class UImage*,                                                         SupplyTimer);                                              // 0x0328(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_029E, class UTextBlock*,                                                     TextCenter);                                               // 0x0330(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_029E, class UWidgetSwitcher*,                                                WidgetSwitcher_Entry_Supply);                              // 0x0338(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_029E, class UBaseRadialMenu_C*,                                              OwnerRadialMenu);                                          // 0x0340(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_029E, class UBP_RadialItemModel_C*,                                          RelatedActionModel);                                       // 0x0348(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_029E, bool,                                                                  Hovered);                                                  // 0x0350(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0060 PADDING_029E, struct FText,                                                          Ammo_Text);                                                // 0x0358(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0078 PADDING_029E, class ASQVehicle*,                                                     Vehicle);                                                  // 0x0370(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_029E, class UUMG_SeatProgress_C*,                                            ParentProgressBar);                                        // 0x0378(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_029E, class UComp_ResourceControl_C*,                                        Resource_Supply_Controller);                               // 0x0380(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_029E, class UMaterialInstanceDynamic*,                                       MI_Timer);                                                 // 0x0388(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RadialCenterVehicle.RadialCenterVehicle_C");
		return ptr;
	}


	void HelicopterAltitudeCheck(bool* AltitudeValid);
	void Is_Soldier_Alive(bool* Alive);
	void Get_Widget_Text(class USQRadialButton* Button, struct FText* DisplayText);
	struct FText Get_Action_Text();
	void Validate_FOB(bool* Valid);
	void Validate_Transaction(bool* Valid, bool* Con_Valid, bool* Ammo_Valid, bool* Is_Loading, bool* Zone_has_Points);
	void Is_Action_Ammo(bool* Is_Ammo_Action);
	bool Vehicle_Denied();
	void Vehicle_Speed_Check(bool* Speed_Is_Valid);
	struct FText Get_Text_SupplyStatus();
	void SetTimerActivation(bool Active);
	void SetTimerProgress(float RemainingTimePct);
	struct FLinearColor Get_Background_ColorAndOpacity_1();
	void OnHoverBegin();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnHoverEnd();
	void Construct();
	void ExecuteUbergraph_RadialCenterVehicle(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
