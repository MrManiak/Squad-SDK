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

// WidgetBlueprintGeneratedClass W_KeybindItem.W_KeybindItem_C
// 0x0080 (FullSize[0x0260] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_01B0 - 0x0000 // Minimum to subtract -> (0050)
class UW_KeybindItem_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_01B0, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_01B0, class UTextBlock*,                                                     KeybindText);                                              // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_01B0, class USizeBox*,                                                       SizeBox_2);                                                // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_01B0, struct FText,                                                          KeyBind);                                                  // 0x0248(0x0018)  (Edit, BlueprintVisible, ExposeOnSpawn)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_KeybindItem.W_KeybindItem_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_W_KeybindItem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
