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

// BlueprintGeneratedClass BP_RearmMenu.BP_RearmMenu_C
// 0x0030 (FullSize[0x0088] - InheritedSize[0x0058])
class UBP_RearmMenu_C : public UBP_RadialMenuModel_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0058(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_RearmWeaponDynamicModel_C*               RearmGroupGenericModel;                                    // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBPRadialPopulatorRearmGroup_C*              RearmPopulator;                                            // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESQRearmType                                       RearmType;                                                 // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AM3H[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URadialCenterRearmButton_C*                  RearmCenterButton;                                         // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQPawnInventoryComponent*                   InventoryComponent;                                        // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RearmMenu.BP_RearmMenu_C");
		return ptr;
	}



	void CreateWidgets(class UBaseRadialMenu_C* InputPin);
	void CreateChildWidgets(class UBaseRadialMenu_C* BaseRadialMenu);
	void ExecuteUbergraph_BP_RearmMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
