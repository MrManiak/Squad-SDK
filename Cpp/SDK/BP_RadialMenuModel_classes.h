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

// BlueprintGeneratedClass BP_RadialMenuModel.BP_RadialMenuModel_C
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UBP_RadialMenuModel_C : public UObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      CenterButton;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              OuterRing;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              Sub_Models;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


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
