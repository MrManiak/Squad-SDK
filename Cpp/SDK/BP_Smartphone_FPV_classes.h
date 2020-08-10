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

// BlueprintGeneratedClass BP_Smartphone_FPV.BP_Smartphone_FPV_C
// 0x0030 (FullSize[0x0728] - InheritedSize[0x06F8])
// LastOffsetWithSize(0x06F8)
#define PADDING_0130 - 0x0000 // Minimum to subtract -> (0000)
class ABP_Smartphone_FPV_C : public ABP_Weapon2_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0130, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x06F8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0130, class UWidgetComponent*,                                               ScreenWidget);                                             // 0x0700(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0130, class ABP_FlyingDrone_C*,                                              My_Drone);                                                 // 0x0708(0x0008)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0130, class UW_DroneUI_C*,                                                   Drone_UI);                                                 // 0x0710(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0130, class UClass*,                                                         Action);                                                   // 0x0718(0x0008)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0130, class ASQPlayerController*,                                            SQ_PC);                                                    // 0x0720(0x0008)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Smartphone_FPV.BP_Smartphone_FPV_C");
		return ptr;
	}


	void Control_Drone_UI();
	void BlueprintOnUnequip();
	void BlueprintOnZoom(bool bNewZoom);
	void ReceiveTick(float DeltaSeconds);
	void Server_Possess_Drone(bool Possess);
	void ReceiveBeginPlay();
	void BlueprintOnEquip();
	void Init(class ABP_FlyingDrone_C* My_Drone, class UClass* Action);
	void ExecuteUbergraph_BP_Smartphone_FPV(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
