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

// WidgetBlueprintGeneratedClass BP_SpawnPointsListMemberWidget.BP_SpawnPointsListMemberWidget_C
// 0x0090 (FullSize[0x0330] - InheritedSize[0x02A0])
class UBP_SpawnPointsListMemberWidget_C : public USQCoreStateSpawnPointsListWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image_162;                                                 // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          SpawnButton;                                               // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TB_Time;                                                   // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASQGameSpawn*                                SpawnPoint;                                                // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                                HoveredColor;                                              // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                SelectedColor;                                             // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                NotSelectedColor;                                          // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       LocationText;                                              // 0x02F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       TypeText;                                                  // 0x0310(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_PlayerController_C*                      My_PC;                                                     // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_SpawnPointsListMemberWidget.BP_SpawnPointsListMemberWidget_C");
		return ptr;
	}



	void UpdateType();
	void UpdateLocation();
	void UpdateText();
	void OnIsSelectedChanged();
	void OnSpawnPointLocationChanged();
	void OnSpawnPointTypeChanged();
	void BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void Construct();
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_1_OnDoubleClicked__DelegateSignature();
	void ExecuteUbergraph_BP_SpawnPointsListMemberWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
