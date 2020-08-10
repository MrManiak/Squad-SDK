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

// WidgetBlueprintGeneratedClass W_SQRoamingMap.W_SQRoamingMap_C
// 0x0040 (FullSize[0x02F0] - InheritedSize[0x02B0])
// LastOffsetWithSize(0x02B0)
#define PADDING_02F1 - 0x0000 // Minimum to subtract -> (0000)
class UW_SQRoamingMap_C : public UUMG_MenuBase_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_02F1, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02B0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_02F1, class UWidgetAnimation*,                                               RoamingMapOpenCloseAnim);                                  // 0x02B8(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_02F1, class UOverlay*,                                                       MainObject);                                               // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_02F1, class UW_SQMapCore_C*,                                                 MapCoreWidget);                                            // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_02F1, class UW_GameTime_C*,                                                  W_GameTime);                                               // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_02F1, class UW_PlayerPosition_C*,                                            W_PlayerPosition);                                         // 0x02D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_02F1, class UW_TeamTickets_C*,                                               W_TeamTickets);                                            // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_02F1, class UW_TerritoryControl_Bar_C*,                                      W_TerritoryControl_TugofWar);                              // 0x02E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_SQRoamingMap.W_SQRoamingMap_C");
		return ptr;
	}


	void MouseWheelZoom(float MouseWheelAxis);
	void GetOwningPawnMapScreenPosition(struct FVector2D* Result, bool* Success);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Opened();
	void Closed();
	void ExecuteUbergraph_W_SQRoamingMap(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
