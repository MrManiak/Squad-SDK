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

// BlueprintGeneratedClass BP_EmplacedM2.BP_EmplacedM2_C
// 0x0044 (FullSize[0x08C4] - InheritedSize[0x0880])
// LastOffsetWithSize(0x0880)
#define PADDING_0358 - 0x0000 // Minimum to subtract -> (0000)
class ABP_EmplacedM2_C : public ASQDeployableVehicle
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0358, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0880(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0358, class UBoxComponent*,                                                  Box);                                                      // 0x0888(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0358, class USceneComponent*,                                                CameraPosition);                                           // 0x0890(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0358, class USceneComponent*,                                                ADSCameraPosition);                                        // 0x0898(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0358, class UCameraComponent*,                                               Camera);                                                   // 0x08A0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0358, class USceneComponent*,                                                GunMount);                                                 // 0x08A8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0358, class USQVehicleExitPointComponent*,                                   SQVehicleExitPoint1);                                      // 0x08B0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0358, class USQVehicleInventoryComponent*,                                   NewVar_1);                                                 // 0x08B8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0358, float,                                                                 NewVar_2);                                                 // 0x08C0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EmplacedM2.BP_EmplacedM2_C");
		return ptr;
	}


	bool IsSoldierAlive();
	void GetCurrentWeaponInputEnabled(bool* bInputEnabled);
	class USceneComponent* GetADSCameraLocationComponent();
	class USceneComponent* GetDefaultCameraLocationComponent();
	class UCameraComponent* GetCameraComponent();
	class USkinnedMeshComponent* GetMasterPoseComponent();
	class USceneComponent* Get1PAttachComponent();
	class USceneComponent* Get3PAttachComponent();
	class USceneComponent* GetWeaponAttachComponent();
	void InpActEvt_Focus_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Focus_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_40(float AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_43(float AxisValue);
	void ExecuteUbergraph_BP_EmplacedM2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
