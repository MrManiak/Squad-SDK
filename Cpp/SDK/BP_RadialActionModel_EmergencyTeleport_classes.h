#pragma once

// Name: S, Version: b


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

// BlueprintGeneratedClass BP_RadialActionModel_EmergencyTeleport.BP_RadialActionModel_EmergencyTeleport_C
// 0x0018 (FullSize[0x00B8] - InheritedSize[0x00A0])
class UBP_RadialActionModel_EmergencyTeleport_C : public UBP_RadialActionModel_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Jump;                                                      // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0QE7[0x3];                                     // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Yaw;                                                       // 0x00AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_RadialTowingWidget_C*                     TowingCenterWidget;                                        // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RadialActionModel_EmergencyTeleport.BP_RadialActionModel_EmergencyTeleport_C");
		return ptr;
	}



	void OnClicked(class UBaseRadialMenu_C* Radial);
	void Populate(class USQRadialButton* Widget, class UBaseRadialMenu_C* Menu, class UObject* Context);
	void ExecuteUbergraph_BP_RadialActionModel_EmergencyTeleport(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
