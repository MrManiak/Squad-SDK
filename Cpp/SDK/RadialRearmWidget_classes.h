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

// WidgetBlueprintGeneratedClass RadialRearmWidget.RadialRearmWidget_C
// 0x00AC (FullSize[0x04D0] - InheritedSize[0x0424])
// LastOffsetWithSize(0x0424)
#define PADDING_0359 - 0x0000 // Minimum to subtract -> (0004)
class URadialRearmWidget_C : public USQRadialIconToggleButton
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_0359, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0428(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000C PADDING_0359, class UImage*,                                                         BPElementImage);                                           // 0x0430(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0359, class UImage*,                                                         BPIconImage);                                              // 0x0438(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001C PADDING_0359, class UImage*,                                                         BPOuterRimImage);                                          // 0x0440(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0359, class UTextBlock*,                                                     MagCounterTextBox);                                        // 0x0448(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002C PADDING_0359, class UBP_RadialItemModel_C*,                                          RelatedActionModel);                                       // 0x0450(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0034 PADDING_0359, class ASQEquipableItem*,                                               Equippable);                                               // 0x0458(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x003C PADDING_0359, struct FLinearColor,                                                   CannotRearmBackgroundColor);                               // 0x0460(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x004C PADDING_0359, struct FLinearColor,                                                   AmmoFullBackgroundColor);                                  // 0x0470(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x005C PADDING_0359, class URadialCenterRearmButton_C*,                                     CenterWidget);                                             // 0x0480(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0064 PADDING_0359, TScriptInterface<class USQRearmSource>,                                RearmSource);                                              // 0x0488(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0074 PADDING_0359, int,                                                                   MagsToRearmCounter);                                       // 0x0498(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0359, float,                                                                 AmmoAvailable);                                            // 0x049C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x007C PADDING_0359, struct FLinearColor,                                                   AmmoFullToggledColor);                                     // 0x04A0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x008C PADDING_0359, struct FLinearColor,                                                   NoAmmoLeftToggledColor);                                   // 0x04B0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x009C PADDING_0359, struct FLinearColor,                                                   DefaultToggledColor);                                      // 0x04C0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RadialRearmWidget.RadialRearmWidget_C");
		return ptr;
	}


	void UpdateBackgroundColors(bool CanClick, bool IsAmmoFull);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FText GetMagsToRearmText();
	void BPInit();
	void OnHoverBegin();
	void UpdateRadialAngle(float UpdatedAngle);
	void AmmoRemainingUpdated(float AmmoRemaining);
	void SetCenterWidget(class URadialCenterRearmButton_C* CenterWidget);
	void OnRightClicked();
	void RecalculateCanClick();
	void InventoryUpdated();
	void Destruct();
	void ExecuteUbergraph_RadialRearmWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
