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

// BlueprintGeneratedClass IWidget_Interactable.IWidget_Interactable_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UIWidget_Interactable_C : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IWidget_Interactable.IWidget_Interactable_C");
		return ptr;
	}


	void Clear_Interactable();
	void Set_Interact_Data(const struct FSQUsableWidgetData& Interact_Data, class AActor* Actor);
	void Set_Interactable_Actor(class AActor* Actor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
