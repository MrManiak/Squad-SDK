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

// WidgetBlueprintGeneratedClass W_Marker_Request.W_Marker_Request_C
// 0x0058 (FullSize[0x0328] - InheritedSize[0x02D0])
// LastOffsetWithSize(0x02D0)
#define PADDING_010A - 0x0000 // Minimum to subtract -> (0000)
class UW_Marker_Request_C : public USQMapWidgetMapMarkerSelectable
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_010A, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02D0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_010A, class UWidgetAnimation*,                                               Animation);                                                // 0x02D8(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_010A, class UBorder*,                                                        Border_1);                                                 // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_010A, class UImage*,                                                         Image_3);                                                  // 0x02E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_010A, class UScaleBox*,                                                      ScaleBox_1);                                               // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_010A, class USizeBox*,                                                       SizeBox_1);                                                // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_010A, class UTextBlock*,                                                     TB_Timer);                                                 // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_010A, struct FTimerHandle,                                                   Update_Timer);                                             // 0x0308(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_010A, bool,                                                                  Faded);                                                    // 0x0310(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0048 PADDING_010A, class ABP_MapMarker_CommandMaster_C*,                                  MapMarker_Command);                                        // 0x0318(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_010A, class ASQPlayerController*,                                            My_SQPC);                                                  // 0x0320(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Marker_Request.W_Marker_Request_C");
		return ptr;
	}


	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnScaleChanged(float UniformScale);
	void Construct();
	void Find_Map_Icon();
	void OnRightClicked();
	void Set_Vis_to_Commander();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_W_Marker_Request(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
