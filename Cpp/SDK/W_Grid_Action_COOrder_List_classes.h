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

// WidgetBlueprintGeneratedClass W_Grid_Action_COOrder_List.W_Grid_Action_COOrder_List_C
// 0x0010 (FullSize[0x0288] - InheritedSize[0x0278])
// LastOffsetWithSize(0x0278)
#define PADDING_031C - 0x0000 // Minimum to subtract -> (0000)
class UW_Grid_Action_COOrder_List_C : public UW_Grid_Action_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_031C, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0278(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_031C, class UWrapBox*,                                                       WrapBox_1);                                                // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Grid_Action_COOrder_List.W_Grid_Action_COOrder_List_C");
		return ptr;
	}


	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_Grid_Action_COOrder_List(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
