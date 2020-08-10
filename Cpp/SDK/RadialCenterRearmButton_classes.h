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

// WidgetBlueprintGeneratedClass RadialCenterRearmButton.RadialCenterRearmButton_C
// 0x010C (FullSize[0x0518] - InheritedSize[0x040C])
// LastOffsetWithSize(0x040C)
#define PADDING_0309 - 0x0000 // Minimum to subtract -> (0004)
class URadialCenterRearmButton_C : public USQRadialIconButton
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_0309, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0410(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000C PADDING_0309, class UImage*,                                                         BG);                                                       // 0x0418(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0309, class UImage*,                                                         BPIconImage);                                              // 0x0420(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001C PADDING_0309, class UTextBlock*,                                                     RearmCostTextbox);                                         // 0x0428(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0309, class UTextBlock*,                                                     RearmItemsText);                                           // 0x0430(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002C PADDING_0309, class UImage*,                                                         ResupplyLitBG);                                            // 0x0438(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0034 PADDING_0309, struct FText,                                                          RearmCostText);                                            // 0x0440(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x004C PADDING_0309, class UBaseRadialMenu_C*,                                              OwnerRadialMenu);                                          // 0x0458(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0054 PADDING_0309, class UBP_RadialItemModel_C*,                                          RelatedActionModel);                                       // 0x0460(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x005C PADDING_0309, class USQPawnInventoryComponent*,                                      InventoryComponent);                                       // 0x0468(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0064 PADDING_0309, float,                                                                 AmmoCostToRearmSelectedWeapons);                           // 0x0470(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x006C PADDING_0309, TMap<class ASQEquipableItem* COMMA int>,                               WeaponsToRearm);                                           // 0x0478(0x0050)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x00BC PADDING_0309, struct FScriptMulticastDelegate,                                       UpdateAmmoRemaining);                                      // 0x04C8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00CC PADDING_0309, float,                                                                 AmmoInSourceRemaining);                                    // 0x04D8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D4 PADDING_0309, TScriptInterface<class USQRearmSource>,                                RearmSource);                                              // 0x04E0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00E4 PADDING_0309, bool,                                                                  bCachedCanRearmAll);                                       // 0x04F0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00E5 PADDING_0309, bool,                                                                  IsRearmAllCostCached);                                     // 0x04F1(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00EC PADDING_0309, struct FScriptMulticastDelegate,                                       InventoryUpdated);                                         // 0x04F8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00FC PADDING_0309, float,                                                                 CachedCostToRearmAll);                                     // 0x0508(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0100 PADDING_0309, bool,                                                                  bCachedCanRearmSelected);                                  // 0x050C(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0104 PADDING_0309, int,                                                                   PreviousRearmCount);                                       // 0x0510(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0108 PADDING_0309, int,                                                                   MissingRearmItems);                                        // 0x0514(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RadialCenterRearmButton.RadialCenterRearmButton_C");
		return ptr;
	}


	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void CheckIfCanRearm();
	void UpdateSourceAmmoRemaining(float AmmoRemaining);
	void CreateRearmRequest(TArray<struct FSQRearmWeaponRequest>* RearmRequest);
	void UpdateSelectedCost(float MagCost);
	bool CalculateTotalRearmCost(float* OutCost);
	struct FText GetRearmingItemCountDisplay();
	void OnHoverBegin();
	void BPInit();
	void AddRearmItems(class ASQEquipableItem* EquippableItem, float RearmItemCount);
	void RemoveRearmItems(class ASQEquipableItem* WeaponToRemove, float RearmItemCount);
	void RearmWeapons();
	void OnHoverEnd();
	void SetInventoryComponent(class USQPawnInventoryComponent* InventoryComponent);
	void InventoryAmmoUpdated();
	void InitializeRearmSourceListener();
	void UpdateSelfCanClick();
	void AmmoUpdated();
	void Destruct();
	void ExecuteUbergraph_RadialCenterRearmButton(int EntryPoint);
	void InventoryUpdated__DelegateSignature();
	void UpdateAmmoRemaining__DelegateSignature(float AmmoRemaining);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
