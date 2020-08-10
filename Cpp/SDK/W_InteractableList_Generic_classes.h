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

// WidgetBlueprintGeneratedClass W_InteractableList_Generic.W_InteractableList_Generic_C
// 0x0028 (FullSize[0x02D1] - InheritedSize[0x02A9])
// LastOffsetWithSize(0x02A9)
#define PADDING_0007 - 0x0000 // Minimum to subtract -> (0007)
class UW_InteractableList_Generic_C : public UW_InteractableWidgetList_Master_C
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0007, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02B0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000F PADDING_0007, class UWidgetAnimation*,                                               Fade);                                                     // 0x02B8(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0017 PADDING_0007, class UVerticalBox*,                                                   InteractList);                                             // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001F PADDING_0007, class UTextBlock*,                                                     ObjectName);                                               // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0027 PADDING_0007, bool,                                                                  Open_1);                                                   // 0x02D0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_InteractableList_Generic.W_InteractableList_Generic_C");
		return ptr;
	}


	void Get_Fade_Animation(class UWidgetAnimation** Fade_Animation);
	void Get_Interact_List(class UVerticalBox** InteractList);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Create_Interaction_Items(bool Force);
	void ExecuteUbergraph_W_InteractableList_Generic(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
