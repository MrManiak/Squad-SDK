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

// BlueprintGeneratedClass BP_Crewman_Kits.BP_Crewman_Kits_C
// 0x0009 (FullSize[0x0061] - InheritedSize[0x0058])
class UBP_Crewman_Kits_C : public UBP_RadialMenuModel_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0058(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	ESQRoleTypeEnum                                    Role_Category;                                             // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Crewman_Kits.BP_Crewman_Kits_C");
		return ptr;
	}



	void Create_Widgets(class UBaseRadialMenu_C* Base_Radial);
	void CreateChildWidgets(class UBaseRadialMenu_C* BaseRadialMenu);
	void ExecuteUbergraph_BP_Crewman_Kits(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
