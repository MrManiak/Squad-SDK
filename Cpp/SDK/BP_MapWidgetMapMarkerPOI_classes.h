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

// WidgetBlueprintGeneratedClass BP_MapWidgetMapMarkerPOI.BP_MapWidgetMapMarkerPOI_C
// 0x0051 (FullSize[0x0321] - InheritedSize[0x02D0])
// LastOffsetWithSize(0x02D0)
#define PADDING_011C - 0x0000 // Minimum to subtract -> (0000)
class UBP_MapWidgetMapMarkerPOI_C : public USQMapWidgetMapMarkerSelectable
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_011C, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02D0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_011C, class UWidgetAnimation*,                                               In);                                                       // 0x02D8(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_011C, class UBorder*,                                                        Border_Content);                                           // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_011C, class UImage*,                                                         Image_1);                                                  // 0x02E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_011C, class UBorder*,                                                        MainIcon);                                                 // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_011C, class UScaleBox*,                                                      ScaleBox_1);                                               // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_011C, class USizeBox*,                                                       SizeBox_1);                                                // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_011C, class UTextBlock*,                                                     TB_Pos);                                                   // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_011C, class UTextBlock*,                                                     TB_Squad);                                                 // 0x0310(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_011C, struct FTimerHandle,                                                   Fade_Timer);                                               // 0x0318(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_011C, bool,                                                                  Faded);                                                    // 0x0320(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MapWidgetMapMarkerPOI.BP_MapWidgetMapMarkerPOI_C");
		return ptr;
	}


	void OnTintChanged();
	void OnRightClicked();
	void OnSquadIdChanged();
	void FInd_Map_Location();
	void OnScaleChanged(float UniformScale);
	void Destruct();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Refresh_Vis();
	void ExecuteUbergraph_BP_MapWidgetMapMarkerPOI(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
