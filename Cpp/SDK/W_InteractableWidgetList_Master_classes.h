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

// WidgetBlueprintGeneratedClass W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C
// 0x0079 (FullSize[0x02A9] - InheritedSize[0x0230])
class UW_InteractableWidgetList_Master_C : public USQInteractableWidgetList
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       Display_Name;                                              // 0x0238(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      Interact_Actor;                                            // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSQUsableData                               Interact_Data;                                             // 0x0258(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                Stop_Drawing_Timer;                                        // 0x0298(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               Should_Set_Position;                                       // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Open;                                                      // 0x02A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Can_Open;                                                  // 0x02A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DM1I[0x1];                                     // 0x02A3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Edge_Padding;                                              // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Force_Update_Interaction_Items;                            // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


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
