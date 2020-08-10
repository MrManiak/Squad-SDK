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

// WidgetBlueprintGeneratedClass CaptureZoneStatusWidget.CaptureZoneStatusWidget_C
// 0x00B0 (FullSize[0x0290] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_03AC - 0x0000 // Minimum to subtract -> (0050)
class UCaptureZoneStatusWidget_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_03AC, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_03AC, class UProgressBar*,                                                   CaptureBar);                                               // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_03AC, class UImage*,                                                         FlagImage);                                                // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_03AC, class UOverlay*,                                                       Overlay_Root);                                             // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_03AC, class USizeBox*,                                                       SizeBox_CaptureBar);                                       // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_03AC, class UTextBlock*,                                                     TB_FlagName);                                              // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_03AC, class UImage*,                                                         UncapOverlay);                                             // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_03AC, struct FLinearColor,                                                   Friendly_Color);                                           // 0x0268(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_03AC, struct FLinearColor,                                                   Enemy_Color);                                              // 0x0278(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_03AC, class USQCaptureZoneComponent*,                                        CaptureZone);                                              // 0x0288(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CaptureZoneStatusWidget.CaptureZoneStatusWidget_C");
		return ptr;
	}


	void Fog_of_War();
	struct FText Get_Location();
	void Refresh_Widget();
	void UpdateCaptureZone(class USQCaptureZoneComponent* CaptureZone);
	void Update_Widget();
	struct FSlateBrush GetFlagBrush();
	struct FLinearColor GetProgressColor();
	void Construct();
	void ExecuteUbergraph_CaptureZoneStatusWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
