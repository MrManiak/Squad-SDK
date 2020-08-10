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

// WidgetBlueprintGeneratedClass SteamInventorySettings.SteamInventorySettings_C
// 0x0068 (FullSize[0x0248] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_039E - 0x0000 // Minimum to subtract -> (0050)
class USteamInventorySettings_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_039E, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_039E, class UVerticalBox*,                                                   Entries);                                                  // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_039E, class UScrollBox*,                                                     ScrollBox);                                                // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SteamInventorySettings.SteamInventorySettings_C");
		return ptr;
	}


	void HideSelf();
	void RefreshInventory();
	void Toggle(bool bSelected, class USettingsItem_TickBox_C* Button);
	void Construct();
	void ExecuteUbergraph_SteamInventorySettings(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
