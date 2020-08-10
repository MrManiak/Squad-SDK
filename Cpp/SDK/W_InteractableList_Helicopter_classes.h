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

// WidgetBlueprintGeneratedClass W_InteractableList_Helicopter.W_InteractableList_Helicopter_C
// 0x00BF (FullSize[0x0368] - InheritedSize[0x02A9])
// LastOffsetWithSize(0x02A9)
#define PADDING_0154 - 0x0000 // Minimum to subtract -> (0007)
class UW_InteractableList_Helicopter_C : public UW_InteractableWidgetList_Master_C
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0154, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02B0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000F PADDING_0154, class UWidgetAnimation*,                                               Fade);                                                     // 0x02B8(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0017 PADDING_0154, class UBorder*,                                                        Border_5);                                                 // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001F PADDING_0154, class UWidgetSwitcher*,                                                CommandSwitch);                                            // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0027 PADDING_0154, class UImage*,                                                         IconSquad);                                                // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002F PADDING_0154, class UWidgetSwitcher*,                                                IconSwitch);                                               // 0x02D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0037 PADDING_0154, class UImage*,                                                         Image_3);                                                  // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x003F PADDING_0154, class UVerticalBox*,                                                   InteractList);                                             // 0x02E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0047 PADDING_0154, class UTextBlock*,                                                     ObjectName);                                               // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x004F PADDING_0154, class USizeBox*,                                                       SizeClaim);                                                // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0057 PADDING_0154, class UBorder*,                                                        SquadColorBorder);                                         // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x005F PADDING_0154, class UTextBlock*,                                                     TB_SquadID);                                               // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0067 PADDING_0154, class UClass*,                                                         Interact_Item_Class);                                      // 0x0310(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x006F PADDING_0154, struct FTimerHandle,                                                   Fade_Timer_1);                                             // 0x0318(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0077 PADDING_0154, bool,                                                                  Opening_1);                                                // 0x0320(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x007F PADDING_0154, struct FSQUsableData,                                                  Repair_Data);                                              // 0x0328(0x0040)  (Edit, BlueprintVisible, DisableEditOnInstance)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_InteractableList_Helicopter.W_InteractableList_Helicopter_C");
		return ptr;
	}


	void Get_Original_Offset();
	void Get_Fade_Animation(class UWidgetAnimation** Fade_Animation);
	void Get_Interact_List(class UVerticalBox** InteractList);
	void Check_for_Repair_Kit(bool* bSuccess);
	void Update_Vehicle_Claim();
	void Create_Interaction_Items(bool Force);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_W_InteractableList_Helicopter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
