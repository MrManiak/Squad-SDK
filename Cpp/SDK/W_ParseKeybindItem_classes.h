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

// WidgetBlueprintGeneratedClass W_ParseKeybindItem.W_ParseKeybindItem_C
// 0x0118 (FullSize[0x02F8] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_010E - 0x0000 // Minimum to subtract -> (0050)
class UW_ParseKeybindItem_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_010E, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_010E, class UBorder*,                                                        Border_2);                                                 // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_010E, class UTextBlock*,                                                     KeybindText);                                              // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_010E, class UBorder*,                                                        PaddingBorder);                                            // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_010E, class USizeBox*,                                                       SizeBox_2);                                                // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_010E, struct FText,                                                          KeyBind);                                                  // 0x0258(0x0018)  (Edit, BlueprintVisible, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x0090 PADDING_010E, int,                                                                   Font_Size);                                                // 0x0270(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_010E, struct FSlateFontInfo,                                                 New_Font);                                                 // 0x0278(0x0050)  (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_010E, struct FLinearColor,                                                   BG_Color);                                                 // 0x02C8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_010E, struct FMargin,                                                        Text_Padding);                                             // 0x02D8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0108 PADDING_010E, struct FMargin,                                                        Internal_Padding);                                         // 0x02E8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ParseKeybindItem.W_ParseKeybindItem_C");
		return ptr;
	}


	void Get_Short_Name(const struct FName& Action_Name, struct FText* Short_Name);
	void Parse_Keybind(const struct FString& inString, struct FText* Short_Name);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_ParseKeybindItem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
