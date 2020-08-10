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

// BlueprintGeneratedClass BP_HUDMenu.BP_HUDMenu_C
// 0x0019 (FullSize[0x09C1] - InheritedSize[0x09A8])
// LastOffsetWithSize(0x09A8)
#define PADDING_02FD - 0x0000 // Minimum to subtract -> (0000)
class ABP_HUDMenu_C : public ASQHUD
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_02FD, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x09A8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_02FD, class USceneComponent*,                                                DefaultSceneRoot);                                         // 0x09B0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_02FD, class UMainMenuScreen_C*,                                              MainMenu_Widget);                                          // 0x09B8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_02FD, bool,                                                                  bShowingMainMenu);                                         // 0x09C0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

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
