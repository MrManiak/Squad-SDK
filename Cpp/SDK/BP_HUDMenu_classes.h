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

// BlueprintGeneratedClass BP_HUDMenu.BP_HUDMenu_C
// 0x0019 (FullSize[0x09C1] - InheritedSize[0x09A8])
class ABP_HUDMenu_C : public ASQHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x09A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMainMenuScreen_C*                           MainMenu_Widget;                                           // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShowingMainMenu;                                          // 0x09C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HUDMenu.BP_HUDMenu_C");
		return ptr;
	}



	void CreateMainMenu();
	void ReceiveBeginPlay();
	void Check_Cursor();
	void ExecuteUbergraph_BP_HUDMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
