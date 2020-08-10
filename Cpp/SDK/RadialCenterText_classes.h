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

// WidgetBlueprintGeneratedClass RadialCenterText.RadialCenterText_C
// 0x00E0 (FullSize[0x03D8] - InheritedSize[0x02F8])
// LastOffsetWithSize(0x02F8)
#define PADDING_02B2 - 0x0000 // Minimum to subtract -> (0000)
class URadialCenterText_C : public USQRadialButton
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_02B2, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02F8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_02B2, class UImage*,                                                         Background);                                               // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_02B2, class UImage*,                                                         BottomDivider);                                            // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_02B2, class UTextBlock*,                                                     BPText);                                                   // 0x0310(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_02B2, class UCanvasPanel*,                                                   CanvasPanel_1);                                            // 0x0318(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_02B2, class UTextBlock*,                                                     ClarificationText);                                        // 0x0320(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_02B2, class UTextBlock*,                                                     ConstructionCost);                                         // 0x0328(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_02B2, class UImage*,                                                         HammerImage);                                              // 0x0330(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_02B2, class UImage*,                                                         HexagonImage);                                             // 0x0338(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_02B2, class UImage*,                                                         TopDivider);                                               // 0x0340(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_02B2, class UImage*,                                                         WarningImage);                                             // 0x0348(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_02B2, class UTextBlock*,                                                     WarningText);                                              // 0x0350(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_02B2, struct FText,                                                          Text);                                                     // 0x0358(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x0078 PADDING_02B2, struct FText,                                                          CachedRearmCostText);                                      // 0x0370(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0090 PADDING_02B2, class UBaseRadialMenu_C*,                                              OwnerRadialMenu);                                          // 0x0388(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_02B2, class UBP_RadialItemModel_C*,                                          RelatedActionModel);                                       // 0x0390(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_02B2, struct FLinearColor,                                                   UnavailableHammer);                                        // 0x0398(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_02B2, struct FLinearColor,                                                   UnavailableHexagon);                                       // 0x03A8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_02B2, struct FLinearColor,                                                   AvailableHexagon);                                         // 0x03B8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_02B2, struct FLinearColor,                                                   AvailableHammer);                                          // 0x03C8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RadialCenterText.RadialCenterText_C");
		return ptr;
	}


	void HideResources();
	void ShowResources(class UDeployableRadialEntry_C* Widget, struct FText* Outputstring);
	void GetWidgetText(class USQRadialButton* Widget, struct FText* DisplayText);
	struct FText GetText_1();
	void OnHoverBegin();
	void ExecuteUbergraph_RadialCenterText(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
