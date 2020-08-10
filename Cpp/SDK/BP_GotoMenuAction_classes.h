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

// BlueprintGeneratedClass BP_GotoMenuAction.BP_GotoMenuAction_C
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
#define PADDING_00DB - 0x0000 // Minimum to subtract -> (0000)
class UBP_GotoMenuAction_C : public UBP_RadialAction_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_00DB, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0030(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_00DB, class UClass*,                                                         GotoMenuModel);                                            // 0x0038(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GotoMenuAction.BP_GotoMenuAction_C");
		return ptr;
	}


	void DoAction(class UBaseRadialMenu_C* RadialMenu, class UClass* MenuModel);
	void ExecuteUbergraph_BP_GotoMenuAction(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
