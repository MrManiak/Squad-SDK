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

// WidgetBlueprintGeneratedClass W_InteractableList_Explosives.W_InteractableList_Explosives_C
// 0x0127 (FullSize[0x03D0] - InheritedSize[0x02A9])
class UW_InteractableList_Explosives_C : public UW_InteractableWidgetList_Master_C
{
public:
	unsigned char                                      UnknownData_DQY4[0x7];                                     // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Fade;                                                      // 0x02B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                                InteractList;                                              // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ObjectName;                                                // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSQUsableData                               Need_Shovel_Data;                                          // 0x02D0(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSQUsableData                               How_to_use_Data;                                           // 0x0310(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSQUsableData                               No_Shovel_Data;                                            // 0x0350(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSQUsableData                               Unbuild_Only_Data;                                         // 0x0390(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_InteractableList_Explosives.W_InteractableList_Explosives_C");
		return ptr;
	}



	void Get_Fade_Animation(class UWidgetAnimation** Fade_Animation);
	void Get_Interact_List(class UVerticalBox** InteractList);
	void Create_Shovel_Items();
	void Is_Deployable_Built(bool* Is_Built, bool* Full_Health);
	void Soldier_Has_Shovel(bool* Shovel_Equipped, bool* Owns_Shovel);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Set_Custom_Data();
	void ExecuteUbergraph_W_InteractableList_Explosives(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
