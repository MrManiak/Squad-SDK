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

// WidgetBlueprintGeneratedClass TextRadialEntry_Tooltip.TextRadialEntry_Tooltip_C
// 0x0108 (FullSize[0x02E8] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0240 - 0x0000 // Minimum to subtract -> (0050)
class UTextRadialEntry_Tooltip_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0240, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0240, class UTextBlock*,                                                     CostText);                                                 // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0240, class UTextBlock*,                                                     details);                                                  // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0240, class UTextBlock*,                                                     HeaderText);                                               // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0240, class UHorizontalBox*,                                                 HorizontalBox_1);                                          // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0240, class UImage*,                                                         Image_3);                                                  // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0240, struct FText,                                                          Details_Text);                                             // 0x0260(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0240, struct FText,                                                          Header_Text);                                              // 0x0278(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0240, int,                                                                   Cost);                                                     // 0x0290(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0240, struct FText,                                                          Cost_Text);                                                // 0x0298(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0240, struct FName,                                                          Key0);                                                     // 0x02B0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_0240, struct FName,                                                          Key1);                                                     // 0x02B8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_0240, struct FName,                                                          Key2);                                                     // 0x02C0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_0240, struct FText,                                                          MissingTextBinding);                                       // 0x02C8(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0100 PADDING_0240, class UTexture2D*,                                                     CostIconImage);                                            // 0x02E0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TextRadialEntry_Tooltip.TextRadialEntry_Tooltip_C");
		return ptr;
	}


	void FindKeyName(const struct FName& ActionName, struct FName* KeyName);
	struct FText GetText_1();
	struct FText Get_HeaderText_Text_1();
	struct FText Get_Details_Text_1();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_TextRadialEntry_Tooltip(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
