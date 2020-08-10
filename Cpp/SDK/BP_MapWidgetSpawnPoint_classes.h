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

// WidgetBlueprintGeneratedClass BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C
// 0x0044 (FullSize[0x0304] - InheritedSize[0x02C0])
// LastOffsetWithSize(0x02C0)
#define PADDING_02A4 - 0x0000 // Minimum to subtract -> (0008)
class UBP_MapWidgetSpawnPoint_C : public USQMapWidgetSpawnPoint
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_02A4, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02C8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0010 PADDING_02A4, class UWidgetAnimation*,                                               CornerPulse);                                              // 0x02D0(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_02A4, class UImage*,                                                         Corners);                                                  // 0x02D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_02A4, class UScaleBox*,                                                      ScaleBox_Spawn);                                           // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_02A4, class UBorder*,                                                        selected);                                                 // 0x02E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_02A4, class UImage*,                                                         SiegedIcon);                                               // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_02A4, class UImage*,                                                         SpawnTypeIcon);                                            // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_02A4, float,                                                                 Last_Click_Time);                                          // 0x0300(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C");
		return ptr;
	}


	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Update_Spawns_Visibility();
	void Update_Color();
	void OnIsSelectedChanged();
	void OnSpawnPointTypeChanged();
	void Check_Animation();
	void Construct();
	void OnScaleChanged(float UniformScale);
	void OnSiegedChanged();
	void OnSpawningEnabledChanged();
	void ExecuteUbergraph_BP_MapWidgetSpawnPoint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
