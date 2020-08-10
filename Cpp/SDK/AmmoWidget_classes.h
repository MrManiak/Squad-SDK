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

// WidgetBlueprintGeneratedClass AmmoWidget.AmmoWidget_C
// 0x0068 (FullSize[0x03A0] - InheritedSize[0x0338])
// LastOffsetWithSize(0x0338)
#define PADDING_00BD - 0x0000 // Minimum to subtract -> (0008)
class UAmmoWidget_C : public USQAmmoWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_00BD, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0340(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0010 PADDING_00BD, class UTextBlock*,                                                     BPAmmoCountTextBlock);                                     // 0x0348(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_00BD, class UImage*,                                                         BPChamberedRound);                                         // 0x0350(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_00BD, class UTextBlock*,                                                     BPFiremode);                                               // 0x0358(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_00BD, class UTextBlock*,                                                     BPWeaponName);                                             // 0x0360(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_00BD, class UTextBlock*,                                                     BPZeroingTextblock);                                       // 0x0368(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_00BD, class UCanvasPanel*,                                                   CanvasPanel_2);                                            // 0x0370(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_00BD, class UCanvasPanel*,                                                   CanvasWeaponName);                                         // 0x0378(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_00BD, class UMagazineGroupWidget_C*,                                         MagGroup1);                                                // 0x0380(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_00BD, class UMagazineGroupWidget_C*,                                         MagGroup2);                                                // 0x0388(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_00BD, class UUMG_VehicleCargo_C*,                                            UMG_VehicleCargo_610);                                     // 0x0390(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_00BD, class UWidgetSwitcher*,                                                WidgetSwitcher_2);                                         // 0x0398(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AmmoWidget.AmmoWidget_C");
		return ptr;
	}


	void Construct();
	void BPInit();
	void OnCurrentWeaponChanged();
	void OnShowResourceAmounts();
	void OnShowCurrentWeapon();
	void ExecuteUbergraph_AmmoWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
