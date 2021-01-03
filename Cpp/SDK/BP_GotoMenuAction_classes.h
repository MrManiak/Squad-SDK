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

// BlueprintGeneratedClass BP_GotoMenuAction.BP_GotoMenuAction_C
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UBP_GotoMenuAction_C : public UBP_RadialAction_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      GotoMenuModel;                                             // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


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
