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

// BlueprintGeneratedClass BP_M1A2_Turret.BP_M1A2_Turret_C
// 0x0010 (FullSize[0x04C8] - InheritedSize[0x04B8])
// LastOffsetWithSize(0x04B8)
#define PADDING_037A - 0x0000 // Minimum to subtract -> (0000)
class ABP_M1A2_Turret_C : public ABP_GenericVehicleClosedTurret_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_037A, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x04B8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_037A, class UStaticMeshComponent*,                                           M1A1_Decoration);                                          // 0x04C0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_M1A2_Turret.BP_M1A2_Turret_C");
		return ptr;
	}


	void InpActEvt_DesignateTarget_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ServerSetStabilizationHeading();
	void ExecuteUbergraph_BP_M1A2_Turret(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
