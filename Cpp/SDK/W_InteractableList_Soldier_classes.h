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

// WidgetBlueprintGeneratedClass W_InteractableList_Soldier.W_InteractableList_Soldier_C
// 0x000F (FullSize[0x02E0] - InheritedSize[0x02D1])
class UW_InteractableList_Soldier_C : public UW_InteractableList_Generic_C
{
public:
	unsigned char                                      UnknownData_XWAG[0x7];                                     // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_InteractableList_Soldier.W_InteractableList_Soldier_C");
		return ptr;
	}



	void Set_Position();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_W_InteractableList_Soldier(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
