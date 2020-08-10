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

// WidgetBlueprintGeneratedClass BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C
// 0x0031 (FullSize[0x0281] - InheritedSize[0x0250])
// LastOffsetWithSize(0x0250)
#define PADDING_04DF - 0x0000 // Minimum to subtract -> (0000)
class UBP_MarkerWidget_SpawnPoint_C : public USQMapIconWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_04DF, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0250(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_04DF, class UWidgetAnimation*,                                               Selected_Anim);                                            // 0x0258(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_04DF, class UImage*,                                                         SpawnBack_IMG);                                            // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_04DF, class UImage*,                                                         SpawnFront_IMG);                                           // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_04DF, class UTexture2D*,                                                     Image_Selected);                                           // 0x0270(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_04DF, class UTexture2D*,                                                     Image_Deselected);                                         // 0x0278(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_04DF, bool,                                                                  bIsSelected);                                              // 0x0280(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C");
		return ptr;
	}


	void RemoveWidget();
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	void DoSelect(bool bNewState);
	void HandleDelete();
	void SelfTick();
	void Handle_Select();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Construct();
	void ExecuteUbergraph_BP_MarkerWidget_SpawnPoint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
