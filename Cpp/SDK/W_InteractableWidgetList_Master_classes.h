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

// WidgetBlueprintGeneratedClass W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C
// 0x0079 (FullSize[0x02A9] - InheritedSize[0x0230])
// LastOffsetWithSize(0x01E0)
#define PADDING_049F - 0x0000 // Minimum to subtract -> (0050)
class UW_InteractableWidgetList_Master_C : public USQInteractableWidgetList
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_049F, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_049F, struct FText,                                                          Display_Name);                                             // 0x0238(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0070 PADDING_049F, class AActor*,                                                         Interact_Actor);                                           // 0x0250(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_049F, struct FSQUsableData,                                                  Interact_Data);                                            // 0x0258(0x0040)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_049F, struct FTimerHandle,                                                   Stop_Drawing_Timer);                                       // 0x0298(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_049F, bool,                                                                  Should_Set_Position);                                      // 0x02A0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00C1 PADDING_049F, bool,                                                                  Open);                                                     // 0x02A1(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00C2 PADDING_049F, bool,                                                                  Can_Open);                                                 // 0x02A2(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00C4 PADDING_049F, float,                                                                 Edge_padding);                                             // 0x02A4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_049F, bool,                                                                  Force_Update_Interaction_Items);                           // 0x02A8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C");
		return ptr;
	}


	void Close_Radial_From_Interactable();
	void Get_Fade_Animation(class UWidgetAnimation** Fade_Animation);
	void Fade_Anim(bool Open);
	void Get_Interact_List(class UVerticalBox** InteractList);
	void Create_Interaction_Items(bool Force);
	void Is_Player_Zoomed(bool* Is_Zoomed);
	void Close_Animation();
	void Open_Animation(bool Force);
	void Clear_Interactable();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Set_Position();
	void Set_Interactable_Actor(class AActor* Actor);
	void Set_Interact_Data(const struct FSQUsableWidgetData& Interact_Data, class AActor* Actor);
	void ExecuteUbergraph_W_InteractableWidgetList_Master(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
