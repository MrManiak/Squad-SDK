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

// WidgetBlueprintGeneratedClass W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C
// 0x009F (FullSize[0x0348] - InheritedSize[0x02A9])
// LastOffsetWithSize(0x02A9)
#define PADDING_0211 - 0x0000 // Minimum to subtract -> (0007)
class UW_InteractableList_VehicleBay_C : public UW_InteractableWidgetList_Master_C
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0211, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02B0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000F PADDING_0211, class UWidgetAnimation*,                                               Fade);                                                     // 0x02B8(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0017 PADDING_0211, class UVerticalBox*,                                                   InteractList);                                             // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001F PADDING_0211, class UTextBlock*,                                                     ObjectName);                                               // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0027 PADDING_0211, class UHorizontalBox*,                                                 Queue);                                                    // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002F PADDING_0211, class UTextBlock*,                                                     TB_VehicleName);                                           // 0x02D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0037 PADDING_0211, class UClass*,                                                         Interact_Item_Class);                                      // 0x02E0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x003F PADDING_0211, struct FTimerHandle,                                                   Fade_Timer_1);                                             // 0x02E8(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0047 PADDING_0211, bool,                                                                  Opening_1);                                                // 0x02F0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x004F PADDING_0211, struct FSQUsableData,                                                  Repair_Data);                                              // 0x02F8(0x0040)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x008F PADDING_0211, class ABP_VehicleBay_C*,                                               Vehicle_Bay);                                              // 0x0338(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0097 PADDING_0211, class UMaterialInstanceDynamic*,                                       MI_Timer);                                                 // 0x0340(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C");
		return ptr;
	}


	void Get_Action_Name(class UClass* Class, struct FText* Name);
	void Get_Original_Offset();
	void Get_Fade_Animation(class UWidgetAnimation** Fade_Animation);
	void Get_Interact_List(class UVerticalBox** InteractList);
	void Check_for_Repair_Kit(bool* bSuccess);
	void Update_Vehicle_Build();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Set_Interactable_Actor(class AActor* Actor);
	void Update_Queue_Items();
	void ExecuteUbergraph_W_InteractableList_VehicleBay(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
