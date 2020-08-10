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

// BlueprintGeneratedClass BP_GenericKits.BP_GenericKits_C
// 0x0009 (FullSize[0x0061] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0058)
#define PADDING_04A7 - 0x0000 // Minimum to subtract -> (0000)
class UBP_GenericKits_C : public UBP_RadialMenuModel_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_04A7, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0058(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_04A7, ESQRoleTypeEnum,                                                       Role_Category);                                            // 0x0060(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GenericKits.BP_GenericKits_C");
		return ptr;
	}


	void Create_Widgets(class UBaseRadialMenu_C* Base_Radial);
	void CreateChildWidgets(class UBaseRadialMenu_C* BaseRadialMenu);
	void ExecuteUbergraph_BP_GenericKits(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
