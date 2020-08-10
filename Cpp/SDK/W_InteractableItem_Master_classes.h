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

// WidgetBlueprintGeneratedClass W_InteractableItem_Master.W_InteractableItem_Master_C
// 0x0060 (FullSize[0x0290] - InheritedSize[0x0230])
// LastOffsetWithSize(0x01E0)
#define PADDING_0CA5 - 0x0000 // Minimum to subtract -> (0050)
class UW_InteractableItem_Master_C : public USQInteractableWidgetItem
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0CA5, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0CA5, struct FSQUsableWidgetData,                                            Data);                                                     // 0x0238(0x0038)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0CA5, class AActor*,                                                         Interact_Actor);                                           // 0x0270(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0CA5, struct FText,                                                          Last_Text);                                                // 0x0278(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_InteractableItem_Master.W_InteractableItem_Master_C");
		return ptr;
	}


	void Get_Format_Box(class UHorizontalBox** FormatBox);
	void Format_Text();
	void Get_Short_Action_Name(const struct FString& In_Action, struct FText* Short_Name);
	void Set_Interactable_Actor(class AActor* Actor);
	void Clear_Interactable();
	void Set_Interact_Data(const struct FSQUsableWidgetData& Interact_Data, class AActor* Actor);
	void ExecuteUbergraph_W_InteractableItem_Master(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
