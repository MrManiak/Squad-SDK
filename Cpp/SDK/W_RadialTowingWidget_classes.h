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

// WidgetBlueprintGeneratedClass W_RadialTowingWidget.W_RadialTowingWidget_C
// 0x0078 (FullSize[0x0370] - InheritedSize[0x02F8])
// LastOffsetWithSize(0x02F8)
#define PADDING_0113 - 0x0000 // Minimum to subtract -> (0000)
class UW_RadialTowingWidget_C : public USQRadialButton
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0113, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02F8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0113, class UImage*,                                                         Background);                                               // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0113, class UImage*,                                                         Icon);                                                     // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0113, class UImage*,                                                         Iconbackground);                                           // 0x0310(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0113, class UTextBlock*,                                                     Move);                                                     // 0x0318(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0113, class UTextBlock*,                                                     Subtitle);                                                 // 0x0320(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0113, class UW_RadialTimer_C*,                                               Timer);                                                    // 0x0328(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0113, float,                                                                 YawWaitDurationFactor);                                    // 0x0330(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x003C PADDING_0113, float,                                                                 JumpWaitDuration);                                         // 0x0334(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0113, bool,                                                                  EmergencyJump);                                            // 0x0338(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0044 PADDING_0113, float,                                                                 EmergencyYaw);                                             // 0x033C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0113, class ASQSoldier*,                                                     LocalSoldier);                                             // 0x0340(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0113, class ASQGroundVehicle*,                                               CurrentVehicle);                                           // 0x0348(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0113, float,                                                                 JumpHeight);                                               // 0x0350(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0113, class UBaseRadialMenu_C*,                                              BaseRadialMenu);                                           // 0x0358(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0113, class UBP_RadialItemModel_C*,                                          RelatedActionModel);                                       // 0x0360(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0113, class ASQPlayerController*,                                            PlayerController);                                         // 0x0368(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_RadialTowingWidget.W_RadialTowingWidget_C");
		return ptr;
	}


	void UpdateCentralButton();
	void UpdateText();
	void SetupWaitDuration();
	void IsTeleportationValid(bool* IsValid);
	void CollectSoldierReference(bool* Success);
	void CollectVehicleReference(bool* Success);
	void ComputeEmergencyYaw(float Degress);
	void OnTimerReached();
	void AddEmergencyYaw(float Degrees);
	void ToggleEmergencyJump();
	void OnHoverEnd();
	void OnHoverBegin();
	void Construct();
	void ExecuteUbergraph_W_RadialTowingWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
