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

// WidgetBlueprintGeneratedClass W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C
// 0x0031 (FullSize[0x02C1] - InheritedSize[0x0290])
// LastOffsetWithSize(0x0290)
#define PADDING_0127 - 0x0000 // Minimum to subtract -> (0000)
class UW_InteractableItem_SelfHeal_C : public UW_InteractableItem_Master_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0127, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0290(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0127, class UWidgetAnimation*,                                               Fade);                                                     // 0x0298(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0127, class UWidgetAnimation*,                                               Bleed);                                                    // 0x02A0(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0127, class UHorizontalBox*,                                                 FormatBox);                                                // 0x02A8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0127, class UImage*,                                                         Image_1);                                                  // 0x02B0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0127, class UImage*,                                                         Line);                                                     // 0x02B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0127, bool,                                                                  Is_Shown);                                                 // 0x02C0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C");
		return ptr;
	}


	void Has_Field_Dressings(class ASQSoldier* Inventory, bool* Has_Dressing, int* Slot);
	void Set_Visibility(bool Show);
	void Has_Healing_Item();
	void Update_Self_Heal();
	void Get_Format_Box(class UHorizontalBox** FormatBox);
	void Construct();
	void ExecuteUbergraph_W_InteractableItem_SelfHeal(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
