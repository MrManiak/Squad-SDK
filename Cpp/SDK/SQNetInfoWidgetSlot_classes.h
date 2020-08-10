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

// WidgetBlueprintGeneratedClass SQNetInfoWidgetSlot.SQNetInfoWidgetSlot_C
// 0x0070 (FullSize[0x0250] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0222 - 0x0000 // Minimum to subtract -> (0050)
class USQNetInfoWidgetSlot_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0222, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0222, class UImage*,                                                         Image);                                                    // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0222, class USQRichTextBlock*,                                               SQRichTextBlock_48);                                       // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0222, class UTextBlock*,                                                     TitleText);                                                // 0x0248(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SQNetInfoWidgetSlot.SQNetInfoWidgetSlot_C");
		return ptr;
	}


	struct FText GetBodyText();
	struct FText GetTitleText();
	void OnFail_9D89973243B31B6470A48FB1F15C4057(class UTexture2DDynamic* Texture);
	void OnSuccess_9D89973243B31B6470A48FB1F15C4057(class UTexture2DDynamic* Texture);
	void Construct();
	void ExecuteUbergraph_SQNetInfoWidgetSlot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
