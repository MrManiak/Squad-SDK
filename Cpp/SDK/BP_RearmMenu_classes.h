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

// BlueprintGeneratedClass BP_RearmMenu.BP_RearmMenu_C
// 0x0030 (FullSize[0x0088] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0058)
#define PADDING_0299 - 0x0000 // Minimum to subtract -> (0000)
class UBP_RearmMenu_C : public UBP_RadialMenuModel_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0299, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0058(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0299, class UBP_RearmWeaponDynamicModel_C*,                                  RearmGroupGenericModel);                                   // 0x0060(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0299, class UBPRadialPopulatorRearmGroup_C*,                                 RearmPopulator);                                           // 0x0068(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0299, ESQRearmType,                                                          RearmType);                                                // 0x0070(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0299, class URadialCenterRearmButton_C*,                                     RearmCenterButton);                                        // 0x0078(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0299, class USQPawnInventoryComponent*,                                      InventoryComponent);                                       // 0x0080(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

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
