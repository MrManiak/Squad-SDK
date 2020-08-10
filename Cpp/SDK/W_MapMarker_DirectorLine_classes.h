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

// WidgetBlueprintGeneratedClass W_MapMarker_DirectorLine.W_MapMarker_DirectorLine_C
// 0x0038 (FullSize[0x0320] - InheritedSize[0x02E8])
// LastOffsetWithSize(0x02E8)
#define PADDING_03B8 - 0x0000 // Minimum to subtract -> (0000)
class UW_MapMarker_DirectorLine_C : public UW_MapMarker_DirectorParent_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03B8, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02E8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_03B8, class UWidgetAnimation*,                                               In);                                                       // 0x02F0(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_03B8, class UImage*,                                                         CircleOrigin);                                             // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_03B8, class UBorder*,                                                        Fill);                                                     // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_03B8, class UImage*,                                                         Line);                                                     // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_03B8, class UOverlay*,                                                       Overlay_1);                                                // 0x0310(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_03B8, class USizeBox*,                                                       SizeBox_1);                                                // 0x0318(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_MapMarker_DirectorLine.W_MapMarker_DirectorLine_C");
		return ptr;
	}


	void OnTintChanged();
	void Construct();
	void Update_Size();
	void Init_Director_Marker();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_W_MapMarker_DirectorLine(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
