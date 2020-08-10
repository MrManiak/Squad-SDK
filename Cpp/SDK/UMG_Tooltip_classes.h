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

// WidgetBlueprintGeneratedClass UMG_Tooltip.UMG_Tooltip_C
// 0x0030 (FullSize[0x0270] - InheritedSize[0x0240])
// LastOffsetWithSize(0x0240)
#define PADDING_0187 - 0x0000 // Minimum to subtract -> (0000)
class UUMG_Tooltip_C : public USQToolTipBaseWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0187, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0240(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0187, class UWidgetAnimation*,                                               OpenAnim);                                                 // 0x0248(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0187, class UTextBlock*,                                                     TextBlock_8);                                              // 0x0250(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0187, struct FText,                                                          Inherit_Text);                                             // 0x0258(0x0018)  (Edit, BlueprintVisible, ExposeOnSpawn)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Tooltip.UMG_Tooltip_C");
		return ptr;
	}


	struct FText GetText_1();
	void Construct();
	void ExecuteUbergraph_UMG_Tooltip(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
