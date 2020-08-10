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

// BlueprintGeneratedClass BP_RadialMenuModel.BP_RadialMenuModel_C
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_08D7 - 0x0000 // Minimum to subtract -> (0000)
class UBP_RadialMenuModel_C : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_08D7, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0028(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_08D7, class UClass*,                                                         CenterButton);                                             // 0x0030(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_08D7, TArray<class UClass*>,                                                 OuterRing);                                                // 0x0038(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0020 PADDING_08D7, TArray<class UClass*>,                                                 Sub_Models);                                               // 0x0048(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RadialMenuModel.BP_RadialMenuModel_C");
		return ptr;
	}


	void GetModelReferencesFromClass(class UClass* ModelClass, class UBP_RadialItemModel_C** AsBP_Radial_Item_Model, class UBPRadialPopulatorIcon_C** AsBPRadial_Populator_Icon);
	void CreateRadialChildWidget(class UBaseRadialMenu_C* BaseRadialMenu, class UBP_RadialItemModel_C* WidgetModel, class UBPRadialPopulatorIcon_C* Populator, class USQUserWidget** CreatedWidget);
	void Center_Button_Hit(class UBaseRadialMenu_C* Radial_Menu);
	void CreateChildWidgets(class UBaseRadialMenu_C* BaseRadialMenu);
	void ExecuteUbergraph_BP_RadialMenuModel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
