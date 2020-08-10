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

// WidgetBlueprintGeneratedClass BP_Tooltip_RallyPoint.BP_Tooltip_RallyPoint_C
// 0x0020 (FullSize[0x0260] - InheritedSize[0x0240])
// LastOffsetWithSize(0x0240)
#define PADDING_0397 - 0x0000 // Minimum to subtract -> (0000)
class UBP_Tooltip_RallyPoint_C : public USQToolTipBaseWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0397, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0240(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0397, class UWidgetAnimation*,                                               OpenAnim);                                                 // 0x0248(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0397, class UImage*,                                                         BackgroundImage);                                          // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0397, class UTextBlock*,                                                     RallyPointText);                                           // 0x0258(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Tooltip_RallyPoint.BP_Tooltip_RallyPoint_C");
		return ptr;
	}


	struct FText GetText_1();
	void Construct();
	void ExecuteUbergraph_BP_Tooltip_RallyPoint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
