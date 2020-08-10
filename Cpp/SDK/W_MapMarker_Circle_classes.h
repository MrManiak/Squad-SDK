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

// WidgetBlueprintGeneratedClass W_MapMarker_Circle.W_MapMarker_Circle_C
// 0x0028 (FullSize[0x0310] - InheritedSize[0x02E8])
// LastOffsetWithSize(0x02E8)
#define PADDING_0118 - 0x0000 // Minimum to subtract -> (0000)
class UW_MapMarker_Circle_C : public UW_MapMarker_DirectorParent_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0118, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02E8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0118, class UWidgetAnimation*,                                               In);                                                       // 0x02F0(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0118, class UBorder*,                                                        Fill);                                                     // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0118, class USizeBox*,                                                       SizeBox_1);                                                // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0118, class UMaterialInstanceDynamic*,                                       MI_Arrows);                                                // 0x0308(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_MapMarker_Circle.W_MapMarker_Circle_C");
		return ptr;
	}


	void Construct();
	void OnTintChanged();
	void Update_Size();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_W_MapMarker_Circle(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
